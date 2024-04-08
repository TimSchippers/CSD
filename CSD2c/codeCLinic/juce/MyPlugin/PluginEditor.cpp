#include "PluginEditor.h"
#include "PluginProcessor.h"
#include <memory>

//==============================================================================
AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor(
    AudioPluginAudioProcessor &p, juce::AudioProcessorValueTreeState &Reference)
    : AudioProcessorEditor(&p), processorRef(p), ref(Reference) {
  juce::ignoreUnused(processorRef);

  addAndMakeVisible(knobOne);
  knobOne.setSliderStyle(juce::Slider::SliderStyle::RotaryVerticalDrag);
  knobOne.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
  knobOneAttachment =
      std::make_unique<SliderAttachment>(ref, "uCutoff", knobOne);

  addAndMakeVisible(knobTwo);
  knobTwo.setSliderStyle(juce::Slider::SliderStyle::RotaryVerticalDrag);
  knobTwo.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 100, 100);
  knobTwoAttachment =
      std::make_unique<SliderAttachment>(ref, "uResonance", knobTwo);
  // Make sure that before the constructor has finished, you've set the
  // editor's size to whatever you need it to be.
  setSize(400, 300);
}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor() {}

//==============================================================================
void AudioPluginAudioProcessorEditor::paint(juce::Graphics &g) {
  // (Our component is opaque, so we must completely fill the background with a
  // solid colour)
  g.fillAll(
      getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

  g.setColour(juce::Colours::white);
  g.setFont(15.0f);
  g.drawFittedText("Hello World!", getLocalBounds(),
                   juce::Justification::centred, 1);
}

void AudioPluginAudioProcessorEditor::resized() {
  // This is generally where you'll want to lay out the positions of any
  // subcomponents in your editor..
  knobOne.setSize(150, 150);
  knobOne.setTopLeftPosition(0, 0);

  knobTwo.setSize(150, 150);
  knobTwo.setTopLeftPosition(0, 150);
}
