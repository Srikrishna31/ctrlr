/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_323C79E86CBA8010__
#define __JUCE_HEADER_323C79E86CBA8010__

//[Headers]     -- You can add your own extra header files here --
class CtrlrEditor;
//[/Headers]

#include "CtrlrProgramWizardMonitor.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class CtrlrProgramWizard  : public Component,
                            public ButtonListener
{
public:
    //==============================================================================
    CtrlrProgramWizard (CtrlrEditor &_owner);
    ~CtrlrProgramWizard();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    CtrlrEditor &getOwner() { return (owner); }
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    CtrlrEditor &owner;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> executeButton;
    ScopedPointer<CtrlrProgramWizardMonitor> inputMonitor;
    ScopedPointer<CtrlrProgramWizardMonitor> outputMonitor;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CtrlrProgramWizard)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_323C79E86CBA8010__
