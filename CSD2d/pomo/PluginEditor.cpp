#include "PluginEditor.h"
#include "PluginProcessor.h"

//==============================================================================
AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor(
    AudioPluginAudioProcessor &p)
    : AudioProcessorEditor(&p), processorRef(p) {
  juce::ignoreUnused(processorRef);
  // Make sure that before the constructor has finished, you've set the
  // editor's size to whatever you need it to be.
  addAndMakeVisible(startButton);
  addAndMakeVisible(breakButton);
  addAndMakeVisible(giveUpButton);
  showUI();
  setSize(400, 300);
  startTimer(100);
}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor() {}

//==============================================================================
void AudioPluginAudioProcessorEditor::paint(juce::Graphics &g) {
  // (Our component is opaque, so we must completely fill the background with a
  // solid colour)
  bool isBreak = processorRef.getBreak();
  bool overtime = processorRef.getoverTime();
  if (isBreak == true) {
    g.fillAll(juce::Colours::darkorange);
  } else if ( overtime == true ) {
    g.fillAll(juce::Colours::red);
  } else {
    g.fillAll(
        getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
  }

  g.setColour(juce::Colours::white);
  g.setFont(30.0f);
  g.drawFittedText(processorRef.minutes + " : " + processorRef.seconds,
                   getLocalBounds(), juce::Justification::centred, 1);
  // animatedapp component
  showUI();
}

void AudioPluginAudioProcessorEditor::resized() {
  // This is generally where you'll want to lay out the positions of any
  // subcomponents in your editor..
}

// updates the ui with the timer interval, to make sure the timer always
// displays the right time
void AudioPluginAudioProcessorEditor::timerCallback() {
  repaint();
  // TODO change ui when timer is running -> no more start + a give up button
  // when running
}

void AudioPluginAudioProcessorEditor::showUI() {
  bool isRunning = processorRef.getStateTimer();
  bool overtime = processorRef.getoverTime();
  if (isRunning == true && overtime == false) {
    startButton.setVisible(false);
    breakButton.setVisible(false);
    giveUpButton.setButtonText("Give Up");
    giveUpButton.setVisible(true);
    giveUpButton.setSize(100, 20);
    giveUpButton.setCentrePosition(200, 200);
    giveUpButton.onClick = [this] { processorRef.giveUp(); };
  } else {
    startButton.setButtonText("Start Work");
    startButton.setVisible(true);
    startButton.setSize(100, 20);
    startButton.setCentrePosition(200, 200);
    startButton.onClick = [this] {
      processorRef.startTimer(::Timer::State::workTimer);
    };
    breakButton.setButtonText("Start Break");
    breakButton.setVisible(true);
    breakButton.setSize(100, 20);
    breakButton.setCentrePosition(200, 230);
    breakButton.onClick = [this] {
      processorRef.startTimer(::Timer::State::breakTimer);
    };
    giveUpButton.setVisible(false);
  }
}
