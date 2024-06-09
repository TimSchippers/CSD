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
  startButton.setButtonText("start");
  startButton.setVisible(true);
  startButton.setSize(100,20);
  startButton.setCentrePosition(200,200);
  startButton.onClick = [this] { processorRef.startTimer();};
  setSize(400, 300);
  startTimer(100);
}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor() {}

//==============================================================================
void AudioPluginAudioProcessorEditor::paint(juce::Graphics &g) {
  // (Our component is opaque, so we must completely fill the background with a
  // solid colour)
  g.fillAll(
      getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

  g.setColour(juce::Colours::white);
  g.setFont(30.0f);
  g.drawFittedText(processorRef.minutes + " : " + processorRef.seconds,
                   getLocalBounds(), juce::Justification::centred, 1);
  // animatedapp component
}

void AudioPluginAudioProcessorEditor::resized() {
  // This is generally where you'll want to lay out the positions of any
  // subcomponents in your editor..
}

// updates the ui with the timer interval, to make sure the timer always displays the right time
void AudioPluginAudioProcessorEditor::timerCallback() {
  repaint();
}
