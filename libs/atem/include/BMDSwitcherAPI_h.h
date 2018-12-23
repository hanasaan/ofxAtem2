

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat Dec 16 19:41:04 2017
 */
/* Compiler settings for ..\libs\atem\include\BMDSwitcherAPI.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __BMDSwitcherAPI_h_h__
#define __BMDSwitcherAPI_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IBMDSwitcherAudioMonitorOutputCallback_FWD_DEFINED__
#define __IBMDSwitcherAudioMonitorOutputCallback_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMonitorOutputCallback IBMDSwitcherAudioMonitorOutputCallback;

#endif 	/* __IBMDSwitcherAudioMonitorOutputCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMonitorOutput_FWD_DEFINED__
#define __IBMDSwitcherAudioMonitorOutput_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMonitorOutput IBMDSwitcherAudioMonitorOutput;

#endif 	/* __IBMDSwitcherAudioMonitorOutput_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputCallback_FWD_DEFINED__
#define __IBMDSwitcherAudioInputCallback_FWD_DEFINED__
typedef interface IBMDSwitcherAudioInputCallback IBMDSwitcherAudioInputCallback;

#endif 	/* __IBMDSwitcherAudioInputCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioInput_FWD_DEFINED__
#define __IBMDSwitcherAudioInput_FWD_DEFINED__
typedef interface IBMDSwitcherAudioInput IBMDSwitcherAudioInput;

#endif 	/* __IBMDSwitcherAudioInput_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixerCallback_FWD_DEFINED__
#define __IBMDSwitcherAudioMixerCallback_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMixerCallback IBMDSwitcherAudioMixerCallback;

#endif 	/* __IBMDSwitcherAudioMixerCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixer_FWD_DEFINED__
#define __IBMDSwitcherAudioMixer_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMixer IBMDSwitcherAudioMixer;

#endif 	/* __IBMDSwitcherAudioMixer_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTalkbackCallback_FWD_DEFINED__
#define __IBMDSwitcherTalkbackCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTalkbackCallback IBMDSwitcherTalkbackCallback;

#endif 	/* __IBMDSwitcherTalkbackCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTalkback_FWD_DEFINED__
#define __IBMDSwitcherTalkback_FWD_DEFINED__
typedef interface IBMDSwitcherTalkback IBMDSwitcherTalkback;

#endif 	/* __IBMDSwitcherTalkback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioHeadphoneOutput_FWD_DEFINED__
#define __IBMDSwitcherAudioHeadphoneOutput_FWD_DEFINED__
typedef interface IBMDSwitcherAudioHeadphoneOutput IBMDSwitcherAudioHeadphoneOutput;

#endif 	/* __IBMDSwitcherAudioHeadphoneOutput_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioHeadphoneOutputCallback_FWD_DEFINED__
#define __IBMDSwitcherAudioHeadphoneOutputCallback_FWD_DEFINED__
typedef interface IBMDSwitcherAudioHeadphoneOutputCallback IBMDSwitcherAudioHeadphoneOutputCallback;

#endif 	/* __IBMDSwitcherAudioHeadphoneOutputCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyLumaParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyLumaParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyLumaParametersCallback IBMDSwitcherKeyLumaParametersCallback;

#endif 	/* __IBMDSwitcherKeyLumaParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyLumaParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyLumaParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyLumaParameters IBMDSwitcherKeyLumaParameters;

#endif 	/* __IBMDSwitcherKeyLumaParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyChromaParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyChromaParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyChromaParametersCallback IBMDSwitcherKeyChromaParametersCallback;

#endif 	/* __IBMDSwitcherKeyChromaParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyChromaParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyChromaParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyChromaParameters IBMDSwitcherKeyChromaParameters;

#endif 	/* __IBMDSwitcherKeyChromaParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyPatternParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyPatternParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyPatternParametersCallback IBMDSwitcherKeyPatternParametersCallback;

#endif 	/* __IBMDSwitcherKeyPatternParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyPatternParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyPatternParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyPatternParameters IBMDSwitcherKeyPatternParameters;

#endif 	/* __IBMDSwitcherKeyPatternParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyKeyFrameParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyKeyFrameParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyKeyFrameParametersCallback IBMDSwitcherKeyFlyKeyFrameParametersCallback;

#endif 	/* __IBMDSwitcherKeyFlyKeyFrameParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyKeyFrameParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyKeyFrameParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyKeyFrameParameters IBMDSwitcherKeyFlyKeyFrameParameters;

#endif 	/* __IBMDSwitcherKeyFlyKeyFrameParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyParametersCallback IBMDSwitcherKeyFlyParametersCallback;

#endif 	/* __IBMDSwitcherKeyFlyParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyParameters IBMDSwitcherKeyFlyParameters;

#endif 	/* __IBMDSwitcherKeyFlyParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyDVEParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyDVEParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyDVEParametersCallback IBMDSwitcherKeyDVEParametersCallback;

#endif 	/* __IBMDSwitcherKeyDVEParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyDVEParameters_FWD_DEFINED__
#define __IBMDSwitcherKeyDVEParameters_FWD_DEFINED__
typedef interface IBMDSwitcherKeyDVEParameters IBMDSwitcherKeyDVEParameters;

#endif 	/* __IBMDSwitcherKeyDVEParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyCallback_FWD_DEFINED__
#define __IBMDSwitcherKeyCallback_FWD_DEFINED__
typedef interface IBMDSwitcherKeyCallback IBMDSwitcherKeyCallback;

#endif 	/* __IBMDSwitcherKeyCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKey_FWD_DEFINED__
#define __IBMDSwitcherKey_FWD_DEFINED__
typedef interface IBMDSwitcherKey IBMDSwitcherKey;

#endif 	/* __IBMDSwitcherKey_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayerCallback_FWD_DEFINED__
#define __IBMDSwitcherMediaPlayerCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPlayerCallback IBMDSwitcherMediaPlayerCallback;

#endif 	/* __IBMDSwitcherMediaPlayerCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayer_FWD_DEFINED__
#define __IBMDSwitcherMediaPlayer_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPlayer IBMDSwitcherMediaPlayer;

#endif 	/* __IBMDSwitcherMediaPlayer_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionMixParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionMixParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionMixParametersCallback IBMDSwitcherTransitionMixParametersCallback;

#endif 	/* __IBMDSwitcherTransitionMixParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionMixParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionMixParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionMixParameters IBMDSwitcherTransitionMixParameters;

#endif 	/* __IBMDSwitcherTransitionMixParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDipParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionDipParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDipParametersCallback IBMDSwitcherTransitionDipParametersCallback;

#endif 	/* __IBMDSwitcherTransitionDipParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDipParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionDipParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDipParameters IBMDSwitcherTransitionDipParameters;

#endif 	/* __IBMDSwitcherTransitionDipParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionWipeParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionWipeParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionWipeParametersCallback IBMDSwitcherTransitionWipeParametersCallback;

#endif 	/* __IBMDSwitcherTransitionWipeParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionWipeParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionWipeParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionWipeParameters IBMDSwitcherTransitionWipeParameters;

#endif 	/* __IBMDSwitcherTransitionWipeParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionDVEParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDVEParametersCallback IBMDSwitcherTransitionDVEParametersCallback;

#endif 	/* __IBMDSwitcherTransitionDVEParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionDVEParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDVEParameters IBMDSwitcherTransitionDVEParameters;

#endif 	/* __IBMDSwitcherTransitionDVEParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionStingerParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionStingerParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionStingerParametersCallback IBMDSwitcherTransitionStingerParametersCallback;

#endif 	/* __IBMDSwitcherTransitionStingerParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionStingerParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionStingerParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionStingerParameters IBMDSwitcherTransitionStingerParameters;

#endif 	/* __IBMDSwitcherTransitionStingerParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionParametersCallback_FWD_DEFINED__
#define __IBMDSwitcherTransitionParametersCallback_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionParametersCallback IBMDSwitcherTransitionParametersCallback;

#endif 	/* __IBMDSwitcherTransitionParametersCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionParameters_FWD_DEFINED__
#define __IBMDSwitcherTransitionParameters_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionParameters IBMDSwitcherTransitionParameters;

#endif 	/* __IBMDSwitcherTransitionParameters_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlockCallback_FWD_DEFINED__
#define __IBMDSwitcherMixEffectBlockCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMixEffectBlockCallback IBMDSwitcherMixEffectBlockCallback;

#endif 	/* __IBMDSwitcherMixEffectBlockCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlock_FWD_DEFINED__
#define __IBMDSwitcherMixEffectBlock_FWD_DEFINED__
typedef interface IBMDSwitcherMixEffectBlock IBMDSwitcherMixEffectBlock;

#endif 	/* __IBMDSwitcherMixEffectBlock_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputCallback_FWD_DEFINED__
#define __IBMDSwitcherInputCallback_FWD_DEFINED__
typedef interface IBMDSwitcherInputCallback IBMDSwitcherInputCallback;

#endif 	/* __IBMDSwitcherInputCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInput_FWD_DEFINED__
#define __IBMDSwitcherInput_FWD_DEFINED__
typedef interface IBMDSwitcherInput IBMDSwitcherInput;

#endif 	/* __IBMDSwitcherInput_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputColorCallback_FWD_DEFINED__
#define __IBMDSwitcherInputColorCallback_FWD_DEFINED__
typedef interface IBMDSwitcherInputColorCallback IBMDSwitcherInputColorCallback;

#endif 	/* __IBMDSwitcherInputColorCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputColor_FWD_DEFINED__
#define __IBMDSwitcherInputColor_FWD_DEFINED__
typedef interface IBMDSwitcherInputColor IBMDSwitcherInputColor;

#endif 	/* __IBMDSwitcherInputColor_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputAuxCallback_FWD_DEFINED__
#define __IBMDSwitcherInputAuxCallback_FWD_DEFINED__
typedef interface IBMDSwitcherInputAuxCallback IBMDSwitcherInputAuxCallback;

#endif 	/* __IBMDSwitcherInputAuxCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputAux_FWD_DEFINED__
#define __IBMDSwitcherInputAux_FWD_DEFINED__
typedef interface IBMDSwitcherInputAux IBMDSwitcherInputAux;

#endif 	/* __IBMDSwitcherInputAux_FWD_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBoxCallback_FWD_DEFINED__
#define __IBMDSwitcherSuperSourceBoxCallback_FWD_DEFINED__
typedef interface IBMDSwitcherSuperSourceBoxCallback IBMDSwitcherSuperSourceBoxCallback;

#endif 	/* __IBMDSwitcherSuperSourceBoxCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBox_FWD_DEFINED__
#define __IBMDSwitcherSuperSourceBox_FWD_DEFINED__
typedef interface IBMDSwitcherSuperSourceBox IBMDSwitcherSuperSourceBox;

#endif 	/* __IBMDSwitcherSuperSourceBox_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSourceCallback_FWD_DEFINED__
#define __IBMDSwitcherInputSuperSourceCallback_FWD_DEFINED__
typedef interface IBMDSwitcherInputSuperSourceCallback IBMDSwitcherInputSuperSourceCallback;

#endif 	/* __IBMDSwitcherInputSuperSourceCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSource_FWD_DEFINED__
#define __IBMDSwitcherInputSuperSource_FWD_DEFINED__
typedef interface IBMDSwitcherInputSuperSource IBMDSwitcherInputSuperSource;

#endif 	/* __IBMDSwitcherInputSuperSource_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewCallback_FWD_DEFINED__
#define __IBMDSwitcherMultiViewCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMultiViewCallback IBMDSwitcherMultiViewCallback;

#endif 	/* __IBMDSwitcherMultiViewCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMultiView_FWD_DEFINED__
#define __IBMDSwitcherMultiView_FWD_DEFINED__
typedef interface IBMDSwitcherMultiView IBMDSwitcherMultiView;

#endif 	/* __IBMDSwitcherMultiView_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyCallback_FWD_DEFINED__
#define __IBMDSwitcherDownstreamKeyCallback_FWD_DEFINED__
typedef interface IBMDSwitcherDownstreamKeyCallback IBMDSwitcherDownstreamKeyCallback;

#endif 	/* __IBMDSwitcherDownstreamKeyCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKey_FWD_DEFINED__
#define __IBMDSwitcherDownstreamKey_FWD_DEFINED__
typedef interface IBMDSwitcherDownstreamKey IBMDSwitcherDownstreamKey;

#endif 	/* __IBMDSwitcherDownstreamKey_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputIterator_FWD_DEFINED__
#define __IBMDSwitcherInputIterator_FWD_DEFINED__
typedef interface IBMDSwitcherInputIterator IBMDSwitcherInputIterator;

#endif 	/* __IBMDSwitcherInputIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBoxIterator_FWD_DEFINED__
#define __IBMDSwitcherSuperSourceBoxIterator_FWD_DEFINED__
typedef interface IBMDSwitcherSuperSourceBoxIterator IBMDSwitcherSuperSourceBoxIterator;

#endif 	/* __IBMDSwitcherSuperSourceBoxIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlockIterator_FWD_DEFINED__
#define __IBMDSwitcherMixEffectBlockIterator_FWD_DEFINED__
typedef interface IBMDSwitcherMixEffectBlockIterator IBMDSwitcherMixEffectBlockIterator;

#endif 	/* __IBMDSwitcherMixEffectBlockIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyIterator_FWD_DEFINED__
#define __IBMDSwitcherDownstreamKeyIterator_FWD_DEFINED__
typedef interface IBMDSwitcherDownstreamKeyIterator IBMDSwitcherDownstreamKeyIterator;

#endif 	/* __IBMDSwitcherDownstreamKeyIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyIterator_FWD_DEFINED__
#define __IBMDSwitcherKeyIterator_FWD_DEFINED__
typedef interface IBMDSwitcherKeyIterator IBMDSwitcherKeyIterator;

#endif 	/* __IBMDSwitcherKeyIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayerIterator_FWD_DEFINED__
#define __IBMDSwitcherMediaPlayerIterator_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPlayerIterator IBMDSwitcherMediaPlayerIterator;

#endif 	/* __IBMDSwitcherMediaPlayerIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewIterator_FWD_DEFINED__
#define __IBMDSwitcherMultiViewIterator_FWD_DEFINED__
typedef interface IBMDSwitcherMultiViewIterator IBMDSwitcherMultiViewIterator;

#endif 	/* __IBMDSwitcherMultiViewIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMonitorOutputIterator_FWD_DEFINED__
#define __IBMDSwitcherAudioMonitorOutputIterator_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMonitorOutputIterator IBMDSwitcherAudioMonitorOutputIterator;

#endif 	/* __IBMDSwitcherAudioMonitorOutputIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioHeadphoneOutputIterator_FWD_DEFINED__
#define __IBMDSwitcherAudioHeadphoneOutputIterator_FWD_DEFINED__
typedef interface IBMDSwitcherAudioHeadphoneOutputIterator IBMDSwitcherAudioHeadphoneOutputIterator;

#endif 	/* __IBMDSwitcherAudioHeadphoneOutputIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputIterator_FWD_DEFINED__
#define __IBMDSwitcherAudioInputIterator_FWD_DEFINED__
typedef interface IBMDSwitcherAudioInputIterator IBMDSwitcherAudioInputIterator;

#endif 	/* __IBMDSwitcherAudioInputIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherSerialPortIterator_FWD_DEFINED__
#define __IBMDSwitcherSerialPortIterator_FWD_DEFINED__
typedef interface IBMDSwitcherSerialPortIterator IBMDSwitcherSerialPortIterator;

#endif 	/* __IBMDSwitcherSerialPortIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckIterator_FWD_DEFINED__
#define __IBMDSwitcherHyperDeckIterator_FWD_DEFINED__
typedef interface IBMDSwitcherHyperDeckIterator IBMDSwitcherHyperDeckIterator;

#endif 	/* __IBMDSwitcherHyperDeckIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMixMinusOutputIterator_FWD_DEFINED__
#define __IBMDSwitcherMixMinusOutputIterator_FWD_DEFINED__
typedef interface IBMDSwitcherMixMinusOutputIterator IBMDSwitcherMixMinusOutputIterator;

#endif 	/* __IBMDSwitcherMixMinusOutputIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherCallback_FWD_DEFINED__
#define __IBMDSwitcherCallback_FWD_DEFINED__
typedef interface IBMDSwitcherCallback IBMDSwitcherCallback;

#endif 	/* __IBMDSwitcherCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcher_FWD_DEFINED__
#define __IBMDSwitcher_FWD_DEFINED__
typedef interface IBMDSwitcher IBMDSwitcher;

#endif 	/* __IBMDSwitcher_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_FWD_DEFINED__
#define __IBMDSwitcherDiscovery_FWD_DEFINED__
typedef interface IBMDSwitcherDiscovery IBMDSwitcherDiscovery;

#endif 	/* __IBMDSwitcherDiscovery_FWD_DEFINED__ */


#ifndef __IBMDSwitcherFrame_FWD_DEFINED__
#define __IBMDSwitcherFrame_FWD_DEFINED__
typedef interface IBMDSwitcherFrame IBMDSwitcherFrame;

#endif 	/* __IBMDSwitcherFrame_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudio_FWD_DEFINED__
#define __IBMDSwitcherAudio_FWD_DEFINED__
typedef interface IBMDSwitcherAudio IBMDSwitcherAudio;

#endif 	/* __IBMDSwitcherAudio_FWD_DEFINED__ */


#ifndef __IBMDSwitcherLockCallback_FWD_DEFINED__
#define __IBMDSwitcherLockCallback_FWD_DEFINED__
typedef interface IBMDSwitcherLockCallback IBMDSwitcherLockCallback;

#endif 	/* __IBMDSwitcherLockCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherStillsCallback_FWD_DEFINED__
#define __IBMDSwitcherStillsCallback_FWD_DEFINED__
typedef interface IBMDSwitcherStillsCallback IBMDSwitcherStillsCallback;

#endif 	/* __IBMDSwitcherStillsCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherStills_FWD_DEFINED__
#define __IBMDSwitcherStills_FWD_DEFINED__
typedef interface IBMDSwitcherStills IBMDSwitcherStills;

#endif 	/* __IBMDSwitcherStills_FWD_DEFINED__ */


#ifndef __IBMDSwitcherClipCallback_FWD_DEFINED__
#define __IBMDSwitcherClipCallback_FWD_DEFINED__
typedef interface IBMDSwitcherClipCallback IBMDSwitcherClipCallback;

#endif 	/* __IBMDSwitcherClipCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherClip_FWD_DEFINED__
#define __IBMDSwitcherClip_FWD_DEFINED__
typedef interface IBMDSwitcherClip IBMDSwitcherClip;

#endif 	/* __IBMDSwitcherClip_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPoolCallback_FWD_DEFINED__
#define __IBMDSwitcherMediaPoolCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPoolCallback IBMDSwitcherMediaPoolCallback;

#endif 	/* __IBMDSwitcherMediaPoolCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPool_FWD_DEFINED__
#define __IBMDSwitcherMediaPool_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPool IBMDSwitcherMediaPool;

#endif 	/* __IBMDSwitcherMediaPool_FWD_DEFINED__ */


#ifndef __IBMDSwitcherCameraControlParameterIterator_FWD_DEFINED__
#define __IBMDSwitcherCameraControlParameterIterator_FWD_DEFINED__
typedef interface IBMDSwitcherCameraControlParameterIterator IBMDSwitcherCameraControlParameterIterator;

#endif 	/* __IBMDSwitcherCameraControlParameterIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherCameraControlCallback_FWD_DEFINED__
#define __IBMDSwitcherCameraControlCallback_FWD_DEFINED__
typedef interface IBMDSwitcherCameraControlCallback IBMDSwitcherCameraControlCallback;

#endif 	/* __IBMDSwitcherCameraControlCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherCameraControl_FWD_DEFINED__
#define __IBMDSwitcherCameraControl_FWD_DEFINED__
typedef interface IBMDSwitcherCameraControl IBMDSwitcherCameraControl;

#endif 	/* __IBMDSwitcherCameraControl_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMacro_FWD_DEFINED__
#define __IBMDSwitcherMacro_FWD_DEFINED__
typedef interface IBMDSwitcherMacro IBMDSwitcherMacro;

#endif 	/* __IBMDSwitcherMacro_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransferMacro_FWD_DEFINED__
#define __IBMDSwitcherTransferMacro_FWD_DEFINED__
typedef interface IBMDSwitcherTransferMacro IBMDSwitcherTransferMacro;

#endif 	/* __IBMDSwitcherTransferMacro_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMacroPoolCallback_FWD_DEFINED__
#define __IBMDSwitcherMacroPoolCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMacroPoolCallback IBMDSwitcherMacroPoolCallback;

#endif 	/* __IBMDSwitcherMacroPoolCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMacroPool_FWD_DEFINED__
#define __IBMDSwitcherMacroPool_FWD_DEFINED__
typedef interface IBMDSwitcherMacroPool IBMDSwitcherMacroPool;

#endif 	/* __IBMDSwitcherMacroPool_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMacroControlCallback_FWD_DEFINED__
#define __IBMDSwitcherMacroControlCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMacroControlCallback IBMDSwitcherMacroControlCallback;

#endif 	/* __IBMDSwitcherMacroControlCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMacroControl_FWD_DEFINED__
#define __IBMDSwitcherMacroControl_FWD_DEFINED__
typedef interface IBMDSwitcherMacroControl IBMDSwitcherMacroControl;

#endif 	/* __IBMDSwitcherMacroControl_FWD_DEFINED__ */


#ifndef __IBMDSwitcherSerialPortCallback_FWD_DEFINED__
#define __IBMDSwitcherSerialPortCallback_FWD_DEFINED__
typedef interface IBMDSwitcherSerialPortCallback IBMDSwitcherSerialPortCallback;

#endif 	/* __IBMDSwitcherSerialPortCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherSerialPort_FWD_DEFINED__
#define __IBMDSwitcherSerialPort_FWD_DEFINED__
typedef interface IBMDSwitcherSerialPort IBMDSwitcherSerialPort;

#endif 	/* __IBMDSwitcherSerialPort_FWD_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckClipCallback_FWD_DEFINED__
#define __IBMDSwitcherHyperDeckClipCallback_FWD_DEFINED__
typedef interface IBMDSwitcherHyperDeckClipCallback IBMDSwitcherHyperDeckClipCallback;

#endif 	/* __IBMDSwitcherHyperDeckClipCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckClip_FWD_DEFINED__
#define __IBMDSwitcherHyperDeckClip_FWD_DEFINED__
typedef interface IBMDSwitcherHyperDeckClip IBMDSwitcherHyperDeckClip;

#endif 	/* __IBMDSwitcherHyperDeckClip_FWD_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckClipIterator_FWD_DEFINED__
#define __IBMDSwitcherHyperDeckClipIterator_FWD_DEFINED__
typedef interface IBMDSwitcherHyperDeckClipIterator IBMDSwitcherHyperDeckClipIterator;

#endif 	/* __IBMDSwitcherHyperDeckClipIterator_FWD_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckCallback_FWD_DEFINED__
#define __IBMDSwitcherHyperDeckCallback_FWD_DEFINED__
typedef interface IBMDSwitcherHyperDeckCallback IBMDSwitcherHyperDeckCallback;

#endif 	/* __IBMDSwitcherHyperDeckCallback_FWD_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeck_FWD_DEFINED__
#define __IBMDSwitcherHyperDeck_FWD_DEFINED__
typedef interface IBMDSwitcherHyperDeck IBMDSwitcherHyperDeck;

#endif 	/* __IBMDSwitcherHyperDeck_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMixMinusOutput_FWD_DEFINED__
#define __IBMDSwitcherMixMinusOutput_FWD_DEFINED__
typedef interface IBMDSwitcherMixMinusOutput IBMDSwitcherMixMinusOutput;

#endif 	/* __IBMDSwitcherMixMinusOutput_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMixMinusOutputCallback_FWD_DEFINED__
#define __IBMDSwitcherMixMinusOutputCallback_FWD_DEFINED__
typedef interface IBMDSwitcherMixMinusOutputCallback IBMDSwitcherMixMinusOutputCallback;

#endif 	/* __IBMDSwitcherMixMinusOutputCallback_FWD_DEFINED__ */


#ifndef __CBMDSwitcherDiscovery_FWD_DEFINED__
#define __CBMDSwitcherDiscovery_FWD_DEFINED__

#ifdef __cplusplus
typedef class CBMDSwitcherDiscovery CBMDSwitcherDiscovery;
#else
typedef struct CBMDSwitcherDiscovery CBMDSwitcherDiscovery;
#endif /* __cplusplus */

#endif 	/* __CBMDSwitcherDiscovery_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParameters_v3_5_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_v3_5_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyParameters_v3_5 IBMDSwitcherKeyFlyParameters_v3_5;

#endif 	/* __IBMDSwitcherKeyFlyParameters_v3_5_FWD_DEFINED__ */


#ifndef __IBMDSwitcher_v4_0_FWD_DEFINED__
#define __IBMDSwitcher_v4_0_FWD_DEFINED__
typedef interface IBMDSwitcher_v4_0 IBMDSwitcher_v4_0;

#endif 	/* __IBMDSwitcher_v4_0_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_v4_0_FWD_DEFINED__
#define __IBMDSwitcherDiscovery_v4_0_FWD_DEFINED__
typedef interface IBMDSwitcherDiscovery_v4_0 IBMDSwitcherDiscovery_v4_0;

#endif 	/* __IBMDSwitcherDiscovery_v4_0_FWD_DEFINED__ */


#ifndef __IBMDSwitcherCallback_v4_0_FWD_DEFINED__
#define __IBMDSwitcherCallback_v4_0_FWD_DEFINED__
typedef interface IBMDSwitcherCallback_v4_0 IBMDSwitcherCallback_v4_0;

#endif 	/* __IBMDSwitcherCallback_v4_0_FWD_DEFINED__ */


#ifndef __IBMDSwitcherStills_v4_0_FWD_DEFINED__
#define __IBMDSwitcherStills_v4_0_FWD_DEFINED__
typedef interface IBMDSwitcherStills_v4_0 IBMDSwitcherStills_v4_0;

#endif 	/* __IBMDSwitcherStills_v4_0_FWD_DEFINED__ */


#ifndef __IBMDSwitcherClip_v4_0_FWD_DEFINED__
#define __IBMDSwitcherClip_v4_0_FWD_DEFINED__
typedef interface IBMDSwitcherClip_v4_0 IBMDSwitcherClip_v4_0;

#endif 	/* __IBMDSwitcherClip_v4_0_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMediaPool_v4_0_FWD_DEFINED__
#define __IBMDSwitcherMediaPool_v4_0_FWD_DEFINED__
typedef interface IBMDSwitcherMediaPool_v4_0 IBMDSwitcherMediaPool_v4_0;

#endif 	/* __IBMDSwitcherMediaPool_v4_0_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioInput_v4_0_FWD_DEFINED__
#define __IBMDSwitcherAudioInput_v4_0_FWD_DEFINED__
typedef interface IBMDSwitcherAudioInput_v4_0 IBMDSwitcherAudioInput_v4_0;

#endif 	/* __IBMDSwitcherAudioInput_v4_0_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputIterator_v4_0_FWD_DEFINED__
#define __IBMDSwitcherAudioInputIterator_v4_0_FWD_DEFINED__
typedef interface IBMDSwitcherAudioInputIterator_v4_0 IBMDSwitcherAudioInputIterator_v4_0;

#endif 	/* __IBMDSwitcherAudioInputIterator_v4_0_FWD_DEFINED__ */


#ifndef __CBMDSwitcherDiscovery_v4_0_FWD_DEFINED__
#define __CBMDSwitcherDiscovery_v4_0_FWD_DEFINED__

#ifdef __cplusplus
typedef class CBMDSwitcherDiscovery_v4_0 CBMDSwitcherDiscovery_v4_0;
#else
typedef struct CBMDSwitcherDiscovery_v4_0 CBMDSwitcherDiscovery_v4_0;
#endif /* __cplusplus */

#endif 	/* __CBMDSwitcherDiscovery_v4_0_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParameters_v4_1_3_FWD_DEFINED__
#define __IBMDSwitcherTransitionDVEParameters_v4_1_3_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDVEParameters_v4_1_3 IBMDSwitcherTransitionDVEParameters_v4_1_3;

#endif 	/* __IBMDSwitcherTransitionDVEParameters_v4_1_3_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKey_v4_1_3_FWD_DEFINED__
#define __IBMDSwitcherKey_v4_1_3_FWD_DEFINED__
typedef interface IBMDSwitcherKey_v4_1_3 IBMDSwitcherKey_v4_1_3;

#endif 	/* __IBMDSwitcherKey_v4_1_3_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyIterator_v4_1_3_FWD_DEFINED__
#define __IBMDSwitcherKeyIterator_v4_1_3_FWD_DEFINED__
typedef interface IBMDSwitcherKeyIterator_v4_1_3 IBMDSwitcherKeyIterator_v4_1_3;

#endif 	/* __IBMDSwitcherKeyIterator_v4_1_3_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSource_v4_1_3_FWD_DEFINED__
#define __IBMDSwitcherInputSuperSource_v4_1_3_FWD_DEFINED__
typedef interface IBMDSwitcherInputSuperSource_v4_1_3 IBMDSwitcherInputSuperSource_v4_1_3;

#endif 	/* __IBMDSwitcherInputSuperSource_v4_1_3_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKey_v4_1_3_FWD_DEFINED__
#define __IBMDSwitcherDownstreamKey_v4_1_3_FWD_DEFINED__
typedef interface IBMDSwitcherDownstreamKey_v4_1_3 IBMDSwitcherDownstreamKey_v4_1_3;

#endif 	/* __IBMDSwitcherDownstreamKey_v4_1_3_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyIterator_v4_1_3_FWD_DEFINED__
#define __IBMDSwitcherDownstreamKeyIterator_v4_1_3_FWD_DEFINED__
typedef interface IBMDSwitcherDownstreamKeyIterator_v4_1_3 IBMDSwitcherDownstreamKeyIterator_v4_1_3;

#endif 	/* __IBMDSwitcherDownstreamKeyIterator_v4_1_3_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixer_v6_0_FWD_DEFINED__
#define __IBMDSwitcherAudioMixer_v6_0_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMixer_v6_0 IBMDSwitcherAudioMixer_v6_0;

#endif 	/* __IBMDSwitcherAudioMixer_v6_0_FWD_DEFINED__ */


#ifndef __IBMDSwitcherCallback_v6_4_1_FWD_DEFINED__
#define __IBMDSwitcherCallback_v6_4_1_FWD_DEFINED__
typedef interface IBMDSwitcherCallback_v6_4_1 IBMDSwitcherCallback_v6_4_1;

#endif 	/* __IBMDSwitcherCallback_v6_4_1_FWD_DEFINED__ */


#ifndef __IBMDSwitcher_v6_4_1_FWD_DEFINED__
#define __IBMDSwitcher_v6_4_1_FWD_DEFINED__
typedef interface IBMDSwitcher_v6_4_1 IBMDSwitcher_v6_4_1;

#endif 	/* __IBMDSwitcher_v6_4_1_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_v6_4_1_FWD_DEFINED__
#define __IBMDSwitcherDiscovery_v6_4_1_FWD_DEFINED__
typedef interface IBMDSwitcherDiscovery_v6_4_1 IBMDSwitcherDiscovery_v6_4_1;

#endif 	/* __IBMDSwitcherDiscovery_v6_4_1_FWD_DEFINED__ */


#ifndef __CBMDSwitcherDiscovery_v6_4_1_FWD_DEFINED__
#define __CBMDSwitcherDiscovery_v6_4_1_FWD_DEFINED__

#ifdef __cplusplus
typedef class CBMDSwitcherDiscovery_v6_4_1 CBMDSwitcherDiscovery_v6_4_1;
#else
typedef struct CBMDSwitcherDiscovery_v6_4_1 CBMDSwitcherDiscovery_v6_4_1;
#endif /* __cplusplus */

#endif 	/* __CBMDSwitcherDiscovery_v6_4_1_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputCallback_v6_5_1_FWD_DEFINED__
#define __IBMDSwitcherInputCallback_v6_5_1_FWD_DEFINED__
typedef interface IBMDSwitcherInputCallback_v6_5_1 IBMDSwitcherInputCallback_v6_5_1;

#endif 	/* __IBMDSwitcherInputCallback_v6_5_1_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInput_v6_5_1_FWD_DEFINED__
#define __IBMDSwitcherInput_v6_5_1_FWD_DEFINED__
typedef interface IBMDSwitcherInput_v6_5_1 IBMDSwitcherInput_v6_5_1;

#endif 	/* __IBMDSwitcherInput_v6_5_1_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputIterator_v6_5_1_FWD_DEFINED__
#define __IBMDSwitcherInputIterator_v6_5_1_FWD_DEFINED__
typedef interface IBMDSwitcherInputIterator_v6_5_1 IBMDSwitcherInputIterator_v6_5_1;

#endif 	/* __IBMDSwitcherInputIterator_v6_5_1_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 IBMDSwitcherKeyFlyKeyFrameParameters_v6_7;

#endif 	/* __IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParameters_v6_7_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_v6_7_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyParameters_v6_7 IBMDSwitcherKeyFlyParameters_v6_7;

#endif 	/* __IBMDSwitcherKeyFlyParameters_v6_7_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParameters_v6_7_FWD_DEFINED__
#define __IBMDSwitcherTransitionDVEParameters_v6_7_FWD_DEFINED__
typedef interface IBMDSwitcherTransitionDVEParameters_v6_7 IBMDSwitcherTransitionDVEParameters_v6_7;

#endif 	/* __IBMDSwitcherTransitionDVEParameters_v6_7_FWD_DEFINED__ */


#ifndef __IBMDSwitcher_v6_7_FWD_DEFINED__
#define __IBMDSwitcher_v6_7_FWD_DEFINED__
typedef interface IBMDSwitcher_v6_7 IBMDSwitcher_v6_7;

#endif 	/* __IBMDSwitcher_v6_7_FWD_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_v6_7_FWD_DEFINED__
#define __IBMDSwitcherDiscovery_v6_7_FWD_DEFINED__
typedef interface IBMDSwitcherDiscovery_v6_7 IBMDSwitcherDiscovery_v6_7;

#endif 	/* __IBMDSwitcherDiscovery_v6_7_FWD_DEFINED__ */


#ifndef __CBMDSwitcherDiscovery_v6_7_FWD_DEFINED__
#define __CBMDSwitcherDiscovery_v6_7_FWD_DEFINED__

#ifdef __cplusplus
typedef class CBMDSwitcherDiscovery_v6_7 CBMDSwitcherDiscovery_v6_7;
#else
typedef struct CBMDSwitcherDiscovery_v6_7 CBMDSwitcherDiscovery_v6_7;
#endif /* __cplusplus */

#endif 	/* __CBMDSwitcherDiscovery_v6_7_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMultiView_v6_8_FWD_DEFINED__
#define __IBMDSwitcherMultiView_v6_8_FWD_DEFINED__
typedef interface IBMDSwitcherMultiView_v6_8 IBMDSwitcherMultiView_v6_8;

#endif 	/* __IBMDSwitcherMultiView_v6_8_FWD_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewIterator_v6_8_FWD_DEFINED__
#define __IBMDSwitcherMultiViewIterator_v6_8_FWD_DEFINED__
typedef interface IBMDSwitcherMultiViewIterator_v6_8 IBMDSwitcherMultiViewIterator_v6_8;

#endif 	/* __IBMDSwitcherMultiViewIterator_v6_8_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInput_v6_8_FWD_DEFINED__
#define __IBMDSwitcherInput_v6_8_FWD_DEFINED__
typedef interface IBMDSwitcherInput_v6_8 IBMDSwitcherInput_v6_8;

#endif 	/* __IBMDSwitcherInput_v6_8_FWD_DEFINED__ */


#ifndef __IBMDSwitcherInputIterator_v6_8_FWD_DEFINED__
#define __IBMDSwitcherInputIterator_v6_8_FWD_DEFINED__
typedef interface IBMDSwitcherInputIterator_v6_8 IBMDSwitcherInputIterator_v6_8;

#endif 	/* __IBMDSwitcherInputIterator_v6_8_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 IBMDSwitcherKeyFlyKeyFrameParameters_v6_9;

#endif 	/* __IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_FWD_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParameters_v6_9_FWD_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_v6_9_FWD_DEFINED__
typedef interface IBMDSwitcherKeyFlyParameters_v6_9 IBMDSwitcherKeyFlyParameters_v6_9;

#endif 	/* __IBMDSwitcherKeyFlyParameters_v6_9_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTalkbackCallback_v6_9_FWD_DEFINED__
#define __IBMDSwitcherTalkbackCallback_v6_9_FWD_DEFINED__
typedef interface IBMDSwitcherTalkbackCallback_v6_9 IBMDSwitcherTalkbackCallback_v6_9;

#endif 	/* __IBMDSwitcherTalkbackCallback_v6_9_FWD_DEFINED__ */


#ifndef __IBMDSwitcherTalkback_v6_9_FWD_DEFINED__
#define __IBMDSwitcherTalkback_v6_9_FWD_DEFINED__
typedef interface IBMDSwitcherTalkback_v6_9 IBMDSwitcherTalkback_v6_9;

#endif 	/* __IBMDSwitcherTalkback_v6_9_FWD_DEFINED__ */


#ifndef __IBMDSwitcherCameraControl_v7_0_3_FWD_DEFINED__
#define __IBMDSwitcherCameraControl_v7_0_3_FWD_DEFINED__
typedef interface IBMDSwitcherCameraControl_v7_0_3 IBMDSwitcherCameraControl_v7_0_3;

#endif 	/* __IBMDSwitcherCameraControl_v7_0_3_FWD_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixer_v7_1_2_FWD_DEFINED__
#define __IBMDSwitcherAudioMixer_v7_1_2_FWD_DEFINED__
typedef interface IBMDSwitcherAudioMixer_v7_1_2 IBMDSwitcherAudioMixer_v7_1_2;

#endif 	/* __IBMDSwitcherAudioMixer_v7_1_2_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __BMDSwitcherAPI_LIBRARY_DEFINED__
#define __BMDSwitcherAPI_LIBRARY_DEFINED__

/* library BMDSwitcherAPI */
/* [helpstring][version][uuid] */ 

typedef long long BMDSwitcherInputId;

typedef /* [public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_BMDSwitcherAPI_0000_0000_0001
    {
    unsigned char data[ 16 ];
    } 	BMDSwitcherHash;

typedef long long BMDSwitcherAudioInputId;

typedef long long BMDSwitcherHyperDeckClipId;

typedef long long BMDSwitcherHyperDeckId;

#if 0
#endif
typedef /* [v1_enum] */ 
enum _BMDSwitcherInputEventType
    {
        bmdSwitcherInputEventTypeShortNameChanged	= 0x73686e6d,
        bmdSwitcherInputEventTypeLongNameChanged	= 0x6c676e6d,
        bmdSwitcherInputEventTypeAreNamesDefaultChanged	= 0x616e6463,
        bmdSwitcherInputEventTypeIsProgramTalliedChanged	= 0x69706774,
        bmdSwitcherInputEventTypeIsPreviewTalliedChanged	= 0x69707274,
        bmdSwitcherInputEventTypeAvailableExternalPortTypesChanged	= 0x61657074,
        bmdSwitcherInputEventTypeCurrentExternalPortTypeChanged	= 0x63657074
    } 	BMDSwitcherInputEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherPortType
    {
        bmdSwitcherPortTypeExternal	= 0x6578746e,
        bmdSwitcherPortTypeBlack	= 0x626c616b,
        bmdSwitcherPortTypeColorBars	= 0x636f6c62,
        bmdSwitcherPortTypeColorGenerator	= 0x636f6c67,
        bmdSwitcherPortTypeMediaPlayerFill	= 0x6d70666c,
        bmdSwitcherPortTypeMediaPlayerCut	= 0x6d706374,
        bmdSwitcherPortTypeSuperSource	= 0x73737263,
        bmdSwitcherPortTypeMixEffectBlockOutput	= 0x6d65626f,
        bmdSwitcherPortTypeAuxOutput	= 0x6175786f,
        bmdSwitcherPortTypeKeyCutOutput	= 0x6b63746f
    } 	BMDSwitcherPortType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherExternalPortType
    {
        bmdSwitcherExternalPortTypeSDI	= 0x1,
        bmdSwitcherExternalPortTypeHDMI	= 0x2,
        bmdSwitcherExternalPortTypeComponent	= 0x4,
        bmdSwitcherExternalPortTypeComposite	= 0x8,
        bmdSwitcherExternalPortTypeSVideo	= 0x10,
        bmdSwitcherExternalPortTypeInternal	= 0x20,
        bmdSwitcherExternalPortTypeXLR	= 0x40,
        bmdSwitcherExternalPortTypeAESEBU	= 0x80,
        bmdSwitcherExternalPortTypeRCA	= 0x100,
        bmdSwitcherExternalPortTypeTSJack	= 0x200
    } 	BMDSwitcherExternalPortType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherInputAvailability
    {
        bmdSwitcherInputAvailabilityMixEffectBlock0	= 0x1,
        bmdSwitcherInputAvailabilityMixEffectBlock1	= 0x2,
        bmdSwitcherInputAvailabilityAuxOutputs	= 0x4,
        bmdSwitcherInputAvailabilityMultiView	= 0x8,
        bmdSwitcherInputAvailabilitySuperSourceArt	= 0x10,
        bmdSwitcherInputAvailabilitySuperSourceBox	= 0x20,
        bmdSwitcherInputAvailabilityInputCut	= 0x40
    } 	BMDSwitcherInputAvailability;

typedef /* [v1_enum] */ 
enum _BMDSwitcherEventType
    {
        bmdSwitcherEventTypeVideoModeChanged	= 0x73657664,
        bmdSwitcherEventTypeMethodForDownConvertedSDChanged	= 0x73656d64,
        bmdSwitcherEventTypeDownConvertedHDVideoModeChanged	= 0x73656456,
        bmdSwitcherEventTypeMultiViewVideoModeChanged	= 0x73656d76,
        bmdSwitcherEventTypePowerStatusChanged	= 0x73657077,
        bmdSwitcherEventTypeDisconnected	= 0x73656469,
        bmdSwitcherEventType3GSDIOutputLevelChanged	= 0x73653367
    } 	BMDSwitcherEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherInputColorEventType
    {
        bmdSwitcherInputColorEventTypeHueChanged	= 0x48756543,
        bmdSwitcherInputColorEventTypeSaturationChanged	= 0x53617443,
        bmdSwitcherInputColorEventTypeLumaChanged	= 0x4c756d43
    } 	BMDSwitcherInputColorEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherInputAuxEventType
    {
        bmdSwitcherInputAuxEventTypeInputSourceChanged	= 0x69707343
    } 	BMDSwitcherInputAuxEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherSuperSourceBoxEventType
    {
        bmdSwitcherSuperSourceBoxEventTypeEnabledChanged	= 0x656e6243,
        bmdSwitcherSuperSourceBoxEventTypeInputSourceChanged	= 0x69707343,
        bmdSwitcherSuperSourceBoxEventTypePositionXChanged	= 0x70737843,
        bmdSwitcherSuperSourceBoxEventTypePositionYChanged	= 0x70737943,
        bmdSwitcherSuperSourceBoxEventTypeSizeChanged	= 0x73697a43,
        bmdSwitcherSuperSourceBoxEventTypeCroppedChanged	= 0x63727043,
        bmdSwitcherSuperSourceBoxEventTypeCropTopChanged	= 0x63707443,
        bmdSwitcherSuperSourceBoxEventTypeCropBottomChanged	= 0x63706243,
        bmdSwitcherSuperSourceBoxEventTypeCropLeftChanged	= 0x63706c43,
        bmdSwitcherSuperSourceBoxEventTypeCropRightChanged	= 0x63707243
    } 	BMDSwitcherSuperSourceBoxEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherInputSuperSourceEventType
    {
        bmdSwitcherInputSuperSourceEventTypeInputFillChanged	= 0x69706643,
        bmdSwitcherInputSuperSourceEventTypeInputCutChanged	= 0x69706343,
        bmdSwitcherInputSuperSourceEventTypeArtOptionChanged	= 0x61746f43,
        bmdSwitcherInputSuperSourceEventTypePreMultipliedChanged	= 0x73687043,
        bmdSwitcherInputSuperSourceEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherInputSuperSourceEventTypeGainChanged	= 0x67616e43,
        bmdSwitcherInputSuperSourceEventTypeInverseChanged	= 0x696e7643,
        bmdSwitcherInputSuperSourceEventTypeBorderEnabledChanged	= 0x656e6243,
        bmdSwitcherInputSuperSourceEventTypeBorderBevelChanged	= 0x62766c43,
        bmdSwitcherInputSuperSourceEventTypeBorderWidthOutChanged	= 0x77646f43,
        bmdSwitcherInputSuperSourceEventTypeBorderWidthInChanged	= 0x77646943,
        bmdSwitcherInputSuperSourceEventTypeBorderSoftnessOutChanged	= 0x73666f43,
        bmdSwitcherInputSuperSourceEventTypeBorderSoftnessInChanged	= 0x73666943,
        bmdSwitcherInputSuperSourceEventTypeBorderBevelSoftnessChanged	= 0x62767343,
        bmdSwitcherInputSuperSourceEventTypeBorderBevelPositionChanged	= 0x62767043,
        bmdSwitcherInputSuperSourceEventTypeBorderHueChanged	= 0x68756543,
        bmdSwitcherInputSuperSourceEventTypeBorderSaturationChanged	= 0x73617443,
        bmdSwitcherInputSuperSourceEventTypeBorderLumaChanged	= 0x6c756d43,
        bmdSwitcherInputSuperSourceEventTypeBorderLightSourceDirectionChanged	= 0x6c736443,
        bmdSwitcherInputSuperSourceEventTypeBorderLightSourceAltitudeChanged	= 0x6c736143
    } 	BMDSwitcherInputSuperSourceEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherBorderBevelOption
    {
        bmdSwitcherBorderBevelOptionNone	= 0x6e6f6e65,
        bmdSwitcherBorderBevelOptionInOut	= 0x696e6f74,
        bmdSwitcherBorderBevelOptionIn	= 0x696e696e,
        bmdSwitcherBorderBevelOptionOut	= 0x6f746f74
    } 	BMDSwitcherBorderBevelOption;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionMixParametersEventType
    {
        bmdSwitcherTransitionMixParametersEventTypeRateChanged	= 0x72746543
    } 	BMDSwitcherTransitionMixParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionDipParametersEventType
    {
        bmdSwitcherTransitionDipParametersEventTypeRateChanged	= 0x72746543,
        bmdSwitcherTransitionDipParametersEventTypeInputDipChanged	= 0x69706443
    } 	BMDSwitcherTransitionDipParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionWipeParametersEventType
    {
        bmdSwitcherTransitionWipeParametersEventTypeRateChanged	= 0x72746543,
        bmdSwitcherTransitionWipeParametersEventTypePatternChanged	= 0x70617443,
        bmdSwitcherTransitionWipeParametersEventTypeBorderSizeChanged	= 0x62647343,
        bmdSwitcherTransitionWipeParametersEventTypeInputBorderChanged	= 0x69706243,
        bmdSwitcherTransitionWipeParametersEventTypeSymmetryChanged	= 0x73796d43,
        bmdSwitcherTransitionWipeParametersEventTypeSoftnessChanged	= 0x73667443,
        bmdSwitcherTransitionWipeParametersEventTypeHorizontalOffsetChanged	= 0x686f6643,
        bmdSwitcherTransitionWipeParametersEventTypeVerticalOffsetChanged	= 0x766f6643,
        bmdSwitcherTransitionWipeParametersEventTypeReverseChanged	= 0x72657643,
        bmdSwitcherTransitionWipeParametersEventTypeFlipFlopChanged	= 0x66667043
    } 	BMDSwitcherTransitionWipeParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionDVEParametersEventType
    {
        bmdSwitcherTransitionDVEParametersEventTypeRateChanged	= 0x72746543,
        bmdSwitcherTransitionDVEParametersEventTypeLogoRateChanged	= 0x6c727443,
        bmdSwitcherTransitionDVEParametersEventTypeReverseChanged	= 0x72657643,
        bmdSwitcherTransitionDVEParametersEventTypeFlipFlopChanged	= 0x66667043,
        bmdSwitcherTransitionDVEParametersEventTypeStyleChanged	= 0x73747943,
        bmdSwitcherTransitionDVEParametersEventTypeInputFillChanged	= 0x69706643,
        bmdSwitcherTransitionDVEParametersEventTypeInputCutChanged	= 0x69706343,
        bmdSwitcherTransitionDVEParametersEventTypeEnableKeyChanged	= 0x656e6b43,
        bmdSwitcherTransitionDVEParametersEventTypePreMultipliedChanged	= 0x706d7543,
        bmdSwitcherTransitionDVEParametersEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherTransitionDVEParametersEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherTransitionDVEParametersEventTypeInverseChanged	= 0x696e7643
    } 	BMDSwitcherTransitionDVEParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionStingerParametersEventType
    {
        bmdSwitcherTransitionStingerParametersEventTypeSourceChanged	= 0x73726343,
        bmdSwitcherTransitionStingerParametersEventTypePreMultipliedChanged	= 0x706d7543,
        bmdSwitcherTransitionStingerParametersEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherTransitionStingerParametersEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherTransitionStingerParametersEventTypeInverseChanged	= 0x696e7643,
        bmdSwitcherTransitionStingerParametersEventTypePrerollChanged	= 0x70726c43,
        bmdSwitcherTransitionStingerParametersEventTypeClipDurationChanged	= 0x63647243,
        bmdSwitcherTransitionStingerParametersEventTypeTriggerPointChanged	= 0x74677043,
        bmdSwitcherTransitionStingerParametersEventTypeMixRateChanged	= 0x6d787243
    } 	BMDSwitcherTransitionStingerParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionParametersEventType
    {
        bmdSwitcherTransitionParametersEventTypeTransitionStyleChanged	= 0x73747943,
        bmdSwitcherTransitionParametersEventTypeNextTransitionStyleChanged	= 0x6e737443,
        bmdSwitcherTransitionParametersEventTypeTransitionSelectionChanged	= 0x736c7443,
        bmdSwitcherTransitionParametersEventTypeNextTransitionSelectionChanged	= 0x6e736c43
    } 	BMDSwitcherTransitionParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherSuperSourceArtOption
    {
        bmdSwitcherSuperSourceArtOptionBackground	= 0x626b6764,
        bmdSwitcherSuperSourceArtOptionForeground	= 0x66726764
    } 	BMDSwitcherSuperSourceArtOption;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMixEffectBlockPropertyId
    {
        bmdSwitcherMixEffectBlockPropertyIdProgramInput	= 0x70676970,
        bmdSwitcherMixEffectBlockPropertyIdPreviewInput	= 0x70766970,
        bmdSwitcherMixEffectBlockPropertyIdTransitionPosition	= 0x74737073,
        bmdSwitcherMixEffectBlockPropertyIdTransitionFramesRemaining	= 0x7466726d,
        bmdSwitcherMixEffectBlockPropertyIdInTransition	= 0x69697473,
        bmdSwitcherMixEffectBlockPropertyIdFadeToBlackFramesRemaining	= 0x6666726d,
        bmdSwitcherMixEffectBlockPropertyIdInFadeToBlack	= 0x69696662,
        bmdSwitcherMixEffectBlockPropertyIdPreviewLive	= 0x70766c76,
        bmdSwitcherMixEffectBlockPropertyIdPreviewTransition	= 0x70767473,
        bmdSwitcherMixEffectBlockPropertyIdInputAvailabilityMask	= 0x6961766d,
        bmdSwitcherMixEffectBlockPropertyIdFadeToBlackRate	= 0x66746272,
        bmdSwitcherMixEffectBlockPropertyIdFadeToBlackFullyBlack	= 0x66746262,
        bmdSwitcherMixEffectBlockPropertyIdFadeToBlackInTransition	= 0x66746274
    } 	BMDSwitcherMixEffectBlockPropertyId;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioMonitorOutputEventType
    {
        bmdSwitcherAudioMonitorOutputEventTypeMonitorEnableChanged	= 0x6d6e6543,
        bmdSwitcherAudioMonitorOutputEventTypeGainChanged	= 0x6d676e43,
        bmdSwitcherAudioMonitorOutputEventTypeMuteChanged	= 0x6d746543,
        bmdSwitcherAudioMonitorOutputEventTypeSoloChanged	= 0x736f6c43,
        bmdSwitcherAudioMonitorOutputEventTypeSoloInputChanged	= 0x736c6943,
        bmdSwitcherAudioMonitorOutputEventTypeDimChanged	= 0x64696d43,
        bmdSwitcherAudioMonitorOutputEventTypeDimLevelChanged	= 0x646d6c43
    } 	BMDSwitcherAudioMonitorOutputEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioInputEventType
    {
        bmdSwitcherAudioInputEventTypeCurrentExternalPortTypeChanged	= 0x65707443,
        bmdSwitcherAudioInputEventTypeMixOptionChanged	= 0x6d786f43,
        bmdSwitcherAudioInputEventTypeGainChanged	= 0x69676e43,
        bmdSwitcherAudioInputEventTypeBalanceChanged	= 0x62616c43,
        bmdSwitcherAudioInputEventTypeIsMixedInChanged	= 0x696d6943
    } 	BMDSwitcherAudioInputEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioMixerEventType
    {
        bmdSwitcherAudioMixerEventTypeProgramOutGainChanged	= 0x70676e43,
        bmdSwitcherAudioMixerEventTypeProgramOutBalanceChanged	= 0x62616c43,
        bmdSwitcherAudioMixerEventTypeProgramOutFollowFadeToBlackChanged	= 0x66666243,
        bmdSwitcherAudioMixerEventTypeAudioFollowVideoCrossfadeTransitionChanged	= 0x61667443
    } 	BMDSwitcherAudioMixerEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioInputType
    {
        bmdSwitcherAudioInputTypeEmbeddedWithVideo	= 0x65777664,
        bmdSwitcherAudioInputTypeMediaPlayer	= 0x6d647079,
        bmdSwitcherAudioInputTypeAudioIn	= 0x6164696e
    } 	BMDSwitcherAudioInputType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioMixOption
    {
        bmdSwitcherAudioMixOptionOff	= 0x6f666666,
        bmdSwitcherAudioMixOptionOn	= 0x6f6e6f6e,
        bmdSwitcherAudioMixOptionAudioFollowVideo	= 0x61667676
    } 	BMDSwitcherAudioMixOption;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTalkbackEventType
    {
        bmdSwitcherTalkbackEventTypeMuteSDIChanged	= 0x746d7343,
        bmdSwitcherTalkbackEventTypeInputMuteSDIChanged	= 0x696d7343,
        bmdSwitcherTalkbackEventTypeCurrentInputSupportsMuteSDIChanged	= 0x69736d43
    } 	BMDSwitcherTalkbackEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherAudioHeadphoneOutputEventType
    {
        bmdSwitcherAudioHeadphoneOutputEventTypeGainChanged	= 0x686f6743,
        bmdSwitcherAudioHeadphoneOutputEventTypeInputProgramOutGainChanged	= 0x686f7043,
        bmdSwitcherAudioHeadphoneOutputEventTypeInputTalkbackGainChanged	= 0x686f7443,
        bmdSwitcherAudioHeadphoneOutputEventTypeInputSidetoneGainChanged	= 0x686f7343
    } 	BMDSwitcherAudioHeadphoneOutputEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionStyle
    {
        bmdSwitcherTransitionStyleMix	= 0x6d697878,
        bmdSwitcherTransitionStyleDip	= 0x64697070,
        bmdSwitcherTransitionStyleWipe	= 0x77697065,
        bmdSwitcherTransitionStyleDVE	= 0x64766565,
        bmdSwitcherTransitionStyleStinger	= 0x73746e67
    } 	BMDSwitcherTransitionStyle;

typedef /* [v1_enum] */ 
enum _BMDSwitcherTransitionSelection
    {
        bmdSwitcherTransitionSelectionBackground	= 0x1,
        bmdSwitcherTransitionSelectionKey1	= 0x2,
        bmdSwitcherTransitionSelectionKey2	= 0x4,
        bmdSwitcherTransitionSelectionKey3	= 0x8,
        bmdSwitcherTransitionSelectionKey4	= 0x10
    } 	BMDSwitcherTransitionSelection;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyLumaParametersEventType
    {
        bmdSwitcherKeyLumaParametersEventTypePreMultipliedChanged	= 0x706d6c43,
        bmdSwitcherKeyLumaParametersEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherKeyLumaParametersEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherKeyLumaParametersEventTypeInverseChanged	= 0x696e7643
    } 	BMDSwitcherKeyLumaParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyChromaParametersEventType
    {
        bmdSwitcherKeyChromaParametersEventTypeHueChanged	= 0x68756543,
        bmdSwitcherKeyChromaParametersEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherKeyChromaParametersEventTypeYSuppressChanged	= 0x79737043,
        bmdSwitcherKeyChromaParametersEventTypeLiftChanged	= 0x6c667443,
        bmdSwitcherKeyChromaParametersEventTypeNarrowChanged	= 0x6e727743
    } 	BMDSwitcherKeyChromaParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyPatternParametersEventType
    {
        bmdSwitcherKeyPatternParametersEventTypePatternChanged	= 0x70617443,
        bmdSwitcherKeyPatternParametersEventTypeSizeChanged	= 0x737a6543,
        bmdSwitcherKeyPatternParametersEventTypeSymmetryChanged	= 0x73796d43,
        bmdSwitcherKeyPatternParametersEventTypeSoftnessChanged	= 0x73667443,
        bmdSwitcherKeyPatternParametersEventTypeHorizontalOffsetChanged	= 0x687a6f43,
        bmdSwitcherKeyPatternParametersEventTypeVerticalOffsetChanged	= 0x76746f43,
        bmdSwitcherKeyPatternParametersEventTypeInverseChanged	= 0x696e7643
    } 	BMDSwitcherKeyPatternParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyFlyKeyFrameParametersEventType
    {
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeSizeXChanged	= 0x66737a78,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeSizeYChanged	= 0x66737a79,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypePositionXChanged	= 0x66707378,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypePositionYChanged	= 0x66707379,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeRotationChanged	= 0x66726f74,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderWidthOutChanged	= 0x6662776f,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderWidthInChanged	= 0x66627769,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderSoftnessOutChanged	= 0x6662736f,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderSoftnessInChanged	= 0x66627369,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderBevelSoftnessChanged	= 0x66626273,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderBevelPositionChanged	= 0x66626270,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderHueChanged	= 0x66626875,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderSaturationChanged	= 0x66627374,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderLumaChanged	= 0x66626c6d,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderLightSourceDirectionChanged	= 0x66626c64,
        bmdSwitcherKeyFlyKeyFrameParametersEventTypeBorderLightSourceAltitudeChanged	= 0x66626c61
    } 	BMDSwitcherKeyFlyKeyFrameParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyFlyParametersEventType
    {
        bmdSwitcherKeyFlyParametersEventTypeFlyChanged	= 0x666c7943,
        bmdSwitcherKeyFlyParametersEventTypeCanFlyChanged	= 0x63666c43,
        bmdSwitcherKeyFlyParametersEventTypeRateChanged	= 0x72746543,
        bmdSwitcherKeyFlyParametersEventTypeSizeXChanged	= 0x737a7843,
        bmdSwitcherKeyFlyParametersEventTypeSizeYChanged	= 0x737a7943,
        bmdSwitcherKeyFlyParametersEventTypePositionXChanged	= 0x70737843,
        bmdSwitcherKeyFlyParametersEventTypePositionYChanged	= 0x70737943,
        bmdSwitcherKeyFlyParametersEventTypeRotationChanged	= 0x726f7443,
        bmdSwitcherKeyFlyParametersEventTypeIsKeyFrameStoredChanged	= 0x6b667343,
        bmdSwitcherKeyFlyParametersEventTypeIsAtKeyFramesChanged	= 0x616b6643,
        bmdSwitcherKeyFlyParametersEventTypeIsRunningChanged	= 0x726e6743
    } 	BMDSwitcherKeyFlyParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyDVEParametersEventType
    {
        bmdSwitcherKeyDVEParametersEventTypeShadowChanged	= 0x73686443,
        bmdSwitcherKeyDVEParametersEventTypeLightSourceDirectionChanged	= 0x6c746443,
        bmdSwitcherKeyDVEParametersEventTypeLightSourceAltitudeChanged	= 0x6c746143,
        bmdSwitcherKeyDVEParametersEventTypeBorderEnabledChanged	= 0x62656e43,
        bmdSwitcherKeyDVEParametersEventTypeBorderBevelChanged	= 0x62627643,
        bmdSwitcherKeyDVEParametersEventTypeBorderWidthInChanged	= 0x62776943,
        bmdSwitcherKeyDVEParametersEventTypeBorderWidthOutChanged	= 0x62776f43,
        bmdSwitcherKeyDVEParametersEventTypeBorderSoftnessInChanged	= 0x62736943,
        bmdSwitcherKeyDVEParametersEventTypeBorderSoftnessOutChanged	= 0x62736f43,
        bmdSwitcherKeyDVEParametersEventTypeBorderBevelSoftnessChanged	= 0x62627343,
        bmdSwitcherKeyDVEParametersEventTypeBorderBevelPositionChanged	= 0x62627043,
        bmdSwitcherKeyDVEParametersEventTypeBorderOpacityChanged	= 0x626f7043,
        bmdSwitcherKeyDVEParametersEventTypeBorderHueChanged	= 0x62687543,
        bmdSwitcherKeyDVEParametersEventTypeBorderSaturationChanged	= 0x62737443,
        bmdSwitcherKeyDVEParametersEventTypeBorderLumaChanged	= 0x626c6d43,
        bmdSwitcherKeyDVEParametersEventTypeMaskedChanged	= 0x6d736b43,
        bmdSwitcherKeyDVEParametersEventTypeMaskTopChanged	= 0x6d747043,
        bmdSwitcherKeyDVEParametersEventTypeMaskBottomChanged	= 0x6d627443,
        bmdSwitcherKeyDVEParametersEventTypeMaskLeftChanged	= 0x6d6c6643,
        bmdSwitcherKeyDVEParametersEventTypeMaskRightChanged	= 0x6d727443
    } 	BMDSwitcherKeyDVEParametersEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyEventType
    {
        bmdSwitcherKeyEventTypeTypeChanged	= 0x74797043,
        bmdSwitcherKeyEventTypeInputCutChanged	= 0x69706343,
        bmdSwitcherKeyEventTypeInputFillChanged	= 0x69706643,
        bmdSwitcherKeyEventTypeOnAirChanged	= 0x6f6e6143,
        bmdSwitcherKeyEventTypeCanBeDVEKeyChanged	= 0x63626443,
        bmdSwitcherKeyEventTypeMaskedChanged	= 0x6d6b6543,
        bmdSwitcherKeyEventTypeMaskTopChanged	= 0x6d6b7443,
        bmdSwitcherKeyEventTypeMaskBottomChanged	= 0x6d6b6243,
        bmdSwitcherKeyEventTypeMaskLeftChanged	= 0x6d6b6c43,
        bmdSwitcherKeyEventTypeMaskRightChanged	= 0x6d6b7243
    } 	BMDSwitcherKeyEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherKeyType
    {
        bmdSwitcherKeyTypeLuma	= 0x6c756d61,
        bmdSwitcherKeyTypeChroma	= 0x6368726d,
        bmdSwitcherKeyTypePattern	= 0x7074726e,
        bmdSwitcherKeyTypeDVE	= 0x64766565
    } 	BMDSwitcherKeyType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherPatternStyle
    {
        bmdSwitcherPatternStyleLeftToRightBar	= 0x6c747262,
        bmdSwitcherPatternStyleTopToBottomBar	= 0x74746262,
        bmdSwitcherPatternStyleHorizontalBarnDoor	= 0x68626e64,
        bmdSwitcherPatternStyleVerticalBarnDoor	= 0x76626e64,
        bmdSwitcherPatternStyleCornersInFourBox	= 0x63696662,
        bmdSwitcherPatternStyleRectangleIris	= 0x72656369,
        bmdSwitcherPatternStyleDiamondIris	= 0x64696169,
        bmdSwitcherPatternStyleCircleIris	= 0x63697269,
        bmdSwitcherPatternStyleTopLeftBox	= 0x746c6278,
        bmdSwitcherPatternStyleTopRightBox	= 0x74726278,
        bmdSwitcherPatternStyleBottomRightBox	= 0x62726278,
        bmdSwitcherPatternStyleBottomLeftBox	= 0x626c6278,
        bmdSwitcherPatternStyleTopCentreBox	= 0x74636278,
        bmdSwitcherPatternStyleRightCentreBox	= 0x72636278,
        bmdSwitcherPatternStyleBottomCentreBox	= 0x62636278,
        bmdSwitcherPatternStyleLeftCentreBox	= 0x6c636278,
        bmdSwitcherPatternStyleTopLeftDiagonal	= 0x746c6467,
        bmdSwitcherPatternStyleTopRightDiagonal	= 0x74726467
    } 	BMDSwitcherPatternStyle;

typedef /* [v1_enum] */ 
enum _BMDSwitcherVideoMode
    {
        bmdSwitcherVideoMode525i5994NTSC	= 0x6e747363,
        bmdSwitcherVideoMode625i50PAL	= 0x70616c6c,
        bmdSwitcherVideoMode525i5994Anamorphic	= 0x6e747341,
        bmdSwitcherVideoMode625i50Anamorphic	= 0x70616c41,
        bmdSwitcherVideoMode720p50	= 0x37327030,
        bmdSwitcherVideoMode720p5994	= 0x37327039,
        bmdSwitcherVideoMode1080i50	= 0x31306930,
        bmdSwitcherVideoMode1080i5994	= 0x31306939,
        bmdSwitcherVideoMode1080p2398	= 0x31307033,
        bmdSwitcherVideoMode1080p24	= 0x31307034,
        bmdSwitcherVideoMode1080p25	= 0x31307035,
        bmdSwitcherVideoMode1080p2997	= 0x31307037,
        bmdSwitcherVideoMode1080p50	= 0x31307030,
        bmdSwitcherVideoMode1080p5994	= 0x31307039,
        bmdSwitcherVideoMode4KHDp2398	= 0x34483233,
        bmdSwitcherVideoMode4KHDp24	= 0x34483234,
        bmdSwitcherVideoMode4KHDp25	= 0x34483235,
        bmdSwitcherVideoMode4KHDp2997	= 0x34483239,
        bmdSwitcherVideoMode4KHDp50	= 0x34483530,
        bmdSwitcherVideoMode4KHDp5994	= 0x34483539
    } 	BMDSwitcherVideoMode;

typedef /* [v1_enum] */ 
enum _BMDSwitcherDownConversionMethod
    {
        bmdSwitcherDownConversionMethodCentreCut	= 0x646d6363,
        bmdSwitcherDownConversionMethodLetterbox	= 0x646d6c62,
        bmdSwitcherDownConversionMethodAnamorphic	= 0x646d616d
    } 	BMDSwitcherDownConversionMethod;

typedef /* [v1_enum] */ 
enum _BMDSwitcher3GSDIOutputLevel
    {
        bmdSwitcher3GSDIOutputLevelA	= 0x33677361,
        bmdSwitcher3GSDIOutputLevelB	= 0x33677362
    } 	BMDSwitcher3GSDIOutputLevel;

typedef /* [v1_enum] */ 
enum _BMDSwitcherPowerStatus
    {
        bmdSwitcherPowerStatusSupply1	= 0x1,
        bmdSwitcherPowerStatusSupply2	= 0x2
    } 	BMDSwitcherPowerStatus;

typedef /* [v1_enum] */ 
enum _BMDSwitcherPixelFormat
    {
        bmdSwitcherPixelFormat8BitARGB	= 0x61726762,
        bmdSwitcherPixelFormat8BitXRGB	= 0x78726762,
        bmdSwitcherPixelFormat8BitYUV	= 0x32767579,
        bmdSwitcherPixelFormat10BitYUVA	= 0x79757661
    } 	BMDSwitcherPixelFormat;

typedef /* [v1_enum] */ 
enum _BMDSwitcherFlyKeyFrame
    {
        bmdSwitcherFlyKeyFrameFull	= 0x1,
        bmdSwitcherFlyKeyFrameInfinityCentreOfKey	= 0x2,
        bmdSwitcherFlyKeyFrameInfinityTopLeft	= 0x4,
        bmdSwitcherFlyKeyFrameInfinityTop	= 0x8,
        bmdSwitcherFlyKeyFrameInfinityTopRight	= 0x10,
        bmdSwitcherFlyKeyFrameInfinityLeft	= 0x20,
        bmdSwitcherFlyKeyFrameInfinityCentre	= 0x40,
        bmdSwitcherFlyKeyFrameInfinityRight	= 0x80,
        bmdSwitcherFlyKeyFrameInfinityBottomLeft	= 0x100,
        bmdSwitcherFlyKeyFrameInfinityBottom	= 0x200,
        bmdSwitcherFlyKeyFrameInfinityBottomRight	= 0x400,
        bmdSwitcherFlyKeyFrameA	= 0x800,
        bmdSwitcherFlyKeyFrameB	= 0x1000
    } 	BMDSwitcherFlyKeyFrame;

typedef /* [v1_enum] */ 
enum _BMDSwitcherDVETransitionStyle
    {
        bmdSwitcherDVETransitionStyleSwooshTopLeft	= 0x7377746c,
        bmdSwitcherDVETransitionStyleSwooshTop	= 0x73777463,
        bmdSwitcherDVETransitionStyleSwooshTopRight	= 0x73777472,
        bmdSwitcherDVETransitionStyleSwooshLeft	= 0x73776c63,
        bmdSwitcherDVETransitionStyleSwooshRight	= 0x73777263,
        bmdSwitcherDVETransitionStyleSwooshBottomLeft	= 0x7377626c,
        bmdSwitcherDVETransitionStyleSwooshBottom	= 0x73776263,
        bmdSwitcherDVETransitionStyleSwooshBottomRight	= 0x73776272,
        bmdSwitcherDVETransitionStyleSpinCWTopLeft	= 0x7370746c,
        bmdSwitcherDVETransitionStyleSpinCWTopRight	= 0x73707472,
        bmdSwitcherDVETransitionStyleSpinCWBottomLeft	= 0x7370626c,
        bmdSwitcherDVETransitionStyleSpinCWBottomRight	= 0x73706272,
        bmdSwitcherDVETransitionStyleSpinCCWTopLeft	= 0x7363746c,
        bmdSwitcherDVETransitionStyleSpinCCWTopRight	= 0x73637472,
        bmdSwitcherDVETransitionStyleSpinCCWBottomLeft	= 0x7363626c,
        bmdSwitcherDVETransitionStyleSpinCCWBottomRight	= 0x73636272,
        bmdSwitcherDVETransitionStyleSqueezeTopLeft	= 0x7371746c,
        bmdSwitcherDVETransitionStyleSqueezeTop	= 0x73717463,
        bmdSwitcherDVETransitionStyleSqueezeTopRight	= 0x73717472,
        bmdSwitcherDVETransitionStyleSqueezeLeft	= 0x73716c63,
        bmdSwitcherDVETransitionStyleSqueezeRight	= 0x73717263,
        bmdSwitcherDVETransitionStyleSqueezeBottomLeft	= 0x7371626c,
        bmdSwitcherDVETransitionStyleSqueezeBottom	= 0x73716263,
        bmdSwitcherDVETransitionStyleSqueezeBottomRight	= 0x73716272,
        bmdSwitcherDVETransitionStylePushTopLeft	= 0x7375746c,
        bmdSwitcherDVETransitionStylePushTop	= 0x73757463,
        bmdSwitcherDVETransitionStylePushTopRight	= 0x73757472,
        bmdSwitcherDVETransitionStylePushLeft	= 0x73756c63,
        bmdSwitcherDVETransitionStylePushRight	= 0x73757263,
        bmdSwitcherDVETransitionStylePushBottomLeft	= 0x7375626c,
        bmdSwitcherDVETransitionStylePushBottom	= 0x73756263,
        bmdSwitcherDVETransitionStylePushBottomRight	= 0x73756272,
        bmdSwitcherDVETransitionStyleGraphicCWSpin	= 0x73676377,
        bmdSwitcherDVETransitionStyleGraphicCCWSpin	= 0x73676363,
        bmdSwitcherDVETransitionStyleGraphicLogoWipe	= 0x73676c77
    } 	BMDSwitcherDVETransitionStyle;

typedef /* [v1_enum] */ 
enum _BMDSwitcherStingerTransitionSource
    {
        bmdSwitcherStingerTransitionSourceMediaPlayer1	= 0x736d7031,
        bmdSwitcherStingerTransitionSourceMediaPlayer2	= 0x736d7032,
        bmdSwitcherStingerTransitionSourceMediaPlayer3	= 0x736d7033,
        bmdSwitcherStingerTransitionSourceMediaPlayer4	= 0x736d7034,
        bmdSwitcherStingerTransitionSourceNone	= 0x736e6f6e
    } 	BMDSwitcherStingerTransitionSource;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMediaPlayerSourceType
    {
        bmdSwitcherMediaPlayerSourceTypeStill	= 0x736d7073,
        bmdSwitcherMediaPlayerSourceTypeClip	= 0x736d7063
    } 	BMDSwitcherMediaPlayerSourceType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMultiViewLayout
    {
        bmdSwitcherMultiViewLayoutProgramTop	= 0x6d767074,
        bmdSwitcherMultiViewLayoutProgramBottom	= 0x6d767062,
        bmdSwitcherMultiViewLayoutProgramLeft	= 0x6d76706c,
        bmdSwitcherMultiViewLayoutProgramRight	= 0x6d767072
    } 	BMDSwitcherMultiViewLayout;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMultiViewEventType
    {
        bmdSwitcherMultiViewEventTypeLayoutChanged	= 0x6c6f7443,
        bmdSwitcherMultiViewEventTypeWindowChanged	= 0x77647743,
        bmdSwitcherMultiViewEventTypeCurrentInputSupportsVuMeterChanged	= 0x766d7343,
        bmdSwitcherMultiViewEventTypeVuMeterEnabledChanged	= 0x766d6543,
        bmdSwitcherMultiViewEventTypeVuMeterOpacityChanged	= 0x766d6f43,
        bmdSwitcherMultiViewEventTypeSafeAreaEnabledChanged	= 0x73616543,
        bmdSwitcherMultiViewEventTypeProgramPreviewSwappedChanged	= 0x70707343
    } 	BMDSwitcherMultiViewEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherDownstreamKeyEventType
    {
        bmdSwitcherDownstreamKeyEventTypeInputCutChanged	= 0x69706343,
        bmdSwitcherDownstreamKeyEventTypeInputFillChanged	= 0x69706643,
        bmdSwitcherDownstreamKeyEventTypeTieChanged	= 0x74696543,
        bmdSwitcherDownstreamKeyEventTypeRateChanged	= 0x72746543,
        bmdSwitcherDownstreamKeyEventTypeOnAirChanged	= 0x6f6e6143,
        bmdSwitcherDownstreamKeyEventTypeIsTransitioningChanged	= 0x69747343,
        bmdSwitcherDownstreamKeyEventTypeIsAutoTransitioningChanged	= 0x69617443,
        bmdSwitcherDownstreamKeyEventTypeFramesRemainingChanged	= 0x66726d43,
        bmdSwitcherDownstreamKeyEventTypePreMultipliedChanged	= 0x706d6c43,
        bmdSwitcherDownstreamKeyEventTypeClipChanged	= 0x636c7043,
        bmdSwitcherDownstreamKeyEventTypeGainChanged	= 0x676e6543,
        bmdSwitcherDownstreamKeyEventTypeInverseChanged	= 0x696e7643,
        bmdSwitcherDownstreamKeyEventTypeMaskedChanged	= 0x6d736b43,
        bmdSwitcherDownstreamKeyEventTypeMaskTopChanged	= 0x6d6b7443,
        bmdSwitcherDownstreamKeyEventTypeMaskBottomChanged	= 0x6d6b6243,
        bmdSwitcherDownstreamKeyEventTypeMaskLeftChanged	= 0x6d6b6c43,
        bmdSwitcherDownstreamKeyEventTypeMaskRightChanged	= 0x6d6b7243
    } 	BMDSwitcherDownstreamKeyEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherConnectToFailure
    {
        bmdSwitcherConnectToFailureNoResponse	= 0x63666e72,
        bmdSwitcherConnectToFailureIncompatibleFirmware	= 0x63666966,
        bmdSwitcherConnectToFailureCorruptData	= 0x63666364,
        bmdSwitcherConnectToFailureStateSync	= 0x63667373,
        bmdSwitcherConnectToFailureStateSyncTimedOut	= 0x63667374
    } 	BMDSwitcherConnectToFailure;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMediaPoolEventType
    {
        bmdSwitcherMediaPoolEventTypeValidChanged	= 0x766c6964,
        bmdSwitcherMediaPoolEventTypeNameChanged	= 0x6e616d65,
        bmdSwitcherMediaPoolEventTypeHashChanged	= 0x68617368,
        bmdSwitcherMediaPoolEventTypeAudioValidChanged	= 0x61766c64,
        bmdSwitcherMediaPoolEventTypeAudioNameChanged	= 0x616e6d65,
        bmdSwitcherMediaPoolEventTypeAudioHashChanged	= 0x61687368,
        bmdSwitcherMediaPoolEventTypeLockBusy	= 0x6c627379,
        bmdSwitcherMediaPoolEventTypeLockIdle	= 0x6c69646c,
        bmdSwitcherMediaPoolEventTypeTransferCompleted	= 0x636d7074,
        bmdSwitcherMediaPoolEventTypeTransferCancelled	= 0x636e636c,
        bmdSwitcherMediaPoolEventTypeTransferFailed	= 0x6661696c
    } 	BMDSwitcherMediaPoolEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherCameraControlEventType
    {
        bmdSwitcherCameraControlEventTypePeriodicFlushIntervalChanged	= 0x70666963,
        bmdSwitcherCameraControlEventTypeParameterValueChanged	= 0x706d7663,
        bmdSwitcherCameraControlEventTypeParameterPeriodicFlushEnabledChanged	= 0x706d7063
    } 	BMDSwitcherCameraControlEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherCameraControlParameterType
    {
        bmdSwitcherCameraControlParameterTypeVoidBool	= 0x63637662,
        bmdSwitcherCameraControlParameterTypeSigned8Bit	= 0x63637338,
        bmdSwitcherCameraControlParameterTypeSigned16Bit	= 0x63637331,
        bmdSwitcherCameraControlParameterTypeSigned32Bit	= 0x63637333,
        bmdSwitcherCameraControlParameterTypeSigned64Bit	= 0x63637336,
        bmdSwitcherCameraControlParameterTypeUTF8	= 0x63637538,
        bmdSwitcherCameraControlParameterTypeFixedPoint16Bit	= 0x63636670
    } 	BMDSwitcherCameraControlParameterType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMacroPoolEventType
    {
        bmdSwitcherMacroPoolEventTypeValidChanged	= 0x6d617661,
        bmdSwitcherMacroPoolEventTypeHasUnsupportedOpsChanged	= 0x6d616f70,
        bmdSwitcherMacroPoolEventTypeNameChanged	= 0x6d616e61,
        bmdSwitcherMacroPoolEventTypeDescriptionChanged	= 0x6d616465,
        bmdSwitcherMacroPoolEventTypeTransferCompleted	= 0x6d617473,
        bmdSwitcherMacroPoolEventTypeTransferCancelled	= 0x6d617463,
        bmdSwitcherMacroPoolEventTypeTransferFailed	= 0x6d617466
    } 	BMDSwitcherMacroPoolEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMacroControlEventType
    {
        bmdSwitcherMacroControlEventTypeRunStatusChanged	= 0x6d61726e,
        bmdSwitcherMacroControlEventTypeRecordStatusChanged	= 0x6d617263
    } 	BMDSwitcherMacroControlEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMacroRunStatus
    {
        bmdSwitcherMacroRunStatusIdle	= 0,
        bmdSwitcherMacroRunStatusRunning	= 0x1,
        bmdSwitcherMacroRunStatusWaitingForUser	= 0x2
    } 	BMDSwitcherMacroRunStatus;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMacroRecordStatus
    {
        bmdSwitcherMacroRecordStatusIdle	= 0,
        bmdSwitcherMacroRecordStatusRecording	= 0x1
    } 	BMDSwitcherMacroRecordStatus;

typedef /* [v1_enum] */ 
enum _BMDSwitcherSerialPortFunction
    {
        bmdSwitcherSerialPortFunctionNone	= 0x7370666e,
        bmdSwitcherSerialPortFunctionPtzVisca	= 0x73706670,
        bmdSwitcherSerialPortFunctionGvg100	= 0x73706667
    } 	BMDSwitcherSerialPortFunction;

typedef /* [v1_enum] */ 
enum _BMDSwitcherSerialPortEventType
    {
        bmdSwitcherSerialPortEventTypeFunctionChanged	= 0x73706663
    } 	BMDSwitcherSerialPortEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherHyperDeckClipEventType
    {
        bmdSwitcherHyperDeckClipEventTypeValidChanged	= 0x65636e43,
        bmdSwitcherHyperDeckClipEventTypeInfoAvailableChanged	= 0x65636943
    } 	BMDSwitcherHyperDeckClipEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherHyperDeckPlayerState
    {
        bmdSwitcherHyperDeckStateUnknown	= 0x65707375,
        bmdSwitcherHyperDeckStateIdle	= 0x65707369,
        bmdSwitcherHyperDeckStatePlay	= 0x65707370,
        bmdSwitcherHyperDeckStateRecord	= 0x65707372,
        bmdSwitcherHyperDeckStateShuttle	= 0x65707366
    } 	BMDSwitcherHyperDeckPlayerState;

typedef /* [v1_enum] */ 
enum _BMDSwitcherHyperDeckEventType
    {
        bmdSwitcherHyperDeckEventTypeConnectionStatusChanged	= 0x656d7343,
        bmdSwitcherHyperDeckEventTypeRemoteAccessEnabledChanged	= 0x656d6143,
        bmdSwitcherHyperDeckEventTypeStorageMediaStateChanged	= 0x656d7643,
        bmdSwitcherHyperDeckEventTypeEstimatedRecordTimeRemainingChanged	= 0x656d5243,
        bmdSwitcherHyperDeckEventTypeActiveStorageMediaChanged	= 0x656d5643,
        bmdSwitcherHyperDeckEventTypeClipCountChanged	= 0x656d6343,
        bmdSwitcherHyperDeckEventTypeSwitcherInputChanged	= 0x656d6943,
        bmdSwitcherHyperDeckEventTypeFrameRateChanged	= 0x656d7243,
        bmdSwitcherHyperDeckEventTypeInterlacedVideoChanged	= 0x656d7443,
        bmdSwitcherHyperDeckEventTypeDropFrameTimeCodeChanged	= 0x656d6443,
        bmdSwitcherHyperDeckEventTypePlayerStateChanged	= 0x656d7043,
        bmdSwitcherHyperDeckEventTypeCurrentClipChanged	= 0x656d7543,
        bmdSwitcherHyperDeckEventTypeCurrentClipTimeChanged	= 0x656d6d43,
        bmdSwitcherHyperDeckEventTypeCurrentTimelineTimeChanged	= 0x656d4d43,
        bmdSwitcherHyperDeckEventTypeShuttleSpeedChanged	= 0x656d6843,
        bmdSwitcherHyperDeckEventTypeLoopedPlaybackChanged	= 0x656d6c43,
        bmdSwitcherHyperDeckEventTypeSingleClipPlaybackChanged	= 0x656d6743,
        bmdSwitcherHyperDeckEventTypeAutoRollOnTakeChanged	= 0x656d4143,
        bmdSwitcherHyperDeckEventTypeAutoRollOnTakeFrameDelayChanged	= 0x656d4443,
        bmdSwitcherHyperDeckEventTypeNetworkAddressChanged	= 0x656d6e43
    } 	BMDSwitcherHyperDeckEventType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherHyperDeckConnectionStatus
    {
        bmdSwitcherHyperDeckConnectionStatusNotConnected	= 0x65736e63,
        bmdSwitcherHyperDeckConnectionStatusConnecting	= 0x65736367,
        bmdSwitcherHyperDeckConnectionStatusConnected	= 0x65736364,
        bmdSwitcherHyperDeckConnectionStatusIncompatible	= 0x65736963
    } 	BMDSwitcherHyperDeckConnectionStatus;

typedef /* [v1_enum] */ 
enum _BMDSwitcherHyperDeckStorageMediaState
    {
        bmdSwitcherHyperDeckStorageMediaStateReady	= 0x65737264,
        bmdSwitcherHyperDeckStorageMediaStateUnavailable	= 0x6573756e
    } 	BMDSwitcherHyperDeckStorageMediaState;

typedef /* [v1_enum] */ 
enum _BMDSwitcherHyperDeckErrorType
    {
        bmdSwitcherHyperDeckErrorTypeUnknown	= 0x6565756b,
        bmdSwitcherHyperDeckErrorTypeAlreadyInUse	= 0x65656975,
        bmdSwitcherHyperDeckErrorTypeDuplicateAddress	= 0x65656461,
        bmdSwitcherHyperDeckErrorTypeRemoteDisabled	= 0x65657264,
        bmdSwitcherHyperDeckErrorTypeMediaFull	= 0x65656d66,
        bmdSwitcherHyperDeckErrorTypeMediaError	= 0x65656d65,
        bmdSwitcherHyperDeckErrorTypeNoInput	= 0x65656e69
    } 	BMDSwitcherHyperDeckErrorType;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMixMinusOutputAudioMode
    {
        bmdSwitcherMixMinusOutputAudioModeProgramOut	= 0x6d6d6f70,
        bmdSwitcherMixMinusOutputAudioModeMixMinus	= 0x6d6d6f6d
    } 	BMDSwitcherMixMinusOutputAudioMode;

typedef /* [v1_enum] */ 
enum _BMDSwitcherMixMinusOutputEventType
    {
        bmdSwitcherMixMinusOutputEventTypeAudioModeChanged	= 0x6d6d6d43
    } 	BMDSwitcherMixMinusOutputEventType;



































































































typedef /* [v1_enum] */ 
enum _BMDSwitcherPropertyId_v4_0
    {
        bmdSwitcherPropertyIdProductName_v4_0	= 0x70646e6d,
        bmdSwitcherPropertyIdVideoMode_v4_0	= 0x76646d64,
        bmdSwitcherPropertyIdDownConvertMode_v4_0	= 0x64636d64,
        bmdSwitcherPropertyIdPowerStatus_v4_0	= 0x70777273
    } 	BMDSwitcherPropertyId_v4_0;
















typedef /* [v1_enum] */ 
enum _BMDSwitcherEventType_v6_4_1
    {
        bmdSwitcherEventTypeVideoModeChanged_v6_4_1	= 0x73657664,
        bmdSwitcherEventTypeDownConverterModeChanged_v6_4_1	= 0x73656463,
        bmdSwitcherEventTypePowerStatusChanged_v6_4_1	= 0x73657077,
        bmdSwitcherEventTypeDisconnected_v6_4_1	= 0x73656469
    } 	BMDSwitcherEventType_v6_4_1;

typedef /* [v1_enum] */ 
enum _BMDSwitcherDownConverterMode_v6_4_1
    {
        bmdSwitcherDownConverterModeCentreCut_v6_4_1	= 0x64636363,
        bmdSwitcherDownConverterModeLetterbox_v6_4_1	= 0x64636c62,
        bmdSwitcherDownConverterModeAnamorphic_v6_4_1	= 0x6463616d
    } 	BMDSwitcherDownConverterMode_v6_4_1;




typedef /* [v1_enum] */ 
enum _BMDSwitcherInputPropertyId_v6_5_1
    {
        bmdSwitcherInputPropertyIdPortType_v6_5_1	= 0x70727470,
        bmdSwitcherInputPropertyIdInputAvailability_v6_5_1	= 0x61766c62,
        bmdSwitcherInputPropertyIdShortName_v6_5_1	= 0x73686e6d,
        bmdSwitcherInputPropertyIdLongName_v6_5_1	= 0x6c676e6d,
        bmdSwitcherInputPropertyIdIsProgramTallied_v6_5_1	= 0x69706774,
        bmdSwitcherInputPropertyIdIsPreviewTallied_v6_5_1	= 0x69707274,
        bmdSwitcherInputPropertyIdAvailableExternalPortTypes_v6_5_1	= 0x61657074,
        bmdSwitcherInputPropertyIdCurrentExternalPortType_v6_5_1	= 0x63657074
    } 	BMDSwitcherInputPropertyId_v6_5_1;


















EXTERN_C const IID LIBID_BMDSwitcherAPI;

#ifndef __IBMDSwitcherAudioMonitorOutputCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMonitorOutputCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMonitorOutputCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMonitorOutputCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CB5EFB16-0474-4FAA-B071-17FA0DADD19F")
    IBMDSwitcherAudioMonitorOutputCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherAudioMonitorOutputEventType eventType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LevelNotification( 
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMonitorOutputCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMonitorOutputCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMonitorOutputCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMonitorOutputCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherAudioMonitorOutputCallback * This,
            /* [in] */ BMDSwitcherAudioMonitorOutputEventType eventType);
        
        HRESULT ( STDMETHODCALLTYPE *LevelNotification )( 
            IBMDSwitcherAudioMonitorOutputCallback * This,
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight);
        
        END_INTERFACE
    } IBMDSwitcherAudioMonitorOutputCallbackVtbl;

    interface IBMDSwitcherAudioMonitorOutputCallback
    {
        CONST_VTBL struct IBMDSwitcherAudioMonitorOutputCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMonitorOutputCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMonitorOutputCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMonitorOutputCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMonitorOutputCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#define IBMDSwitcherAudioMonitorOutputCallback_LevelNotification(This,left,right,peakLeft,peakRight)	\
    ( (This)->lpVtbl -> LevelNotification(This,left,right,peakLeft,peakRight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMonitorOutputCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMonitorOutput_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMonitorOutput_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMonitorOutput */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMonitorOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21E041C3-6C69-4A95-A6CC-AE7A57257407")
    IBMDSwitcherAudioMonitorOutput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMonitorEnable( 
            /* [out] */ BOOL *enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMonitorEnable( 
            /* [in] */ BOOL enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMute( 
            /* [out] */ BOOL *mute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMute( 
            /* [in] */ BOOL mute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSolo( 
            /* [out] */ BOOL *solo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSolo( 
            /* [in] */ BOOL solo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSoloInput( 
            /* [out] */ BMDSwitcherAudioInputId *audioInput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSoloInput( 
            /* [in] */ BMDSwitcherAudioInputId audioInput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDim( 
            /* [out] */ BOOL *dim) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDim( 
            /* [in] */ BOOL dim) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDimLevel( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDimLevel( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioMonitorOutputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioMonitorOutputCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMonitorOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMonitorOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMonitorOutput * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMonitorEnable )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BOOL *enable);
        
        HRESULT ( STDMETHODCALLTYPE *SetMonitorEnable )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BOOL enable);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetMute )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BOOL *mute);
        
        HRESULT ( STDMETHODCALLTYPE *SetMute )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BOOL mute);
        
        HRESULT ( STDMETHODCALLTYPE *GetSolo )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BOOL *solo);
        
        HRESULT ( STDMETHODCALLTYPE *SetSolo )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BOOL solo);
        
        HRESULT ( STDMETHODCALLTYPE *GetSoloInput )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BMDSwitcherAudioInputId *audioInput);
        
        HRESULT ( STDMETHODCALLTYPE *SetSoloInput )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BMDSwitcherAudioInputId audioInput);
        
        HRESULT ( STDMETHODCALLTYPE *GetDim )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ BOOL *dim);
        
        HRESULT ( STDMETHODCALLTYPE *SetDim )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ BOOL dim);
        
        HRESULT ( STDMETHODCALLTYPE *GetDimLevel )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetDimLevel )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *ResetLevelNotificationPeaks )( 
            IBMDSwitcherAudioMonitorOutput * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ IBMDSwitcherAudioMonitorOutputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioMonitorOutput * This,
            /* [in] */ IBMDSwitcherAudioMonitorOutputCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherAudioMonitorOutputVtbl;

    interface IBMDSwitcherAudioMonitorOutput
    {
        CONST_VTBL struct IBMDSwitcherAudioMonitorOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMonitorOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMonitorOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMonitorOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMonitorOutput_GetMonitorEnable(This,enable)	\
    ( (This)->lpVtbl -> GetMonitorEnable(This,enable) ) 

#define IBMDSwitcherAudioMonitorOutput_SetMonitorEnable(This,enable)	\
    ( (This)->lpVtbl -> SetMonitorEnable(This,enable) ) 

#define IBMDSwitcherAudioMonitorOutput_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherAudioMonitorOutput_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherAudioMonitorOutput_GetMute(This,mute)	\
    ( (This)->lpVtbl -> GetMute(This,mute) ) 

#define IBMDSwitcherAudioMonitorOutput_SetMute(This,mute)	\
    ( (This)->lpVtbl -> SetMute(This,mute) ) 

#define IBMDSwitcherAudioMonitorOutput_GetSolo(This,solo)	\
    ( (This)->lpVtbl -> GetSolo(This,solo) ) 

#define IBMDSwitcherAudioMonitorOutput_SetSolo(This,solo)	\
    ( (This)->lpVtbl -> SetSolo(This,solo) ) 

#define IBMDSwitcherAudioMonitorOutput_GetSoloInput(This,audioInput)	\
    ( (This)->lpVtbl -> GetSoloInput(This,audioInput) ) 

#define IBMDSwitcherAudioMonitorOutput_SetSoloInput(This,audioInput)	\
    ( (This)->lpVtbl -> SetSoloInput(This,audioInput) ) 

#define IBMDSwitcherAudioMonitorOutput_GetDim(This,dim)	\
    ( (This)->lpVtbl -> GetDim(This,dim) ) 

#define IBMDSwitcherAudioMonitorOutput_SetDim(This,dim)	\
    ( (This)->lpVtbl -> SetDim(This,dim) ) 

#define IBMDSwitcherAudioMonitorOutput_GetDimLevel(This,gain)	\
    ( (This)->lpVtbl -> GetDimLevel(This,gain) ) 

#define IBMDSwitcherAudioMonitorOutput_SetDimLevel(This,gain)	\
    ( (This)->lpVtbl -> SetDimLevel(This,gain) ) 

#define IBMDSwitcherAudioMonitorOutput_ResetLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMonitorOutput_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioMonitorOutput_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMonitorOutput_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioInputCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioInputCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioInputCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26E05D77-EFB9-4253-86D8-2F1E82E462F6")
    IBMDSwitcherAudioInputCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherAudioInputEventType eventType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LevelNotification( 
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioInputCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioInputCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioInputCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioInputCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherAudioInputCallback * This,
            /* [in] */ BMDSwitcherAudioInputEventType eventType);
        
        HRESULT ( STDMETHODCALLTYPE *LevelNotification )( 
            IBMDSwitcherAudioInputCallback * This,
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight);
        
        END_INTERFACE
    } IBMDSwitcherAudioInputCallbackVtbl;

    interface IBMDSwitcherAudioInputCallback
    {
        CONST_VTBL struct IBMDSwitcherAudioInputCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioInputCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioInputCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioInputCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioInputCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#define IBMDSwitcherAudioInputCallback_LevelNotification(This,left,right,peakLeft,peakRight)	\
    ( (This)->lpVtbl -> LevelNotification(This,left,right,peakLeft,peakRight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioInputCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioInput_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioInput_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioInput */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioInput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("321EA41E-544B-491B-B9AA-F6FCAECEF74F")
    IBMDSwitcherAudioInput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ BMDSwitcherAudioInputType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentExternalPortType( 
            /* [out] */ BMDSwitcherExternalPortType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMixOption( 
            /* [out] */ BMDSwitcherAudioMixOption *mixOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMixOption( 
            /* [in] */ BMDSwitcherAudioMixOption mixOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBalance( 
            /* [out] */ double *balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBalance( 
            /* [in] */ double balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsMixedIn( 
            /* [out] */ BOOL *mixedIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioInputId( 
            /* [out] */ BMDSwitcherAudioInputId *audioInputId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioInputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioInputCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioInputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioInput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioInput * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ BMDSwitcherAudioInputType *type);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentExternalPortType )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ BMDSwitcherExternalPortType *type);
        
        HRESULT ( STDMETHODCALLTYPE *GetMixOption )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ BMDSwitcherAudioMixOption *mixOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetMixOption )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ BMDSwitcherAudioMixOption mixOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetBalance )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ double *balance);
        
        HRESULT ( STDMETHODCALLTYPE *SetBalance )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ double balance);
        
        HRESULT ( STDMETHODCALLTYPE *IsMixedIn )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ BOOL *mixedIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioInputId )( 
            IBMDSwitcherAudioInput * This,
            /* [out] */ BMDSwitcherAudioInputId *audioInputId);
        
        HRESULT ( STDMETHODCALLTYPE *ResetLevelNotificationPeaks )( 
            IBMDSwitcherAudioInput * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ IBMDSwitcherAudioInputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioInput * This,
            /* [in] */ IBMDSwitcherAudioInputCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherAudioInputVtbl;

    interface IBMDSwitcherAudioInput
    {
        CONST_VTBL struct IBMDSwitcherAudioInputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioInput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioInput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioInput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioInput_GetType(This,type)	\
    ( (This)->lpVtbl -> GetType(This,type) ) 

#define IBMDSwitcherAudioInput_GetCurrentExternalPortType(This,type)	\
    ( (This)->lpVtbl -> GetCurrentExternalPortType(This,type) ) 

#define IBMDSwitcherAudioInput_GetMixOption(This,mixOption)	\
    ( (This)->lpVtbl -> GetMixOption(This,mixOption) ) 

#define IBMDSwitcherAudioInput_SetMixOption(This,mixOption)	\
    ( (This)->lpVtbl -> SetMixOption(This,mixOption) ) 

#define IBMDSwitcherAudioInput_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherAudioInput_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherAudioInput_GetBalance(This,balance)	\
    ( (This)->lpVtbl -> GetBalance(This,balance) ) 

#define IBMDSwitcherAudioInput_SetBalance(This,balance)	\
    ( (This)->lpVtbl -> SetBalance(This,balance) ) 

#define IBMDSwitcherAudioInput_IsMixedIn(This,mixedIn)	\
    ( (This)->lpVtbl -> IsMixedIn(This,mixedIn) ) 

#define IBMDSwitcherAudioInput_GetAudioInputId(This,audioInputId)	\
    ( (This)->lpVtbl -> GetAudioInputId(This,audioInputId) ) 

#define IBMDSwitcherAudioInput_ResetLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioInput_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioInput_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioInput_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixerCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMixerCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMixerCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMixerCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A203DA24-9910-450C-AA6A-9AA05C5C856E")
    IBMDSwitcherAudioMixerCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherAudioMixerEventType eventType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProgramOutLevelNotification( 
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMixerCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMixerCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMixerCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMixerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherAudioMixerCallback * This,
            /* [in] */ BMDSwitcherAudioMixerEventType eventType);
        
        HRESULT ( STDMETHODCALLTYPE *ProgramOutLevelNotification )( 
            IBMDSwitcherAudioMixerCallback * This,
            /* [in] */ double left,
            /* [in] */ double right,
            /* [in] */ double peakLeft,
            /* [in] */ double peakRight);
        
        END_INTERFACE
    } IBMDSwitcherAudioMixerCallbackVtbl;

    interface IBMDSwitcherAudioMixerCallback
    {
        CONST_VTBL struct IBMDSwitcherAudioMixerCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMixerCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMixerCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMixerCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMixerCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#define IBMDSwitcherAudioMixerCallback_ProgramOutLevelNotification(This,left,right,peakLeft,peakRight)	\
    ( (This)->lpVtbl -> ProgramOutLevelNotification(This,left,right,peakLeft,peakRight) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMixerCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixer_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMixer_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMixer */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMixer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BCED8CA2-E915-4701-87D4-F68045701E09")
    IBMDSwitcherAudioMixer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutBalance( 
            /* [out] */ double *balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutBalance( 
            /* [in] */ double balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutFollowFadeToBlack( 
            /* [out] */ BOOL *follow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutFollowFadeToBlack( 
            /* [in] */ BOOL follow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioFollowVideoCrossfadeTransition( 
            /* [out] */ BOOL *transition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAudioFollowVideoCrossfadeTransition( 
            /* [in] */ BOOL transition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAllLevelNotificationsEnable( 
            /* [in] */ BOOL enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetProgramOutLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetAllLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMixerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMixer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMixer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutGain )( 
            IBMDSwitcherAudioMixer * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutGain )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutBalance )( 
            IBMDSwitcherAudioMixer * This,
            /* [out] */ double *balance);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutBalance )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ double balance);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutFollowFadeToBlack )( 
            IBMDSwitcherAudioMixer * This,
            /* [out] */ BOOL *follow);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutFollowFadeToBlack )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ BOOL follow);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioFollowVideoCrossfadeTransition )( 
            IBMDSwitcherAudioMixer * This,
            /* [out] */ BOOL *transition);
        
        HRESULT ( STDMETHODCALLTYPE *SetAudioFollowVideoCrossfadeTransition )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ BOOL transition);
        
        HRESULT ( STDMETHODCALLTYPE *SetAllLevelNotificationsEnable )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ BOOL enable);
        
        HRESULT ( STDMETHODCALLTYPE *ResetProgramOutLevelNotificationPeaks )( 
            IBMDSwitcherAudioMixer * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetAllLevelNotificationPeaks )( 
            IBMDSwitcherAudioMixer * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherAudioMixer * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        END_INTERFACE
    } IBMDSwitcherAudioMixerVtbl;

    interface IBMDSwitcherAudioMixer
    {
        CONST_VTBL struct IBMDSwitcherAudioMixerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMixer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMixer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMixer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMixer_GetProgramOutGain(This,gain)	\
    ( (This)->lpVtbl -> GetProgramOutGain(This,gain) ) 

#define IBMDSwitcherAudioMixer_SetProgramOutGain(This,gain)	\
    ( (This)->lpVtbl -> SetProgramOutGain(This,gain) ) 

#define IBMDSwitcherAudioMixer_GetProgramOutBalance(This,balance)	\
    ( (This)->lpVtbl -> GetProgramOutBalance(This,balance) ) 

#define IBMDSwitcherAudioMixer_SetProgramOutBalance(This,balance)	\
    ( (This)->lpVtbl -> SetProgramOutBalance(This,balance) ) 

#define IBMDSwitcherAudioMixer_GetProgramOutFollowFadeToBlack(This,follow)	\
    ( (This)->lpVtbl -> GetProgramOutFollowFadeToBlack(This,follow) ) 

#define IBMDSwitcherAudioMixer_SetProgramOutFollowFadeToBlack(This,follow)	\
    ( (This)->lpVtbl -> SetProgramOutFollowFadeToBlack(This,follow) ) 

#define IBMDSwitcherAudioMixer_GetAudioFollowVideoCrossfadeTransition(This,transition)	\
    ( (This)->lpVtbl -> GetAudioFollowVideoCrossfadeTransition(This,transition) ) 

#define IBMDSwitcherAudioMixer_SetAudioFollowVideoCrossfadeTransition(This,transition)	\
    ( (This)->lpVtbl -> SetAudioFollowVideoCrossfadeTransition(This,transition) ) 

#define IBMDSwitcherAudioMixer_SetAllLevelNotificationsEnable(This,enable)	\
    ( (This)->lpVtbl -> SetAllLevelNotificationsEnable(This,enable) ) 

#define IBMDSwitcherAudioMixer_ResetProgramOutLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetProgramOutLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMixer_ResetAllLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetAllLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMixer_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioMixer_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherAudioMixer_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMixer_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTalkbackCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTalkbackCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTalkbackCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTalkbackCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F9A1C63-791C-4573-B28B-D9F2C00B8368")
    IBMDSwitcherTalkbackCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTalkbackEventType eventType,
            /* [in] */ BMDSwitcherAudioInputId audioInputId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTalkbackCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTalkbackCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTalkbackCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTalkbackCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTalkbackCallback * This,
            /* [in] */ BMDSwitcherTalkbackEventType eventType,
            /* [in] */ BMDSwitcherAudioInputId audioInputId);
        
        END_INTERFACE
    } IBMDSwitcherTalkbackCallbackVtbl;

    interface IBMDSwitcherTalkbackCallback
    {
        CONST_VTBL struct IBMDSwitcherTalkbackCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTalkbackCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTalkbackCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTalkbackCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTalkbackCallback_Notify(This,eventType,audioInputId)	\
    ( (This)->lpVtbl -> Notify(This,eventType,audioInputId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTalkbackCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTalkback_INTERFACE_DEFINED__
#define __IBMDSwitcherTalkback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTalkback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTalkback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92220740-F63B-43A8-8D51-5B85901B4847")
    IBMDSwitcherTalkback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMuteSDI( 
            /* [out] */ BOOL *muteSDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMuteSDI( 
            /* [in] */ BOOL muteSDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InputCanMuteSDI( 
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ BOOL *canMuteSDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CurrentInputSupportsMuteSDI( 
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ BOOL *supportsMuteSDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputMuteSDI( 
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ BOOL *muteSDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputMuteSDI( 
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [in] */ BOOL muteSDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTalkbackCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTalkbackCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTalkbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTalkback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTalkback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTalkback * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMuteSDI )( 
            IBMDSwitcherTalkback * This,
            /* [out] */ BOOL *muteSDI);
        
        HRESULT ( STDMETHODCALLTYPE *SetMuteSDI )( 
            IBMDSwitcherTalkback * This,
            /* [in] */ BOOL muteSDI);
        
        HRESULT ( STDMETHODCALLTYPE *InputCanMuteSDI )( 
            IBMDSwitcherTalkback * This,
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ BOOL *canMuteSDI);
        
        HRESULT ( STDMETHODCALLTYPE *CurrentInputSupportsMuteSDI )( 
            IBMDSwitcherTalkback * This,
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ BOOL *supportsMuteSDI);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputMuteSDI )( 
            IBMDSwitcherTalkback * This,
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ BOOL *muteSDI);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputMuteSDI )( 
            IBMDSwitcherTalkback * This,
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [in] */ BOOL muteSDI);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTalkback * This,
            /* [in] */ IBMDSwitcherTalkbackCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTalkback * This,
            /* [in] */ IBMDSwitcherTalkbackCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTalkbackVtbl;

    interface IBMDSwitcherTalkback
    {
        CONST_VTBL struct IBMDSwitcherTalkbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTalkback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTalkback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTalkback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTalkback_GetMuteSDI(This,muteSDI)	\
    ( (This)->lpVtbl -> GetMuteSDI(This,muteSDI) ) 

#define IBMDSwitcherTalkback_SetMuteSDI(This,muteSDI)	\
    ( (This)->lpVtbl -> SetMuteSDI(This,muteSDI) ) 

#define IBMDSwitcherTalkback_InputCanMuteSDI(This,audioInputId,canMuteSDI)	\
    ( (This)->lpVtbl -> InputCanMuteSDI(This,audioInputId,canMuteSDI) ) 

#define IBMDSwitcherTalkback_CurrentInputSupportsMuteSDI(This,audioInputId,supportsMuteSDI)	\
    ( (This)->lpVtbl -> CurrentInputSupportsMuteSDI(This,audioInputId,supportsMuteSDI) ) 

#define IBMDSwitcherTalkback_GetInputMuteSDI(This,audioInputId,muteSDI)	\
    ( (This)->lpVtbl -> GetInputMuteSDI(This,audioInputId,muteSDI) ) 

#define IBMDSwitcherTalkback_SetInputMuteSDI(This,audioInputId,muteSDI)	\
    ( (This)->lpVtbl -> SetInputMuteSDI(This,audioInputId,muteSDI) ) 

#define IBMDSwitcherTalkback_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTalkback_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTalkback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioHeadphoneOutput_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioHeadphoneOutput_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioHeadphoneOutput */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioHeadphoneOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A2836B54-B3A0-4C6B-8BC8-16DC81213C60")
    IBMDSwitcherAudioHeadphoneOutput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *decibel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double decibel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputProgramOutGain( 
            /* [out] */ double *decibel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputProgramOutGain( 
            /* [in] */ double decibel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputTalkbackGain( 
            /* [out] */ double *decibel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputTalkbackGain( 
            /* [in] */ double decibel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputSidetoneGain( 
            /* [out] */ double *decibel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputSidetoneGain( 
            /* [in] */ double decibel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioHeadphoneOutputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioHeadphoneOutputCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioHeadphoneOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioHeadphoneOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioHeadphoneOutput * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [out] */ double *decibel);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [in] */ double decibel);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputProgramOutGain )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [out] */ double *decibel);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputProgramOutGain )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [in] */ double decibel);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputTalkbackGain )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [out] */ double *decibel);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputTalkbackGain )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [in] */ double decibel);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputSidetoneGain )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [out] */ double *decibel);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputSidetoneGain )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [in] */ double decibel);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [in] */ IBMDSwitcherAudioHeadphoneOutputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioHeadphoneOutput * This,
            /* [in] */ IBMDSwitcherAudioHeadphoneOutputCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherAudioHeadphoneOutputVtbl;

    interface IBMDSwitcherAudioHeadphoneOutput
    {
        CONST_VTBL struct IBMDSwitcherAudioHeadphoneOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioHeadphoneOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioHeadphoneOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioHeadphoneOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioHeadphoneOutput_GetGain(This,decibel)	\
    ( (This)->lpVtbl -> GetGain(This,decibel) ) 

#define IBMDSwitcherAudioHeadphoneOutput_SetGain(This,decibel)	\
    ( (This)->lpVtbl -> SetGain(This,decibel) ) 

#define IBMDSwitcherAudioHeadphoneOutput_GetInputProgramOutGain(This,decibel)	\
    ( (This)->lpVtbl -> GetInputProgramOutGain(This,decibel) ) 

#define IBMDSwitcherAudioHeadphoneOutput_SetInputProgramOutGain(This,decibel)	\
    ( (This)->lpVtbl -> SetInputProgramOutGain(This,decibel) ) 

#define IBMDSwitcherAudioHeadphoneOutput_GetInputTalkbackGain(This,decibel)	\
    ( (This)->lpVtbl -> GetInputTalkbackGain(This,decibel) ) 

#define IBMDSwitcherAudioHeadphoneOutput_SetInputTalkbackGain(This,decibel)	\
    ( (This)->lpVtbl -> SetInputTalkbackGain(This,decibel) ) 

#define IBMDSwitcherAudioHeadphoneOutput_GetInputSidetoneGain(This,decibel)	\
    ( (This)->lpVtbl -> GetInputSidetoneGain(This,decibel) ) 

#define IBMDSwitcherAudioHeadphoneOutput_SetInputSidetoneGain(This,decibel)	\
    ( (This)->lpVtbl -> SetInputSidetoneGain(This,decibel) ) 

#define IBMDSwitcherAudioHeadphoneOutput_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioHeadphoneOutput_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioHeadphoneOutput_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioHeadphoneOutputCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioHeadphoneOutputCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioHeadphoneOutputCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioHeadphoneOutputCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C97CD29E-1871-42EE-9A51-DF34B6A5ACDB")
    IBMDSwitcherAudioHeadphoneOutputCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherAudioHeadphoneOutputEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioHeadphoneOutputCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioHeadphoneOutputCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioHeadphoneOutputCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioHeadphoneOutputCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherAudioHeadphoneOutputCallback * This,
            /* [in] */ BMDSwitcherAudioHeadphoneOutputEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherAudioHeadphoneOutputCallbackVtbl;

    interface IBMDSwitcherAudioHeadphoneOutputCallback
    {
        CONST_VTBL struct IBMDSwitcherAudioHeadphoneOutputCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioHeadphoneOutputCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioHeadphoneOutputCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioHeadphoneOutputCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioHeadphoneOutputCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioHeadphoneOutputCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyLumaParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyLumaParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyLumaParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyLumaParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AB31E347-5177-4595-8E52-650BF9B08B7F")
    IBMDSwitcherKeyLumaParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyLumaParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyLumaParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyLumaParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyLumaParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyLumaParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyLumaParametersCallback * This,
            /* [in] */ BMDSwitcherKeyLumaParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyLumaParametersCallbackVtbl;

    interface IBMDSwitcherKeyLumaParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyLumaParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyLumaParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyLumaParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyLumaParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyLumaParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyLumaParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyLumaParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyLumaParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyLumaParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyLumaParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE88B575-6044-4372-B1D6-9733AF342DCA")
    IBMDSwitcherKeyLumaParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyLumaParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyLumaParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyLumaParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyLumaParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyLumaParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ IBMDSwitcherKeyLumaParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyLumaParameters * This,
            /* [in] */ IBMDSwitcherKeyLumaParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyLumaParametersVtbl;

    interface IBMDSwitcherKeyLumaParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyLumaParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyLumaParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyLumaParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyLumaParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyLumaParameters_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherKeyLumaParameters_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherKeyLumaParameters_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherKeyLumaParameters_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherKeyLumaParameters_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherKeyLumaParameters_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherKeyLumaParameters_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherKeyLumaParameters_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherKeyLumaParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyLumaParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyLumaParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyChromaParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyChromaParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyChromaParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyChromaParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE3F97EC-5F2D-4E47-AA7A-38962F9CB3CE")
    IBMDSwitcherKeyChromaParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyChromaParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyChromaParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyChromaParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyChromaParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyChromaParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyChromaParametersCallback * This,
            /* [in] */ BMDSwitcherKeyChromaParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyChromaParametersCallbackVtbl;

    interface IBMDSwitcherKeyChromaParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyChromaParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyChromaParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyChromaParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyChromaParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyChromaParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyChromaParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyChromaParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyChromaParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyChromaParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyChromaParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07658026-6AE3-4694-B814-2AB7EBBE7D1C")
    IBMDSwitcherKeyChromaParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetYSuppress( 
            /* [out] */ double *ySuppress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetYSuppress( 
            /* [in] */ double ySuppress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLift( 
            /* [out] */ double *lift) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLift( 
            /* [in] */ double lift) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNarrow( 
            /* [out] */ BOOL *narrow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNarrow( 
            /* [in] */ BOOL narrow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyChromaParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyChromaParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyChromaParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyChromaParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyChromaParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetHue )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetHue )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetYSuppress )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ double *ySuppress);
        
        HRESULT ( STDMETHODCALLTYPE *SetYSuppress )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ double ySuppress);
        
        HRESULT ( STDMETHODCALLTYPE *GetLift )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ double *lift);
        
        HRESULT ( STDMETHODCALLTYPE *SetLift )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ double lift);
        
        HRESULT ( STDMETHODCALLTYPE *GetNarrow )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [out] */ BOOL *narrow);
        
        HRESULT ( STDMETHODCALLTYPE *SetNarrow )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ BOOL narrow);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ IBMDSwitcherKeyChromaParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyChromaParameters * This,
            /* [in] */ IBMDSwitcherKeyChromaParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyChromaParametersVtbl;

    interface IBMDSwitcherKeyChromaParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyChromaParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyChromaParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyChromaParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyChromaParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyChromaParameters_GetHue(This,hue)	\
    ( (This)->lpVtbl -> GetHue(This,hue) ) 

#define IBMDSwitcherKeyChromaParameters_SetHue(This,hue)	\
    ( (This)->lpVtbl -> SetHue(This,hue) ) 

#define IBMDSwitcherKeyChromaParameters_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherKeyChromaParameters_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherKeyChromaParameters_GetYSuppress(This,ySuppress)	\
    ( (This)->lpVtbl -> GetYSuppress(This,ySuppress) ) 

#define IBMDSwitcherKeyChromaParameters_SetYSuppress(This,ySuppress)	\
    ( (This)->lpVtbl -> SetYSuppress(This,ySuppress) ) 

#define IBMDSwitcherKeyChromaParameters_GetLift(This,lift)	\
    ( (This)->lpVtbl -> GetLift(This,lift) ) 

#define IBMDSwitcherKeyChromaParameters_SetLift(This,lift)	\
    ( (This)->lpVtbl -> SetLift(This,lift) ) 

#define IBMDSwitcherKeyChromaParameters_GetNarrow(This,narrow)	\
    ( (This)->lpVtbl -> GetNarrow(This,narrow) ) 

#define IBMDSwitcherKeyChromaParameters_SetNarrow(This,narrow)	\
    ( (This)->lpVtbl -> SetNarrow(This,narrow) ) 

#define IBMDSwitcherKeyChromaParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyChromaParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyChromaParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyPatternParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyPatternParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyPatternParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyPatternParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FBF24499-06EB-4C54-BE92-21C403C1093C")
    IBMDSwitcherKeyPatternParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyPatternParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyPatternParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyPatternParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyPatternParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyPatternParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyPatternParametersCallback * This,
            /* [in] */ BMDSwitcherKeyPatternParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyPatternParametersCallbackVtbl;

    interface IBMDSwitcherKeyPatternParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyPatternParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyPatternParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyPatternParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyPatternParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyPatternParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyPatternParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyPatternParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyPatternParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyPatternParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyPatternParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("267EDB96-5921-4BA5-88BA-C83123E153D2")
    IBMDSwitcherKeyPatternParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPattern( 
            /* [out] */ BMDSwitcherPatternStyle *pattern) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPattern( 
            /* [in] */ BMDSwitcherPatternStyle pattern) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ double *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSize( 
            /* [in] */ double size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSymmetry( 
            /* [out] */ double *symmetry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSymmetry( 
            /* [in] */ double symmetry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSoftness( 
            /* [out] */ double *softness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSoftness( 
            /* [in] */ double softness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset( 
            /* [out] */ double *hOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalOffset( 
            /* [in] */ double hOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset( 
            /* [out] */ double *vOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVerticalOffset( 
            /* [in] */ double vOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyPatternParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyPatternParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyPatternParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyPatternParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyPatternParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPattern )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ BMDSwitcherPatternStyle *pattern);
        
        HRESULT ( STDMETHODCALLTYPE *SetPattern )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ BMDSwitcherPatternStyle pattern);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *size);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double size);
        
        HRESULT ( STDMETHODCALLTYPE *GetSymmetry )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *symmetry);
        
        HRESULT ( STDMETHODCALLTYPE *SetSymmetry )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double symmetry);
        
        HRESULT ( STDMETHODCALLTYPE *GetSoftness )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *softness);
        
        HRESULT ( STDMETHODCALLTYPE *SetSoftness )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double softness);
        
        HRESULT ( STDMETHODCALLTYPE *GetHorizontalOffset )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *hOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetHorizontalOffset )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double hOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetVerticalOffset )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ double *vOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetVerticalOffset )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ double vOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ IBMDSwitcherKeyPatternParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyPatternParameters * This,
            /* [in] */ IBMDSwitcherKeyPatternParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyPatternParametersVtbl;

    interface IBMDSwitcherKeyPatternParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyPatternParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyPatternParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyPatternParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyPatternParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyPatternParameters_GetPattern(This,pattern)	\
    ( (This)->lpVtbl -> GetPattern(This,pattern) ) 

#define IBMDSwitcherKeyPatternParameters_SetPattern(This,pattern)	\
    ( (This)->lpVtbl -> SetPattern(This,pattern) ) 

#define IBMDSwitcherKeyPatternParameters_GetSize(This,size)	\
    ( (This)->lpVtbl -> GetSize(This,size) ) 

#define IBMDSwitcherKeyPatternParameters_SetSize(This,size)	\
    ( (This)->lpVtbl -> SetSize(This,size) ) 

#define IBMDSwitcherKeyPatternParameters_GetSymmetry(This,symmetry)	\
    ( (This)->lpVtbl -> GetSymmetry(This,symmetry) ) 

#define IBMDSwitcherKeyPatternParameters_SetSymmetry(This,symmetry)	\
    ( (This)->lpVtbl -> SetSymmetry(This,symmetry) ) 

#define IBMDSwitcherKeyPatternParameters_GetSoftness(This,softness)	\
    ( (This)->lpVtbl -> GetSoftness(This,softness) ) 

#define IBMDSwitcherKeyPatternParameters_SetSoftness(This,softness)	\
    ( (This)->lpVtbl -> SetSoftness(This,softness) ) 

#define IBMDSwitcherKeyPatternParameters_GetHorizontalOffset(This,hOffset)	\
    ( (This)->lpVtbl -> GetHorizontalOffset(This,hOffset) ) 

#define IBMDSwitcherKeyPatternParameters_SetHorizontalOffset(This,hOffset)	\
    ( (This)->lpVtbl -> SetHorizontalOffset(This,hOffset) ) 

#define IBMDSwitcherKeyPatternParameters_GetVerticalOffset(This,vOffset)	\
    ( (This)->lpVtbl -> GetVerticalOffset(This,vOffset) ) 

#define IBMDSwitcherKeyPatternParameters_SetVerticalOffset(This,vOffset)	\
    ( (This)->lpVtbl -> SetVerticalOffset(This,vOffset) ) 

#define IBMDSwitcherKeyPatternParameters_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherKeyPatternParameters_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherKeyPatternParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyPatternParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyPatternParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyKeyFrameParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyKeyFrameParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyKeyFrameParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyKeyFrameParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("136BDD85-690B-4691-BA1D-AB8A61F97AE0")
    IBMDSwitcherKeyFlyKeyFrameParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyFlyKeyFrameParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyKeyFrameParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyKeyFrameParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyKeyFrameParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyKeyFrameParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyFlyKeyFrameParametersCallback * This,
            /* [in] */ BMDSwitcherKeyFlyKeyFrameParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyKeyFrameParametersCallbackVtbl;

    interface IBMDSwitcherKeyFlyKeyFrameParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyKeyFrameParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyKeyFrameParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyKeyFrameParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyKeyFrameParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyKeyFrameParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyKeyFrameParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyKeyFrameParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyKeyFrameParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyKeyFrameParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyKeyFrameParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57F0D002-53BB-4787-83F9-1851A257B116")
    IBMDSwitcherKeyFlyKeyFrameParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSizeX( 
            /* [out] */ double *multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeX( 
            /* [in] */ double multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeY( 
            /* [out] */ double *multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeY( 
            /* [in] */ double multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanScaleUp( 
            /* [out] */ BOOL *canScaleUp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRotation( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRotation( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanRotate( 
            /* [out] */ BOOL *canRotate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthOut( 
            /* [out] */ double *widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthOut( 
            /* [in] */ double widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthIn( 
            /* [out] */ double *widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthIn( 
            /* [in] */ double widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessOut( 
            /* [out] */ double *softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessOut( 
            /* [in] */ double softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessIn( 
            /* [out] */ double *softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessIn( 
            /* [in] */ double softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelSoftness( 
            /* [out] */ double *bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelSoftness( 
            /* [in] */ double bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelPosition( 
            /* [out] */ double *bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelPosition( 
            /* [in] */ double bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderOpacity( 
            /* [out] */ double *opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderOpacity( 
            /* [in] */ double opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceDirection( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceDirection( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceAltitude( 
            /* [out] */ double *altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceAltitude( 
            /* [in] */ double altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyKeyFrameParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanScaleUp )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ BOOL *canScaleUp);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *GetRotation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetRotation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanRotate )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ BOOL *canRotate);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *softOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double softOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *softIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double softIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelSoftness )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelSoftness )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelPosition )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelPosition )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderOpacity )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *opacity);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderOpacity )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double opacity);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderHue )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderHue )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSaturation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSaturation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLuma )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLuma )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceDirection )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceDirection )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceAltitude )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *altitude);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceAltitude )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double altitude);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyFlyKeyFrameParameters * This,
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyKeyFrameParametersVtbl;

    interface IBMDSwitcherKeyFlyKeyFrameParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyKeyFrameParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyKeyFrameParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyKeyFrameParameters_GetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> GetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> SetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> GetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> SetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetCanScaleUp(This,canScaleUp)	\
    ( (This)->lpVtbl -> GetCanScaleUp(This,canScaleUp) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> GetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> SetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> GetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> SetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetRotation(This,degrees)	\
    ( (This)->lpVtbl -> GetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetRotation(This,degrees)	\
    ( (This)->lpVtbl -> SetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetCanRotate(This,canRotate)	\
    ( (This)->lpVtbl -> GetCanRotate(This,canRotate) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> GetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> SetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> GetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> SetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> GetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> SetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> GetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> SetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> GetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> SetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> GetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> SetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> GetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> SetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> GetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> SetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> GetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> SetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> GetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> SetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> GetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> SetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyKeyFrameParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9D6543D-0447-4048-B5AD-806622B9BF1A")
    IBMDSwitcherKeyFlyParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyFlyParametersEventType eventType,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyFlyParametersCallback * This,
            /* [in] */ BMDSwitcherKeyFlyParametersEventType eventType,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyParametersCallbackVtbl;

    interface IBMDSwitcherKeyFlyParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyParametersCallback_Notify(This,eventType,keyFrame)	\
    ( (This)->lpVtbl -> Notify(This,eventType,keyFrame) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36CD0B7F-E52E-4D94-ADF5-EEDCA6BCDF82")
    IBMDSwitcherKeyFlyParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFly( 
            /* [out] */ BOOL *isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFly( 
            /* [in] */ BOOL isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanFly( 
            /* [out] */ BOOL *canFly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeX( 
            /* [out] */ double *multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeX( 
            /* [in] */ double multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeY( 
            /* [out] */ double *multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeY( 
            /* [in] */ double multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanScaleUp( 
            /* [out] */ BOOL *canScaleUp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRotation( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRotation( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanRotate( 
            /* [out] */ BOOL *canRotate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetRotation( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVE( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVEFull( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsKeyFrameStored( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StoreAsKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RunToKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAtKeyFrames( 
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKeyFrameParameters( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ IBMDSwitcherKeyFlyKeyFrameParameters **keyFrameParameters) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRunning( 
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFly )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BOOL *isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetFly )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BOOL isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanFly )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BOOL *canFly);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeX )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeX )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeY )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeY )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanScaleUp )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BOOL *canScaleUp);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *GetRotation )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetRotation )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanRotate )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BOOL *canRotate);
        
        HRESULT ( STDMETHODCALLTYPE *ResetRotation )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVE )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVEFull )( 
            IBMDSwitcherKeyFlyParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsKeyFrameStored )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored);
        
        HRESULT ( STDMETHODCALLTYPE *StoreAsKeyFrame )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        HRESULT ( STDMETHODCALLTYPE *ClearKeyFrame )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        HRESULT ( STDMETHODCALLTYPE *RunToKeyFrame )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BMDSwitcherFlyKeyFrame destination);
        
        HRESULT ( STDMETHODCALLTYPE *IsAtKeyFrames )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames);
        
        HRESULT ( STDMETHODCALLTYPE *GetKeyFrameParameters )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ IBMDSwitcherKeyFlyKeyFrameParameters **keyFrameParameters);
        
        HRESULT ( STDMETHODCALLTYPE *IsRunning )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyFlyParameters * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyParametersVtbl;

    interface IBMDSwitcherKeyFlyParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyParameters_GetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> GetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_SetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> SetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_GetCanFly(This,canFly)	\
    ( (This)->lpVtbl -> GetCanFly(This,canFly) ) 

#define IBMDSwitcherKeyFlyParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_GetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> GetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_SetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> SetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_GetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> GetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_SetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> SetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_GetCanScaleUp(This,canScaleUp)	\
    ( (This)->lpVtbl -> GetCanScaleUp(This,canScaleUp) ) 

#define IBMDSwitcherKeyFlyParameters_GetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> GetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_SetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> SetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_GetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> GetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_SetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> SetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_GetRotation(This,degrees)	\
    ( (This)->lpVtbl -> GetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_SetRotation(This,degrees)	\
    ( (This)->lpVtbl -> SetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_GetCanRotate(This,canRotate)	\
    ( (This)->lpVtbl -> GetCanRotate(This,canRotate) ) 

#define IBMDSwitcherKeyFlyParameters_ResetRotation(This)	\
    ( (This)->lpVtbl -> ResetRotation(This) ) 

#define IBMDSwitcherKeyFlyParameters_ResetDVE(This)	\
    ( (This)->lpVtbl -> ResetDVE(This) ) 

#define IBMDSwitcherKeyFlyParameters_ResetDVEFull(This)	\
    ( (This)->lpVtbl -> ResetDVEFull(This) ) 

#define IBMDSwitcherKeyFlyParameters_IsKeyFrameStored(This,keyFrame,stored)	\
    ( (This)->lpVtbl -> IsKeyFrameStored(This,keyFrame,stored) ) 

#define IBMDSwitcherKeyFlyParameters_StoreAsKeyFrame(This,keyFrame)	\
    ( (This)->lpVtbl -> StoreAsKeyFrame(This,keyFrame) ) 

#define IBMDSwitcherKeyFlyParameters_ClearKeyFrame(This,keyFrame)	\
    ( (This)->lpVtbl -> ClearKeyFrame(This,keyFrame) ) 

#define IBMDSwitcherKeyFlyParameters_RunToKeyFrame(This,destination)	\
    ( (This)->lpVtbl -> RunToKeyFrame(This,destination) ) 

#define IBMDSwitcherKeyFlyParameters_IsAtKeyFrames(This,keyFrames)	\
    ( (This)->lpVtbl -> IsAtKeyFrames(This,keyFrames) ) 

#define IBMDSwitcherKeyFlyParameters_GetKeyFrameParameters(This,keyFrame,keyFrameParameters)	\
    ( (This)->lpVtbl -> GetKeyFrameParameters(This,keyFrame,keyFrameParameters) ) 

#define IBMDSwitcherKeyFlyParameters_IsRunning(This,isRunning,destination)	\
    ( (This)->lpVtbl -> IsRunning(This,isRunning,destination) ) 

#define IBMDSwitcherKeyFlyParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyFlyParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyDVEParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyDVEParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyDVEParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyDVEParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E437655F-32BB-4652-BA77-4083B435566A")
    IBMDSwitcherKeyDVEParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyDVEParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyDVEParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyDVEParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyDVEParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyDVEParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyDVEParametersCallback * This,
            /* [in] */ BMDSwitcherKeyDVEParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyDVEParametersCallbackVtbl;

    interface IBMDSwitcherKeyDVEParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyDVEParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyDVEParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyDVEParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyDVEParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyDVEParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyDVEParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyDVEParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyDVEParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyDVEParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyDVEParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92AA5433-70FB-423D-9435-646D171C9D82")
    IBMDSwitcherKeyDVEParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetShadow( 
            /* [out] */ BOOL *shadowOn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShadow( 
            /* [in] */ BOOL shadowOn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLightSourceDirection( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLightSourceDirection( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLightSourceAltitude( 
            /* [out] */ double *altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLightSourceAltitude( 
            /* [in] */ double altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderEnabled( 
            /* [out] */ BOOL *on) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderEnabled( 
            /* [in] */ BOOL on) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevel( 
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevel( 
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthIn( 
            /* [out] */ double *widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthIn( 
            /* [in] */ double widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthOut( 
            /* [out] */ double *widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthOut( 
            /* [in] */ double widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessIn( 
            /* [out] */ double *softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessIn( 
            /* [in] */ double softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessOut( 
            /* [out] */ double *softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessOut( 
            /* [in] */ double softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelSoftness( 
            /* [out] */ double *bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelSoftness( 
            /* [in] */ double bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelPosition( 
            /* [out] */ double *bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelPosition( 
            /* [in] */ double bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderOpacity( 
            /* [out] */ double *opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderOpacity( 
            /* [in] */ double opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMasked( 
            /* [out] */ BOOL *maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMasked( 
            /* [in] */ BOOL maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMask( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyDVEParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyDVEParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyDVEParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyDVEParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyDVEParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetShadow )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ BOOL *shadowOn);
        
        HRESULT ( STDMETHODCALLTYPE *SetShadow )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ BOOL shadowOn);
        
        HRESULT ( STDMETHODCALLTYPE *GetLightSourceDirection )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetLightSourceDirection )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetLightSourceAltitude )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *altitude);
        
        HRESULT ( STDMETHODCALLTYPE *SetLightSourceAltitude )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double altitude);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderEnabled )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ BOOL *on);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderEnabled )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ BOOL on);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevel )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevel )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthIn )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthIn )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthOut )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthOut )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessIn )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *softIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessIn )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double softIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessOut )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *softOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessOut )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double softOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelSoftness )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelSoftness )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelPosition )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelPosition )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderOpacity )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *opacity);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderOpacity )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double opacity);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderHue )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderHue )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSaturation )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSaturation )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLuma )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLuma )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *GetMasked )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ BOOL *maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetMasked )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ BOOL maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMask )( 
            IBMDSwitcherKeyDVEParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ IBMDSwitcherKeyDVEParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyDVEParameters * This,
            /* [in] */ IBMDSwitcherKeyDVEParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyDVEParametersVtbl;

    interface IBMDSwitcherKeyDVEParameters
    {
        CONST_VTBL struct IBMDSwitcherKeyDVEParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyDVEParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyDVEParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyDVEParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyDVEParameters_GetShadow(This,shadowOn)	\
    ( (This)->lpVtbl -> GetShadow(This,shadowOn) ) 

#define IBMDSwitcherKeyDVEParameters_SetShadow(This,shadowOn)	\
    ( (This)->lpVtbl -> SetShadow(This,shadowOn) ) 

#define IBMDSwitcherKeyDVEParameters_GetLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> GetLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyDVEParameters_SetLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> SetLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyDVEParameters_GetLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> GetLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyDVEParameters_SetLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> SetLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderEnabled(This,on)	\
    ( (This)->lpVtbl -> GetBorderEnabled(This,on) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderEnabled(This,on)	\
    ( (This)->lpVtbl -> SetBorderEnabled(This,on) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> GetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> SetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> GetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> SetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> GetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> SetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> GetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> SetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> GetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> SetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> GetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> SetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> GetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> SetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> GetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> SetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> GetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> SetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyDVEParameters_GetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> GetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyDVEParameters_SetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> SetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyDVEParameters_GetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> GetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKeyDVEParameters_SetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> SetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKeyDVEParameters_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherKeyDVEParameters_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherKeyDVEParameters_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyDVEParameters_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyDVEParameters_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyDVEParameters_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyDVEParameters_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherKeyDVEParameters_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherKeyDVEParameters_ResetMask(This)	\
    ( (This)->lpVtbl -> ResetMask(This) ) 

#define IBMDSwitcherKeyDVEParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyDVEParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyDVEParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1972E4DF-1D5F-4C4E-A79B-E5A6E8CE1511")
    IBMDSwitcherKeyCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherKeyEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherKeyCallback * This,
            /* [in] */ BMDSwitcherKeyEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherKeyCallbackVtbl;

    interface IBMDSwitcherKeyCallback
    {
        CONST_VTBL struct IBMDSwitcherKeyCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKey_INTERFACE_DEFINED__
#define __IBMDSwitcherKey_INTERFACE_DEFINED__

/* interface IBMDSwitcherKey */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A41B54B5-0D52-44D5-ACE5-9B94B0AF2A0B")
    IBMDSwitcherKey : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ BMDSwitcherKeyType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetType( 
            /* [in] */ BMDSwitcherKeyType type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCutInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFillInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOnAir( 
            /* [out] */ BOOL *onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOnAir( 
            /* [in] */ BOOL onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanBeDVEKey( 
            /* [out] */ BOOL *canDVE) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMasked( 
            /* [out] */ BOOL *maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMasked( 
            /* [in] */ BOOL maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMask( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTransitionSelectionMask( 
            /* [out] */ BMDSwitcherTransitionSelection *selectionMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherKeyType *type);
        
        HRESULT ( STDMETHODCALLTYPE *SetType )( 
            IBMDSwitcherKey * This,
            /* [in] */ BMDSwitcherKeyType type);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherKey * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherKey * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetCutInputAvailabilityMask )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *GetFillInputAvailabilityMask )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *GetOnAir )( 
            IBMDSwitcherKey * This,
            /* [out] */ BOOL *onAir);
        
        HRESULT ( STDMETHODCALLTYPE *SetOnAir )( 
            IBMDSwitcherKey * This,
            /* [in] */ BOOL onAir);
        
        HRESULT ( STDMETHODCALLTYPE *CanBeDVEKey )( 
            IBMDSwitcherKey * This,
            /* [out] */ BOOL *canDVE);
        
        HRESULT ( STDMETHODCALLTYPE *GetMasked )( 
            IBMDSwitcherKey * This,
            /* [out] */ BOOL *maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetMasked )( 
            IBMDSwitcherKey * This,
            /* [in] */ BOOL maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherKey * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherKey * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherKey * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherKey * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherKey * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherKey * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherKey * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherKey * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMask )( 
            IBMDSwitcherKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransitionSelectionMask )( 
            IBMDSwitcherKey * This,
            /* [out] */ BMDSwitcherTransitionSelection *selectionMask);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKey * This,
            /* [in] */ IBMDSwitcherKeyCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKey * This,
            /* [in] */ IBMDSwitcherKeyCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyVtbl;

    interface IBMDSwitcherKey
    {
        CONST_VTBL struct IBMDSwitcherKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKey_GetType(This,type)	\
    ( (This)->lpVtbl -> GetType(This,type) ) 

#define IBMDSwitcherKey_SetType(This,type)	\
    ( (This)->lpVtbl -> SetType(This,type) ) 

#define IBMDSwitcherKey_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherKey_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherKey_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherKey_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherKey_GetCutInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetCutInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherKey_GetFillInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetFillInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherKey_GetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> GetOnAir(This,onAir) ) 

#define IBMDSwitcherKey_SetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> SetOnAir(This,onAir) ) 

#define IBMDSwitcherKey_CanBeDVEKey(This,canDVE)	\
    ( (This)->lpVtbl -> CanBeDVEKey(This,canDVE) ) 

#define IBMDSwitcherKey_GetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> GetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKey_SetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> SetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKey_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherKey_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherKey_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKey_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKey_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherKey_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherKey_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherKey_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherKey_ResetMask(This)	\
    ( (This)->lpVtbl -> ResetMask(This) ) 

#define IBMDSwitcherKey_GetTransitionSelectionMask(This,selectionMask)	\
    ( (This)->lpVtbl -> GetTransitionSelectionMask(This,selectionMask) ) 

#define IBMDSwitcherKey_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKey_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKey_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayerCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPlayerCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPlayerCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPlayerCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A82C121-18FA-469E-AE9A-73255356CA5B")
    IBMDSwitcherMediaPlayerCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SourceChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PlayingChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LoopChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AtBeginningChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClipFrameChanged( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPlayerCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPlayerCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *SourceChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *PlayingChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *LoopChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *AtBeginningChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClipFrameChanged )( 
            IBMDSwitcherMediaPlayerCallback * This);
        
        END_INTERFACE
    } IBMDSwitcherMediaPlayerCallbackVtbl;

    interface IBMDSwitcherMediaPlayerCallback
    {
        CONST_VTBL struct IBMDSwitcherMediaPlayerCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPlayerCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPlayerCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPlayerCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPlayerCallback_SourceChanged(This)	\
    ( (This)->lpVtbl -> SourceChanged(This) ) 

#define IBMDSwitcherMediaPlayerCallback_PlayingChanged(This)	\
    ( (This)->lpVtbl -> PlayingChanged(This) ) 

#define IBMDSwitcherMediaPlayerCallback_LoopChanged(This)	\
    ( (This)->lpVtbl -> LoopChanged(This) ) 

#define IBMDSwitcherMediaPlayerCallback_AtBeginningChanged(This)	\
    ( (This)->lpVtbl -> AtBeginningChanged(This) ) 

#define IBMDSwitcherMediaPlayerCallback_ClipFrameChanged(This)	\
    ( (This)->lpVtbl -> ClipFrameChanged(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPlayerCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayer_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPlayer_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPlayer */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPlayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B5240E1F-CE0A-4C38-9FAB-D7FAC227205A")
    IBMDSwitcherMediaPlayer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSource( 
            /* [out] */ BMDSwitcherMediaPlayerSourceType *type,
            /* [out] */ unsigned int *index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSource( 
            /* [in] */ BMDSwitcherMediaPlayerSourceType type,
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPlaying( 
            /* [out] */ BOOL *playing) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPlaying( 
            /* [in] */ BOOL playing) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLoop( 
            /* [out] */ BOOL *loop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLoop( 
            /* [in] */ BOOL loop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAtBeginning( 
            /* [out] */ BOOL *atBegining) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAtBeginning( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipFrame( 
            /* [out] */ unsigned int *clipFrameIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClipFrame( 
            /* [in] */ unsigned int clipFrameIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMediaPlayerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMediaPlayerCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPlayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPlayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPlayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSource )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ BMDSwitcherMediaPlayerSourceType *type,
            /* [out] */ unsigned int *index);
        
        HRESULT ( STDMETHODCALLTYPE *SetSource )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ BMDSwitcherMediaPlayerSourceType type,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *GetPlaying )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ BOOL *playing);
        
        HRESULT ( STDMETHODCALLTYPE *SetPlaying )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ BOOL playing);
        
        HRESULT ( STDMETHODCALLTYPE *GetLoop )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ BOOL *loop);
        
        HRESULT ( STDMETHODCALLTYPE *SetLoop )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ BOOL loop);
        
        HRESULT ( STDMETHODCALLTYPE *GetAtBeginning )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ BOOL *atBegining);
        
        HRESULT ( STDMETHODCALLTYPE *SetAtBeginning )( 
            IBMDSwitcherMediaPlayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipFrame )( 
            IBMDSwitcherMediaPlayer * This,
            /* [out] */ unsigned int *clipFrameIndex);
        
        HRESULT ( STDMETHODCALLTYPE *SetClipFrame )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ unsigned int clipFrameIndex);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ IBMDSwitcherMediaPlayerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMediaPlayer * This,
            /* [in] */ IBMDSwitcherMediaPlayerCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMediaPlayerVtbl;

    interface IBMDSwitcherMediaPlayer
    {
        CONST_VTBL struct IBMDSwitcherMediaPlayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPlayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPlayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPlayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPlayer_GetSource(This,type,index)	\
    ( (This)->lpVtbl -> GetSource(This,type,index) ) 

#define IBMDSwitcherMediaPlayer_SetSource(This,type,index)	\
    ( (This)->lpVtbl -> SetSource(This,type,index) ) 

#define IBMDSwitcherMediaPlayer_GetPlaying(This,playing)	\
    ( (This)->lpVtbl -> GetPlaying(This,playing) ) 

#define IBMDSwitcherMediaPlayer_SetPlaying(This,playing)	\
    ( (This)->lpVtbl -> SetPlaying(This,playing) ) 

#define IBMDSwitcherMediaPlayer_GetLoop(This,loop)	\
    ( (This)->lpVtbl -> GetLoop(This,loop) ) 

#define IBMDSwitcherMediaPlayer_SetLoop(This,loop)	\
    ( (This)->lpVtbl -> SetLoop(This,loop) ) 

#define IBMDSwitcherMediaPlayer_GetAtBeginning(This,atBegining)	\
    ( (This)->lpVtbl -> GetAtBeginning(This,atBegining) ) 

#define IBMDSwitcherMediaPlayer_SetAtBeginning(This)	\
    ( (This)->lpVtbl -> SetAtBeginning(This) ) 

#define IBMDSwitcherMediaPlayer_GetClipFrame(This,clipFrameIndex)	\
    ( (This)->lpVtbl -> GetClipFrame(This,clipFrameIndex) ) 

#define IBMDSwitcherMediaPlayer_SetClipFrame(This,clipFrameIndex)	\
    ( (This)->lpVtbl -> SetClipFrame(This,clipFrameIndex) ) 

#define IBMDSwitcherMediaPlayer_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMediaPlayer_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPlayer_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionMixParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionMixParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionMixParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionMixParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE9730BB-F60B-46DF-B182-2992FFC884DE")
    IBMDSwitcherTransitionMixParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionMixParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionMixParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionMixParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionMixParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionMixParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionMixParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionMixParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionMixParametersCallbackVtbl;

    interface IBMDSwitcherTransitionMixParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionMixParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionMixParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionMixParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionMixParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionMixParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionMixParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionMixParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionMixParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionMixParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionMixParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C5D18C9-0955-4525-9947-527EA0679140")
    IBMDSwitcherTransitionMixParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionMixParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionMixParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionMixParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionMixParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionMixParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [in] */ IBMDSwitcherTransitionMixParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionMixParameters * This,
            /* [in] */ IBMDSwitcherTransitionMixParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionMixParametersVtbl;

    interface IBMDSwitcherTransitionMixParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionMixParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionMixParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionMixParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionMixParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionMixParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionMixParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionMixParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionMixParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionMixParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDipParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDipParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDipParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDipParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("410BE711-DB1A-48D1-93E7-382A0B1781B5")
    IBMDSwitcherTransitionDipParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionDipParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDipParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDipParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDipParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDipParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionDipParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionDipParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDipParametersCallbackVtbl;

    interface IBMDSwitcherTransitionDipParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionDipParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDipParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDipParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDipParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDipParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDipParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDipParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDipParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDipParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDipParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DACC2FF3-6B54-4459-AAA6-2B1EA2D6887A")
    IBMDSwitcherTransitionDipParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputDip( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputDip( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionDipParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionDipParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDipParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDipParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDipParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputDip )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputDip )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ IBMDSwitcherTransitionDipParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionDipParameters * This,
            /* [in] */ IBMDSwitcherTransitionDipParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDipParametersVtbl;

    interface IBMDSwitcherTransitionDipParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionDipParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDipParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDipParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDipParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDipParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionDipParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionDipParameters_GetInputDip(This,input)	\
    ( (This)->lpVtbl -> GetInputDip(This,input) ) 

#define IBMDSwitcherTransitionDipParameters_SetInputDip(This,input)	\
    ( (This)->lpVtbl -> SetInputDip(This,input) ) 

#define IBMDSwitcherTransitionDipParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionDipParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDipParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionWipeParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionWipeParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionWipeParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionWipeParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0FC4E095-DF7A-4128-933A-AAE4B7FD6119")
    IBMDSwitcherTransitionWipeParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionWipeParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionWipeParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionWipeParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionWipeParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionWipeParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionWipeParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionWipeParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionWipeParametersCallbackVtbl;

    interface IBMDSwitcherTransitionWipeParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionWipeParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionWipeParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionWipeParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionWipeParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionWipeParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionWipeParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionWipeParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionWipeParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionWipeParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionWipeParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FAC84D37-11A2-4152-8E5E-D9EB0DC48619")
    IBMDSwitcherTransitionWipeParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPattern( 
            /* [out] */ BMDSwitcherPatternStyle *pattern) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPattern( 
            /* [in] */ BMDSwitcherPatternStyle pattern) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSize( 
            /* [out] */ double *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSize( 
            /* [in] */ double size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputBorder( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputBorder( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSymmetry( 
            /* [out] */ double *symmetry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSymmetry( 
            /* [in] */ double symmetry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSoftness( 
            /* [out] */ double *soft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSoftness( 
            /* [in] */ double soft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset( 
            /* [out] */ double *hOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHorizontalOffset( 
            /* [in] */ double hOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset( 
            /* [out] */ double *vOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVerticalOffset( 
            /* [in] */ double vOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReverse( 
            /* [out] */ BOOL *reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReverse( 
            /* [in] */ BOOL reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlipFlop( 
            /* [out] */ BOOL *flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlipFlop( 
            /* [in] */ BOOL flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionWipeParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionWipeParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionWipeParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionWipeParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionWipeParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetPattern )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ BMDSwitcherPatternStyle *pattern);
        
        HRESULT ( STDMETHODCALLTYPE *SetPattern )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ BMDSwitcherPatternStyle pattern);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSize )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *size);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSize )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double size);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputBorder )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputBorder )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetSymmetry )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *symmetry);
        
        HRESULT ( STDMETHODCALLTYPE *SetSymmetry )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double symmetry);
        
        HRESULT ( STDMETHODCALLTYPE *GetSoftness )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *soft);
        
        HRESULT ( STDMETHODCALLTYPE *SetSoftness )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double soft);
        
        HRESULT ( STDMETHODCALLTYPE *GetHorizontalOffset )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *hOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetHorizontalOffset )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double hOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetVerticalOffset )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ double *vOffset);
        
        HRESULT ( STDMETHODCALLTYPE *SetVerticalOffset )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ double vOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetReverse )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ BOOL *reverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetReverse )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ BOOL reverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlipFlop )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [out] */ BOOL *flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlipFlop )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ BOOL flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ IBMDSwitcherTransitionWipeParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionWipeParameters * This,
            /* [in] */ IBMDSwitcherTransitionWipeParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionWipeParametersVtbl;

    interface IBMDSwitcherTransitionWipeParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionWipeParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionWipeParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionWipeParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionWipeParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionWipeParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionWipeParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionWipeParameters_GetPattern(This,pattern)	\
    ( (This)->lpVtbl -> GetPattern(This,pattern) ) 

#define IBMDSwitcherTransitionWipeParameters_SetPattern(This,pattern)	\
    ( (This)->lpVtbl -> SetPattern(This,pattern) ) 

#define IBMDSwitcherTransitionWipeParameters_GetBorderSize(This,size)	\
    ( (This)->lpVtbl -> GetBorderSize(This,size) ) 

#define IBMDSwitcherTransitionWipeParameters_SetBorderSize(This,size)	\
    ( (This)->lpVtbl -> SetBorderSize(This,size) ) 

#define IBMDSwitcherTransitionWipeParameters_GetInputBorder(This,input)	\
    ( (This)->lpVtbl -> GetInputBorder(This,input) ) 

#define IBMDSwitcherTransitionWipeParameters_SetInputBorder(This,input)	\
    ( (This)->lpVtbl -> SetInputBorder(This,input) ) 

#define IBMDSwitcherTransitionWipeParameters_GetSymmetry(This,symmetry)	\
    ( (This)->lpVtbl -> GetSymmetry(This,symmetry) ) 

#define IBMDSwitcherTransitionWipeParameters_SetSymmetry(This,symmetry)	\
    ( (This)->lpVtbl -> SetSymmetry(This,symmetry) ) 

#define IBMDSwitcherTransitionWipeParameters_GetSoftness(This,soft)	\
    ( (This)->lpVtbl -> GetSoftness(This,soft) ) 

#define IBMDSwitcherTransitionWipeParameters_SetSoftness(This,soft)	\
    ( (This)->lpVtbl -> SetSoftness(This,soft) ) 

#define IBMDSwitcherTransitionWipeParameters_GetHorizontalOffset(This,hOffset)	\
    ( (This)->lpVtbl -> GetHorizontalOffset(This,hOffset) ) 

#define IBMDSwitcherTransitionWipeParameters_SetHorizontalOffset(This,hOffset)	\
    ( (This)->lpVtbl -> SetHorizontalOffset(This,hOffset) ) 

#define IBMDSwitcherTransitionWipeParameters_GetVerticalOffset(This,vOffset)	\
    ( (This)->lpVtbl -> GetVerticalOffset(This,vOffset) ) 

#define IBMDSwitcherTransitionWipeParameters_SetVerticalOffset(This,vOffset)	\
    ( (This)->lpVtbl -> SetVerticalOffset(This,vOffset) ) 

#define IBMDSwitcherTransitionWipeParameters_GetReverse(This,reverse)	\
    ( (This)->lpVtbl -> GetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionWipeParameters_SetReverse(This,reverse)	\
    ( (This)->lpVtbl -> SetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionWipeParameters_GetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> GetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionWipeParameters_SetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> SetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionWipeParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionWipeParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionWipeParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDVEParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDVEParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDVEParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6535115F-B64C-4512-BF5A-12969253E2F9")
    IBMDSwitcherTransitionDVEParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionDVEParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDVEParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDVEParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDVEParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDVEParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionDVEParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionDVEParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDVEParametersCallbackVtbl;

    interface IBMDSwitcherTransitionDVEParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionDVEParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDVEParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDVEParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDVEParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDVEParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDVEParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDVEParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDVEParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDVEParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BAE4F4CE-3731-4D1F-846B-F2D81C06C3F4")
    IBMDSwitcherTransitionDVEParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLogoRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLogoRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReverse( 
            /* [out] */ BOOL *reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReverse( 
            /* [in] */ BOOL reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlipFlop( 
            /* [out] */ BOOL *flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlipFlop( 
            /* [in] */ BOOL flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStyle( 
            /* [out] */ BMDSwitcherDVETransitionStyle *style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStyle( 
            /* [in] */ BMDSwitcherDVETransitionStyle style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportStyle( 
            /* [in] */ BMDSwitcherDVETransitionStyle style,
            /* [out] */ BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumSupportedStyles( 
            /* [out] */ unsigned int *numSupportedStyles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSupportedStyles( 
            /* [out] */ BMDSwitcherDVETransitionStyle *supportedStyles,
            /* [in] */ unsigned int supportedStylesMaxCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFillInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCutInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnableKey( 
            /* [out] */ BOOL *enableKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnableKey( 
            /* [in] */ BOOL enableKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDVEParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDVEParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDVEParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetLogoRate )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetLogoRate )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetReverse )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *reverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetReverse )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL reverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlipFlop )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlipFlop )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *GetStyle )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BMDSwitcherDVETransitionStyle *style);
        
        HRESULT ( STDMETHODCALLTYPE *SetStyle )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BMDSwitcherDVETransitionStyle style);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportStyle )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BMDSwitcherDVETransitionStyle style,
            /* [out] */ BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumSupportedStyles )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ unsigned int *numSupportedStyles);
        
        HRESULT ( STDMETHODCALLTYPE *GetSupportedStyles )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BMDSwitcherDVETransitionStyle *supportedStyles,
            /* [in] */ unsigned int supportedStylesMaxCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetFillInputAvailabilityMask )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *GetCutInputAvailabilityMask )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnableKey )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *enableKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnableKey )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL enableKey);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionDVEParameters * This,
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDVEParametersVtbl;

    interface IBMDSwitcherTransitionDVEParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionDVEParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDVEParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDVEParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDVEParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDVEParameters_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_GetLogoRate(This,frames)	\
    ( (This)->lpVtbl -> GetLogoRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_SetLogoRate(This,frames)	\
    ( (This)->lpVtbl -> SetLogoRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_GetReverse(This,reverse)	\
    ( (This)->lpVtbl -> GetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionDVEParameters_SetReverse(This,reverse)	\
    ( (This)->lpVtbl -> SetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionDVEParameters_GetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> GetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionDVEParameters_SetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> SetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionDVEParameters_GetStyle(This,style)	\
    ( (This)->lpVtbl -> GetStyle(This,style) ) 

#define IBMDSwitcherTransitionDVEParameters_SetStyle(This,style)	\
    ( (This)->lpVtbl -> SetStyle(This,style) ) 

#define IBMDSwitcherTransitionDVEParameters_DoesSupportStyle(This,style,supported)	\
    ( (This)->lpVtbl -> DoesSupportStyle(This,style,supported) ) 

#define IBMDSwitcherTransitionDVEParameters_GetNumSupportedStyles(This,numSupportedStyles)	\
    ( (This)->lpVtbl -> GetNumSupportedStyles(This,numSupportedStyles) ) 

#define IBMDSwitcherTransitionDVEParameters_GetSupportedStyles(This,supportedStyles,supportedStylesMaxCount)	\
    ( (This)->lpVtbl -> GetSupportedStyles(This,supportedStyles,supportedStylesMaxCount) ) 

#define IBMDSwitcherTransitionDVEParameters_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_GetFillInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetFillInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherTransitionDVEParameters_GetCutInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetCutInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherTransitionDVEParameters_GetEnableKey(This,enableKey)	\
    ( (This)->lpVtbl -> GetEnableKey(This,enableKey) ) 

#define IBMDSwitcherTransitionDVEParameters_SetEnableKey(This,enableKey)	\
    ( (This)->lpVtbl -> SetEnableKey(This,enableKey) ) 

#define IBMDSwitcherTransitionDVEParameters_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionDVEParameters_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionDVEParameters_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherTransitionDVEParameters_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherTransitionDVEParameters_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherTransitionDVEParameters_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherTransitionDVEParameters_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionDVEParameters_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionDVEParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionDVEParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDVEParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionStingerParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionStingerParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionStingerParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionStingerParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A8B3FB6-DD56-4DFF-AEB3-2C8A26585389")
    IBMDSwitcherTransitionStingerParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionStingerParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionStingerParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionStingerParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionStingerParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionStingerParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionStingerParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionStingerParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionStingerParametersCallbackVtbl;

    interface IBMDSwitcherTransitionStingerParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionStingerParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionStingerParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionStingerParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionStingerParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionStingerParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionStingerParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionStingerParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionStingerParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionStingerParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionStingerParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F449A50-4083-49E8-BBF5-C3D95BFA1908")
    IBMDSwitcherTransitionStingerParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSource( 
            /* [out] */ BMDSwitcherStingerTransitionSource *src) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSource( 
            /* [in] */ BMDSwitcherStingerTransitionSource src) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreroll( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreroll( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipDuration( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClipDuration( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTriggerPoint( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTriggerPoint( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMixRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMixRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionStingerParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionStingerParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionStingerParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionStingerParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionStingerParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSource )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ BMDSwitcherStingerTransitionSource *src);
        
        HRESULT ( STDMETHODCALLTYPE *SetSource )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ BMDSwitcherStingerTransitionSource src);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreroll )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreroll )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipDuration )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetClipDuration )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetTriggerPoint )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetTriggerPoint )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetMixRate )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetMixRate )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ IBMDSwitcherTransitionStingerParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionStingerParameters * This,
            /* [in] */ IBMDSwitcherTransitionStingerParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionStingerParametersVtbl;

    interface IBMDSwitcherTransitionStingerParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionStingerParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionStingerParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionStingerParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionStingerParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionStingerParameters_GetSource(This,src)	\
    ( (This)->lpVtbl -> GetSource(This,src) ) 

#define IBMDSwitcherTransitionStingerParameters_SetSource(This,src)	\
    ( (This)->lpVtbl -> SetSource(This,src) ) 

#define IBMDSwitcherTransitionStingerParameters_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionStingerParameters_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionStingerParameters_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherTransitionStingerParameters_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherTransitionStingerParameters_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherTransitionStingerParameters_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherTransitionStingerParameters_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionStingerParameters_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionStingerParameters_GetPreroll(This,frames)	\
    ( (This)->lpVtbl -> GetPreroll(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_SetPreroll(This,frames)	\
    ( (This)->lpVtbl -> SetPreroll(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_GetClipDuration(This,frames)	\
    ( (This)->lpVtbl -> GetClipDuration(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_SetClipDuration(This,frames)	\
    ( (This)->lpVtbl -> SetClipDuration(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_GetTriggerPoint(This,frames)	\
    ( (This)->lpVtbl -> GetTriggerPoint(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_SetTriggerPoint(This,frames)	\
    ( (This)->lpVtbl -> SetTriggerPoint(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_GetMixRate(This,frames)	\
    ( (This)->lpVtbl -> GetMixRate(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_SetMixRate(This,frames)	\
    ( (This)->lpVtbl -> SetMixRate(This,frames) ) 

#define IBMDSwitcherTransitionStingerParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionStingerParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionStingerParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionParametersCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionParametersCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionParametersCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionParametersCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DED1876A-38E3-418E-8044-F3C126C626E7")
    IBMDSwitcherTransitionParametersCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTransitionParametersEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionParametersCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionParametersCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionParametersCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionParametersCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTransitionParametersCallback * This,
            /* [in] */ BMDSwitcherTransitionParametersEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTransitionParametersCallbackVtbl;

    interface IBMDSwitcherTransitionParametersCallback
    {
        CONST_VTBL struct IBMDSwitcherTransitionParametersCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionParametersCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionParametersCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionParametersCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionParametersCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionParametersCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionParameters_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionParameters_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionParameters */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83755CE5-748B-4E49-A856-AC95B8CCD215")
    IBMDSwitcherTransitionParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTransitionStyle( 
            /* [out] */ BMDSwitcherTransitionStyle *style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextTransitionStyle( 
            /* [out] */ BMDSwitcherTransitionStyle *style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNextTransitionStyle( 
            /* [in] */ BMDSwitcherTransitionStyle style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTransitionSelection( 
            /* [out] */ BMDSwitcherTransitionSelection *selection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNextTransitionSelection( 
            /* [in] */ BMDSwitcherTransitionSelection selection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNextTransitionSelection( 
            /* [out] */ BMDSwitcherTransitionSelection *selection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionParameters * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionParameters * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransitionStyle )( 
            IBMDSwitcherTransitionParameters * This,
            /* [out] */ BMDSwitcherTransitionStyle *style);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextTransitionStyle )( 
            IBMDSwitcherTransitionParameters * This,
            /* [out] */ BMDSwitcherTransitionStyle *style);
        
        HRESULT ( STDMETHODCALLTYPE *SetNextTransitionStyle )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ BMDSwitcherTransitionStyle style);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransitionSelection )( 
            IBMDSwitcherTransitionParameters * This,
            /* [out] */ BMDSwitcherTransitionSelection *selection);
        
        HRESULT ( STDMETHODCALLTYPE *SetNextTransitionSelection )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ BMDSwitcherTransitionSelection selection);
        
        HRESULT ( STDMETHODCALLTYPE *GetNextTransitionSelection )( 
            IBMDSwitcherTransitionParameters * This,
            /* [out] */ BMDSwitcherTransitionSelection *selection);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ IBMDSwitcherTransitionParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionParameters * This,
            /* [in] */ IBMDSwitcherTransitionParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionParametersVtbl;

    interface IBMDSwitcherTransitionParameters
    {
        CONST_VTBL struct IBMDSwitcherTransitionParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionParameters_GetTransitionStyle(This,style)	\
    ( (This)->lpVtbl -> GetTransitionStyle(This,style) ) 

#define IBMDSwitcherTransitionParameters_GetNextTransitionStyle(This,style)	\
    ( (This)->lpVtbl -> GetNextTransitionStyle(This,style) ) 

#define IBMDSwitcherTransitionParameters_SetNextTransitionStyle(This,style)	\
    ( (This)->lpVtbl -> SetNextTransitionStyle(This,style) ) 

#define IBMDSwitcherTransitionParameters_GetTransitionSelection(This,selection)	\
    ( (This)->lpVtbl -> GetTransitionSelection(This,selection) ) 

#define IBMDSwitcherTransitionParameters_SetNextTransitionSelection(This,selection)	\
    ( (This)->lpVtbl -> SetNextTransitionSelection(This,selection) ) 

#define IBMDSwitcherTransitionParameters_GetNextTransitionSelection(This,selection)	\
    ( (This)->lpVtbl -> GetNextTransitionSelection(This,selection) ) 

#define IBMDSwitcherTransitionParameters_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionParameters_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionParameters_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlockCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMixEffectBlockCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMixEffectBlockCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMixEffectBlockCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96010829-2029-4DA3-A34B-70368605ABAA")
    IBMDSwitcherMixEffectBlockCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PropertyChanged( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMixEffectBlockCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMixEffectBlockCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMixEffectBlockCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMixEffectBlockCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *PropertyChanged )( 
            IBMDSwitcherMixEffectBlockCallback * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId);
        
        END_INTERFACE
    } IBMDSwitcherMixEffectBlockCallbackVtbl;

    interface IBMDSwitcherMixEffectBlockCallback
    {
        CONST_VTBL struct IBMDSwitcherMixEffectBlockCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMixEffectBlockCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMixEffectBlockCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMixEffectBlockCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMixEffectBlockCallback_PropertyChanged(This,propertyId)	\
    ( (This)->lpVtbl -> PropertyChanged(This,propertyId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMixEffectBlockCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlock_INTERFACE_DEFINED__
#define __IBMDSwitcherMixEffectBlock_INTERFACE_DEFINED__

/* interface IBMDSwitcherMixEffectBlock */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMixEffectBlock;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11974D55-45E0-49D8-AE06-EEF4D5F81DF6")
    IBMDSwitcherMixEffectBlock : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMixEffectBlockCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMixEffectBlockCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlag( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlag( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ long long value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ long long *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFloat( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ double value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFloat( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ double *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetString( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ BSTR value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ BSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformAutoTransition( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformCut( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformFadeToBlack( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMixEffectBlockVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMixEffectBlock * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMixEffectBlock * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ IBMDSwitcherMixEffectBlockCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ IBMDSwitcherMixEffectBlockCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlag )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ BOOL value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlag )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ BOOL *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ long long value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ long long *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetFloat )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ double value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFloat )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ double *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetString )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [in] */ BSTR value);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IBMDSwitcherMixEffectBlock * This,
            /* [in] */ BMDSwitcherMixEffectBlockPropertyId propertyId,
            /* [out] */ BSTR *value);
        
        HRESULT ( STDMETHODCALLTYPE *PerformAutoTransition )( 
            IBMDSwitcherMixEffectBlock * This);
        
        HRESULT ( STDMETHODCALLTYPE *PerformCut )( 
            IBMDSwitcherMixEffectBlock * This);
        
        HRESULT ( STDMETHODCALLTYPE *PerformFadeToBlack )( 
            IBMDSwitcherMixEffectBlock * This);
        
        END_INTERFACE
    } IBMDSwitcherMixEffectBlockVtbl;

    interface IBMDSwitcherMixEffectBlock
    {
        CONST_VTBL struct IBMDSwitcherMixEffectBlockVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMixEffectBlock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMixEffectBlock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMixEffectBlock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMixEffectBlock_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcherMixEffectBlock_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMixEffectBlock_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherMixEffectBlock_SetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFlag(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_GetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFlag(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_SetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetInt(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_GetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetInt(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_SetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFloat(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_GetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFloat(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_SetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetString(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_GetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetString(This,propertyId,value) ) 

#define IBMDSwitcherMixEffectBlock_PerformAutoTransition(This)	\
    ( (This)->lpVtbl -> PerformAutoTransition(This) ) 

#define IBMDSwitcherMixEffectBlock_PerformCut(This)	\
    ( (This)->lpVtbl -> PerformCut(This) ) 

#define IBMDSwitcherMixEffectBlock_PerformFadeToBlack(This)	\
    ( (This)->lpVtbl -> PerformFadeToBlack(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMixEffectBlock_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherInputCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("93054328-C4C8-402D-8899-8E1ED28FAC22")
    IBMDSwitcherInputCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherInputEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherInputCallback * This,
            /* [in] */ BMDSwitcherInputEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherInputCallbackVtbl;

    interface IBMDSwitcherInputCallback
    {
        CONST_VTBL struct IBMDSwitcherInputCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInput_INTERFACE_DEFINED__
#define __IBMDSwitcherInput_INTERFACE_DEFINED__

/* interface IBMDSwitcherInput */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B182DF9-3732-4B1C-921B-C3B914AD441F")
    IBMDSwitcherInput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPortType( 
            /* [out] */ BMDSwitcherPortType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailability( 
            /* [out] */ BMDSwitcherInputAvailability *availability) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShortName( 
            /* [in] */ BSTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShortName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLongName( 
            /* [in] */ BSTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLongName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreNamesDefault( 
            /* [in] */ BOOL *isDefault) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetNames( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsProgramTallied( 
            /* [out] */ BOOL *isTallied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsPreviewTallied( 
            /* [out] */ BOOL *isTallied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAvailableExternalPortTypes( 
            /* [out] */ BMDSwitcherExternalPortType *types) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentExternalPortType( 
            /* [in] */ BMDSwitcherExternalPortType value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentExternalPortType( 
            /* [out] */ BMDSwitcherExternalPortType *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputId( 
            /* [out] */ BMDSwitcherInputId *inputId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInput * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPortType )( 
            IBMDSwitcherInput * This,
            /* [out] */ BMDSwitcherPortType *type);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailability )( 
            IBMDSwitcherInput * This,
            /* [out] */ BMDSwitcherInputAvailability *availability);
        
        HRESULT ( STDMETHODCALLTYPE *SetShortName )( 
            IBMDSwitcherInput * This,
            /* [in] */ BSTR name);
        
        HRESULT ( STDMETHODCALLTYPE *GetShortName )( 
            IBMDSwitcherInput * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetLongName )( 
            IBMDSwitcherInput * This,
            /* [in] */ BSTR name);
        
        HRESULT ( STDMETHODCALLTYPE *GetLongName )( 
            IBMDSwitcherInput * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *AreNamesDefault )( 
            IBMDSwitcherInput * This,
            /* [in] */ BOOL *isDefault);
        
        HRESULT ( STDMETHODCALLTYPE *ResetNames )( 
            IBMDSwitcherInput * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsProgramTallied )( 
            IBMDSwitcherInput * This,
            /* [out] */ BOOL *isTallied);
        
        HRESULT ( STDMETHODCALLTYPE *IsPreviewTallied )( 
            IBMDSwitcherInput * This,
            /* [out] */ BOOL *isTallied);
        
        HRESULT ( STDMETHODCALLTYPE *GetAvailableExternalPortTypes )( 
            IBMDSwitcherInput * This,
            /* [out] */ BMDSwitcherExternalPortType *types);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentExternalPortType )( 
            IBMDSwitcherInput * This,
            /* [in] */ BMDSwitcherExternalPortType value);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentExternalPortType )( 
            IBMDSwitcherInput * This,
            /* [out] */ BMDSwitcherExternalPortType *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputId )( 
            IBMDSwitcherInput * This,
            /* [out] */ BMDSwitcherInputId *inputId);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInput * This,
            /* [in] */ IBMDSwitcherInputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInput * This,
            /* [in] */ IBMDSwitcherInputCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherInputVtbl;

    interface IBMDSwitcherInput
    {
        CONST_VTBL struct IBMDSwitcherInputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInput_GetPortType(This,type)	\
    ( (This)->lpVtbl -> GetPortType(This,type) ) 

#define IBMDSwitcherInput_GetInputAvailability(This,availability)	\
    ( (This)->lpVtbl -> GetInputAvailability(This,availability) ) 

#define IBMDSwitcherInput_SetShortName(This,name)	\
    ( (This)->lpVtbl -> SetShortName(This,name) ) 

#define IBMDSwitcherInput_GetShortName(This,name)	\
    ( (This)->lpVtbl -> GetShortName(This,name) ) 

#define IBMDSwitcherInput_SetLongName(This,name)	\
    ( (This)->lpVtbl -> SetLongName(This,name) ) 

#define IBMDSwitcherInput_GetLongName(This,name)	\
    ( (This)->lpVtbl -> GetLongName(This,name) ) 

#define IBMDSwitcherInput_AreNamesDefault(This,isDefault)	\
    ( (This)->lpVtbl -> AreNamesDefault(This,isDefault) ) 

#define IBMDSwitcherInput_ResetNames(This)	\
    ( (This)->lpVtbl -> ResetNames(This) ) 

#define IBMDSwitcherInput_IsProgramTallied(This,isTallied)	\
    ( (This)->lpVtbl -> IsProgramTallied(This,isTallied) ) 

#define IBMDSwitcherInput_IsPreviewTallied(This,isTallied)	\
    ( (This)->lpVtbl -> IsPreviewTallied(This,isTallied) ) 

#define IBMDSwitcherInput_GetAvailableExternalPortTypes(This,types)	\
    ( (This)->lpVtbl -> GetAvailableExternalPortTypes(This,types) ) 

#define IBMDSwitcherInput_SetCurrentExternalPortType(This,value)	\
    ( (This)->lpVtbl -> SetCurrentExternalPortType(This,value) ) 

#define IBMDSwitcherInput_GetCurrentExternalPortType(This,value)	\
    ( (This)->lpVtbl -> GetCurrentExternalPortType(This,value) ) 

#define IBMDSwitcherInput_GetInputId(This,inputId)	\
    ( (This)->lpVtbl -> GetInputId(This,inputId) ) 

#define IBMDSwitcherInput_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInput_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInput_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputColorCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherInputColorCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputColorCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputColorCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BAE02C95-9394-439C-BE18-CEF0C0784EC3")
    IBMDSwitcherInputColorCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherInputColorEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputColorCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputColorCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputColorCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputColorCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherInputColorCallback * This,
            /* [in] */ BMDSwitcherInputColorEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherInputColorCallbackVtbl;

    interface IBMDSwitcherInputColorCallback
    {
        CONST_VTBL struct IBMDSwitcherInputColorCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputColorCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputColorCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputColorCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputColorCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputColorCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputColor_INTERFACE_DEFINED__
#define __IBMDSwitcherInputColor_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputColor */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputColor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0AF18D9-CBE6-49F3-B548-A44E856054D1")
    IBMDSwitcherInputColor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputColorCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputColorCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputColorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputColor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputColor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetHue )( 
            IBMDSwitcherInputColor * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetHue )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetSaturation )( 
            IBMDSwitcherInputColor * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetSaturation )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetLuma )( 
            IBMDSwitcherInputColor * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetLuma )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ IBMDSwitcherInputColorCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInputColor * This,
            /* [in] */ IBMDSwitcherInputColorCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherInputColorVtbl;

    interface IBMDSwitcherInputColor
    {
        CONST_VTBL struct IBMDSwitcherInputColorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputColor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputColor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputColor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputColor_GetHue(This,hue)	\
    ( (This)->lpVtbl -> GetHue(This,hue) ) 

#define IBMDSwitcherInputColor_SetHue(This,hue)	\
    ( (This)->lpVtbl -> SetHue(This,hue) ) 

#define IBMDSwitcherInputColor_GetSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetSaturation(This,sat) ) 

#define IBMDSwitcherInputColor_SetSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetSaturation(This,sat) ) 

#define IBMDSwitcherInputColor_GetLuma(This,luma)	\
    ( (This)->lpVtbl -> GetLuma(This,luma) ) 

#define IBMDSwitcherInputColor_SetLuma(This,luma)	\
    ( (This)->lpVtbl -> SetLuma(This,luma) ) 

#define IBMDSwitcherInputColor_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInputColor_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputColor_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputAuxCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherInputAuxCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputAuxCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputAuxCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AD1FF91-143F-49E9-9964-1B9FAF9A712A")
    IBMDSwitcherInputAuxCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherInputAuxEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputAuxCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputAuxCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputAuxCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputAuxCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherInputAuxCallback * This,
            /* [in] */ BMDSwitcherInputAuxEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherInputAuxCallbackVtbl;

    interface IBMDSwitcherInputAuxCallback
    {
        CONST_VTBL struct IBMDSwitcherInputAuxCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputAuxCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputAuxCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputAuxCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputAuxCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputAuxCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputAux_INTERFACE_DEFINED__
#define __IBMDSwitcherInputAux_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputAux */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputAux;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52C745A8-89B1-449A-A149-C43F5108DAE7")
    IBMDSwitcherInputAux : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInputSource( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputSource( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputAuxCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputAuxCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputAuxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputAux * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputAux * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputAux * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputSource )( 
            IBMDSwitcherInputAux * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputSource )( 
            IBMDSwitcherInputAux * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherInputAux * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInputAux * This,
            /* [in] */ IBMDSwitcherInputAuxCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInputAux * This,
            /* [in] */ IBMDSwitcherInputAuxCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherInputAuxVtbl;

    interface IBMDSwitcherInputAux
    {
        CONST_VTBL struct IBMDSwitcherInputAuxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputAux_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputAux_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputAux_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputAux_GetInputSource(This,input)	\
    ( (This)->lpVtbl -> GetInputSource(This,input) ) 

#define IBMDSwitcherInputAux_SetInputSource(This,input)	\
    ( (This)->lpVtbl -> SetInputSource(This,input) ) 

#define IBMDSwitcherInputAux_GetInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherInputAux_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInputAux_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputAux_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBoxCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherSuperSourceBoxCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherSuperSourceBoxCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherSuperSourceBoxCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7F667AF6-9B4E-4CDE-9F2F-2DF4505BF877")
    IBMDSwitcherSuperSourceBoxCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherSuperSourceBoxEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherSuperSourceBoxCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherSuperSourceBoxCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherSuperSourceBoxCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherSuperSourceBoxCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherSuperSourceBoxCallback * This,
            /* [in] */ BMDSwitcherSuperSourceBoxEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherSuperSourceBoxCallbackVtbl;

    interface IBMDSwitcherSuperSourceBoxCallback
    {
        CONST_VTBL struct IBMDSwitcherSuperSourceBoxCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherSuperSourceBoxCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherSuperSourceBoxCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherSuperSourceBoxCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherSuperSourceBoxCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherSuperSourceBoxCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBox_INTERFACE_DEFINED__
#define __IBMDSwitcherSuperSourceBox_INTERFACE_DEFINED__

/* interface IBMDSwitcherSuperSourceBox */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherSuperSourceBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("137028E5-87B2-407E-846F-283B18C82CE9")
    IBMDSwitcherSuperSourceBox : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEnabled( 
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnabled( 
            /* [in] */ BOOL enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputSource( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputSource( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *positionX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double positionX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *positionY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double positionY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ double *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSize( 
            /* [in] */ double size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropped( 
            /* [out] */ BOOL *cropped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropped( 
            /* [in] */ BOOL cropped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCropRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCropRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetCrop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherSuperSourceBoxCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherSuperSourceBoxCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherSuperSourceBoxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherSuperSourceBox * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherSuperSourceBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnabled )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnabled )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ BOOL enabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputSource )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputSource )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *positionX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double positionX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *positionY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double positionY);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *size);
        
        HRESULT ( STDMETHODCALLTYPE *SetSize )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double size);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropped )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ BOOL *cropped);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropped )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ BOOL cropped);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropTop )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropTop )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropBottom )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropBottom )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropLeft )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropLeft )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetCropRight )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetCropRight )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetCrop )( 
            IBMDSwitcherSuperSourceBox * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [out] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ IBMDSwitcherSuperSourceBoxCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherSuperSourceBox * This,
            /* [in] */ IBMDSwitcherSuperSourceBoxCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherSuperSourceBoxVtbl;

    interface IBMDSwitcherSuperSourceBox
    {
        CONST_VTBL struct IBMDSwitcherSuperSourceBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherSuperSourceBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherSuperSourceBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherSuperSourceBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherSuperSourceBox_GetEnabled(This,enabled)	\
    ( (This)->lpVtbl -> GetEnabled(This,enabled) ) 

#define IBMDSwitcherSuperSourceBox_SetEnabled(This,enabled)	\
    ( (This)->lpVtbl -> SetEnabled(This,enabled) ) 

#define IBMDSwitcherSuperSourceBox_GetInputSource(This,input)	\
    ( (This)->lpVtbl -> GetInputSource(This,input) ) 

#define IBMDSwitcherSuperSourceBox_SetInputSource(This,input)	\
    ( (This)->lpVtbl -> SetInputSource(This,input) ) 

#define IBMDSwitcherSuperSourceBox_GetPositionX(This,positionX)	\
    ( (This)->lpVtbl -> GetPositionX(This,positionX) ) 

#define IBMDSwitcherSuperSourceBox_SetPositionX(This,positionX)	\
    ( (This)->lpVtbl -> SetPositionX(This,positionX) ) 

#define IBMDSwitcherSuperSourceBox_GetPositionY(This,positionY)	\
    ( (This)->lpVtbl -> GetPositionY(This,positionY) ) 

#define IBMDSwitcherSuperSourceBox_SetPositionY(This,positionY)	\
    ( (This)->lpVtbl -> SetPositionY(This,positionY) ) 

#define IBMDSwitcherSuperSourceBox_GetSize(This,size)	\
    ( (This)->lpVtbl -> GetSize(This,size) ) 

#define IBMDSwitcherSuperSourceBox_SetSize(This,size)	\
    ( (This)->lpVtbl -> SetSize(This,size) ) 

#define IBMDSwitcherSuperSourceBox_GetCropped(This,cropped)	\
    ( (This)->lpVtbl -> GetCropped(This,cropped) ) 

#define IBMDSwitcherSuperSourceBox_SetCropped(This,cropped)	\
    ( (This)->lpVtbl -> SetCropped(This,cropped) ) 

#define IBMDSwitcherSuperSourceBox_GetCropTop(This,top)	\
    ( (This)->lpVtbl -> GetCropTop(This,top) ) 

#define IBMDSwitcherSuperSourceBox_SetCropTop(This,top)	\
    ( (This)->lpVtbl -> SetCropTop(This,top) ) 

#define IBMDSwitcherSuperSourceBox_GetCropBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetCropBottom(This,bottom) ) 

#define IBMDSwitcherSuperSourceBox_SetCropBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetCropBottom(This,bottom) ) 

#define IBMDSwitcherSuperSourceBox_GetCropLeft(This,left)	\
    ( (This)->lpVtbl -> GetCropLeft(This,left) ) 

#define IBMDSwitcherSuperSourceBox_SetCropLeft(This,left)	\
    ( (This)->lpVtbl -> SetCropLeft(This,left) ) 

#define IBMDSwitcherSuperSourceBox_GetCropRight(This,right)	\
    ( (This)->lpVtbl -> GetCropRight(This,right) ) 

#define IBMDSwitcherSuperSourceBox_SetCropRight(This,right)	\
    ( (This)->lpVtbl -> SetCropRight(This,right) ) 

#define IBMDSwitcherSuperSourceBox_ResetCrop(This)	\
    ( (This)->lpVtbl -> ResetCrop(This) ) 

#define IBMDSwitcherSuperSourceBox_GetInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherSuperSourceBox_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherSuperSourceBox_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherSuperSourceBox_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSourceCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherInputSuperSourceCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputSuperSourceCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputSuperSourceCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B02A84C-0085-4593-973A-5E458079BD16")
    IBMDSwitcherInputSuperSourceCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherInputSuperSourceEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputSuperSourceCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputSuperSourceCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputSuperSourceCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputSuperSourceCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherInputSuperSourceCallback * This,
            /* [in] */ BMDSwitcherInputSuperSourceEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherInputSuperSourceCallbackVtbl;

    interface IBMDSwitcherInputSuperSourceCallback
    {
        CONST_VTBL struct IBMDSwitcherInputSuperSourceCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputSuperSourceCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputSuperSourceCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputSuperSourceCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputSuperSourceCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputSuperSourceCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSource_INTERFACE_DEFINED__
#define __IBMDSwitcherInputSuperSource_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputSuperSource */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputSuperSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5051EFAA-DFE6-4A9E-9F5D-9356707F1D28")
    IBMDSwitcherInputSuperSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCutInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFillInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArtOption( 
            /* [out] */ BMDSwitcherSuperSourceArtOption *artOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetArtOption( 
            /* [in] */ BMDSwitcherSuperSourceArtOption artOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderEnabled( 
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderEnabled( 
            /* [in] */ BOOL enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevel( 
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevel( 
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthOut( 
            /* [out] */ double *widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthOut( 
            /* [in] */ double widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthIn( 
            /* [out] */ double *widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthIn( 
            /* [in] */ double widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessOut( 
            /* [out] */ double *softnessOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessOut( 
            /* [in] */ double softnessOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessIn( 
            /* [out] */ double *softnessIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessIn( 
            /* [in] */ double softnessIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelSoftness( 
            /* [out] */ double *bevelSoftness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelSoftness( 
            /* [in] */ double bevelSoftness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelPosition( 
            /* [out] */ double *bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelPosition( 
            /* [in] */ double bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceDirection( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceDirection( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceAltitude( 
            /* [out] */ double *altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceAltitude( 
            /* [in] */ double altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputSuperSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputSuperSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputSuperSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetCutInputAvailabilityMask )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *GetFillInputAvailabilityMask )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *GetArtOption )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherSuperSourceArtOption *artOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetArtOption )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BMDSwitcherSuperSourceArtOption artOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderEnabled )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderEnabled )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BOOL enabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevel )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevel )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthOut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthOut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthIn )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthIn )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessOut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *softnessOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessOut )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double softnessOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessIn )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *softnessIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessIn )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double softnessIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelSoftness )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *bevelSoftness);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelSoftness )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double bevelSoftness);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelPosition )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelPosition )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderHue )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderHue )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSaturation )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSaturation )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLuma )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLuma )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceDirection )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceDirection )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceAltitude )( 
            IBMDSwitcherInputSuperSource * This,
            /* [out] */ double *altitude);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceAltitude )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ double altitude);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherInputSuperSource * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        END_INTERFACE
    } IBMDSwitcherInputSuperSourceVtbl;

    interface IBMDSwitcherInputSuperSource
    {
        CONST_VTBL struct IBMDSwitcherInputSuperSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputSuperSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputSuperSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputSuperSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputSuperSource_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherInputSuperSource_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherInputSuperSource_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherInputSuperSource_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherInputSuperSource_GetCutInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetCutInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherInputSuperSource_GetFillInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetFillInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherInputSuperSource_GetArtOption(This,artOption)	\
    ( (This)->lpVtbl -> GetArtOption(This,artOption) ) 

#define IBMDSwitcherInputSuperSource_SetArtOption(This,artOption)	\
    ( (This)->lpVtbl -> SetArtOption(This,artOption) ) 

#define IBMDSwitcherInputSuperSource_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherInputSuperSource_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherInputSuperSource_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherInputSuperSource_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherInputSuperSource_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherInputSuperSource_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherInputSuperSource_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherInputSuperSource_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherInputSuperSource_GetBorderEnabled(This,enabled)	\
    ( (This)->lpVtbl -> GetBorderEnabled(This,enabled) ) 

#define IBMDSwitcherInputSuperSource_SetBorderEnabled(This,enabled)	\
    ( (This)->lpVtbl -> SetBorderEnabled(This,enabled) ) 

#define IBMDSwitcherInputSuperSource_GetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> GetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherInputSuperSource_SetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> SetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherInputSuperSource_GetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> GetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherInputSuperSource_SetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> SetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherInputSuperSource_GetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> GetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherInputSuperSource_SetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> SetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherInputSuperSource_GetBorderSoftnessOut(This,softnessOut)	\
    ( (This)->lpVtbl -> GetBorderSoftnessOut(This,softnessOut) ) 

#define IBMDSwitcherInputSuperSource_SetBorderSoftnessOut(This,softnessOut)	\
    ( (This)->lpVtbl -> SetBorderSoftnessOut(This,softnessOut) ) 

#define IBMDSwitcherInputSuperSource_GetBorderSoftnessIn(This,softnessIn)	\
    ( (This)->lpVtbl -> GetBorderSoftnessIn(This,softnessIn) ) 

#define IBMDSwitcherInputSuperSource_SetBorderSoftnessIn(This,softnessIn)	\
    ( (This)->lpVtbl -> SetBorderSoftnessIn(This,softnessIn) ) 

#define IBMDSwitcherInputSuperSource_GetBorderBevelSoftness(This,bevelSoftness)	\
    ( (This)->lpVtbl -> GetBorderBevelSoftness(This,bevelSoftness) ) 

#define IBMDSwitcherInputSuperSource_SetBorderBevelSoftness(This,bevelSoftness)	\
    ( (This)->lpVtbl -> SetBorderBevelSoftness(This,bevelSoftness) ) 

#define IBMDSwitcherInputSuperSource_GetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> GetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherInputSuperSource_SetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> SetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherInputSuperSource_GetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> GetBorderHue(This,hue) ) 

#define IBMDSwitcherInputSuperSource_SetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> SetBorderHue(This,hue) ) 

#define IBMDSwitcherInputSuperSource_GetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetBorderSaturation(This,sat) ) 

#define IBMDSwitcherInputSuperSource_SetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetBorderSaturation(This,sat) ) 

#define IBMDSwitcherInputSuperSource_GetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> GetBorderLuma(This,luma) ) 

#define IBMDSwitcherInputSuperSource_SetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> SetBorderLuma(This,luma) ) 

#define IBMDSwitcherInputSuperSource_GetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> GetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherInputSuperSource_SetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> SetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherInputSuperSource_GetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> GetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherInputSuperSource_SetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> SetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherInputSuperSource_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInputSuperSource_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherInputSuperSource_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputSuperSource_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMultiViewCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMultiViewCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMultiViewCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("345CE414-0BF1-46F9-97AC-FB1A47499005")
    IBMDSwitcherMultiViewCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherMultiViewEventType eventType,
            /* [in] */ int window) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMultiViewCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMultiViewCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMultiViewCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMultiViewCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherMultiViewCallback * This,
            /* [in] */ BMDSwitcherMultiViewEventType eventType,
            /* [in] */ int window);
        
        END_INTERFACE
    } IBMDSwitcherMultiViewCallbackVtbl;

    interface IBMDSwitcherMultiViewCallback
    {
        CONST_VTBL struct IBMDSwitcherMultiViewCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMultiViewCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMultiViewCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMultiViewCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMultiViewCallback_Notify(This,eventType,window)	\
    ( (This)->lpVtbl -> Notify(This,eventType,window) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMultiViewCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMultiView_INTERFACE_DEFINED__
#define __IBMDSwitcherMultiView_INTERFACE_DEFINED__

/* interface IBMDSwitcherMultiView */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMultiView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68083082-4FBF-429C-9FD0-4A73D8B9FD93")
    IBMDSwitcherMultiView : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLayout( 
            /* [out] */ BMDSwitcherMultiViewLayout *layout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLayout( 
            /* [in] */ BMDSwitcherMultiViewLayout layout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWindowInput( 
            /* [in] */ unsigned int window,
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWindowInput( 
            /* [in] */ unsigned int window,
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWindowCount( 
            /* [out] */ unsigned int *windowCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanRouteInputs( 
            /* [out] */ BOOL *canRoute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SupportsVuMeters( 
            /* [out] */ BOOL *supportsVuMeters) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CurrentInputSupportsVuMeter( 
            /* [in] */ unsigned int window,
            /* [out] */ BOOL *supportsVuMeter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVuMeterEnabled( 
            /* [in] */ unsigned int window,
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVuMeterEnabled( 
            /* [in] */ unsigned int window,
            /* [in] */ BOOL enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVuMeterOpacity( 
            /* [out] */ double *opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVuMeterOpacity( 
            /* [in] */ double opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanToggleSafeAreaEnabled( 
            /* [out] */ BOOL *canToggleSafeAreaEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSafeAreaEnabled( 
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSafeAreaEnabled( 
            /* [in] */ BOOL enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SupportsProgramPreviewSwap( 
            /* [out] */ BOOL *supportsProgramPreviewSwap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgramPreviewSwapped( 
            /* [out] */ BOOL *swapped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramPreviewSwapped( 
            /* [in] */ BOOL swapped) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMultiViewCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMultiViewCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMultiViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMultiView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMultiView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLayout )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BMDSwitcherMultiViewLayout *layout);
        
        HRESULT ( STDMETHODCALLTYPE *SetLayout )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ BMDSwitcherMultiViewLayout layout);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindowInput )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ unsigned int window,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetWindowInput )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ unsigned int window,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindowCount )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ unsigned int *windowCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *CanRouteInputs )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BOOL *canRoute);
        
        HRESULT ( STDMETHODCALLTYPE *SupportsVuMeters )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BOOL *supportsVuMeters);
        
        HRESULT ( STDMETHODCALLTYPE *CurrentInputSupportsVuMeter )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ unsigned int window,
            /* [out] */ BOOL *supportsVuMeter);
        
        HRESULT ( STDMETHODCALLTYPE *GetVuMeterEnabled )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ unsigned int window,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetVuMeterEnabled )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ unsigned int window,
            /* [in] */ BOOL enabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetVuMeterOpacity )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ double *opacity);
        
        HRESULT ( STDMETHODCALLTYPE *SetVuMeterOpacity )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ double opacity);
        
        HRESULT ( STDMETHODCALLTYPE *CanToggleSafeAreaEnabled )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BOOL *canToggleSafeAreaEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetSafeAreaEnabled )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetSafeAreaEnabled )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ BOOL enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SupportsProgramPreviewSwap )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BOOL *supportsProgramPreviewSwap);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramPreviewSwapped )( 
            IBMDSwitcherMultiView * This,
            /* [out] */ BOOL *swapped);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramPreviewSwapped )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ BOOL swapped);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ IBMDSwitcherMultiViewCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMultiView * This,
            /* [in] */ IBMDSwitcherMultiViewCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMultiViewVtbl;

    interface IBMDSwitcherMultiView
    {
        CONST_VTBL struct IBMDSwitcherMultiViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMultiView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMultiView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMultiView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMultiView_GetLayout(This,layout)	\
    ( (This)->lpVtbl -> GetLayout(This,layout) ) 

#define IBMDSwitcherMultiView_SetLayout(This,layout)	\
    ( (This)->lpVtbl -> SetLayout(This,layout) ) 

#define IBMDSwitcherMultiView_GetWindowInput(This,window,input)	\
    ( (This)->lpVtbl -> GetWindowInput(This,window,input) ) 

#define IBMDSwitcherMultiView_SetWindowInput(This,window,input)	\
    ( (This)->lpVtbl -> SetWindowInput(This,window,input) ) 

#define IBMDSwitcherMultiView_GetWindowCount(This,windowCount)	\
    ( (This)->lpVtbl -> GetWindowCount(This,windowCount) ) 

#define IBMDSwitcherMultiView_GetInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherMultiView_CanRouteInputs(This,canRoute)	\
    ( (This)->lpVtbl -> CanRouteInputs(This,canRoute) ) 

#define IBMDSwitcherMultiView_SupportsVuMeters(This,supportsVuMeters)	\
    ( (This)->lpVtbl -> SupportsVuMeters(This,supportsVuMeters) ) 

#define IBMDSwitcherMultiView_CurrentInputSupportsVuMeter(This,window,supportsVuMeter)	\
    ( (This)->lpVtbl -> CurrentInputSupportsVuMeter(This,window,supportsVuMeter) ) 

#define IBMDSwitcherMultiView_GetVuMeterEnabled(This,window,enabled)	\
    ( (This)->lpVtbl -> GetVuMeterEnabled(This,window,enabled) ) 

#define IBMDSwitcherMultiView_SetVuMeterEnabled(This,window,enabled)	\
    ( (This)->lpVtbl -> SetVuMeterEnabled(This,window,enabled) ) 

#define IBMDSwitcherMultiView_GetVuMeterOpacity(This,opacity)	\
    ( (This)->lpVtbl -> GetVuMeterOpacity(This,opacity) ) 

#define IBMDSwitcherMultiView_SetVuMeterOpacity(This,opacity)	\
    ( (This)->lpVtbl -> SetVuMeterOpacity(This,opacity) ) 

#define IBMDSwitcherMultiView_CanToggleSafeAreaEnabled(This,canToggleSafeAreaEnabled)	\
    ( (This)->lpVtbl -> CanToggleSafeAreaEnabled(This,canToggleSafeAreaEnabled) ) 

#define IBMDSwitcherMultiView_GetSafeAreaEnabled(This,enabled)	\
    ( (This)->lpVtbl -> GetSafeAreaEnabled(This,enabled) ) 

#define IBMDSwitcherMultiView_SetSafeAreaEnabled(This,enabled)	\
    ( (This)->lpVtbl -> SetSafeAreaEnabled(This,enabled) ) 

#define IBMDSwitcherMultiView_SupportsProgramPreviewSwap(This,supportsProgramPreviewSwap)	\
    ( (This)->lpVtbl -> SupportsProgramPreviewSwap(This,supportsProgramPreviewSwap) ) 

#define IBMDSwitcherMultiView_GetProgramPreviewSwapped(This,swapped)	\
    ( (This)->lpVtbl -> GetProgramPreviewSwapped(This,swapped) ) 

#define IBMDSwitcherMultiView_SetProgramPreviewSwapped(This,swapped)	\
    ( (This)->lpVtbl -> SetProgramPreviewSwapped(This,swapped) ) 

#define IBMDSwitcherMultiView_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMultiView_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMultiView_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherDownstreamKeyCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherDownstreamKeyCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDownstreamKeyCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0C7D4DE3-E7D1-4062-86B4-9F82F7BB346D")
    IBMDSwitcherDownstreamKeyCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherDownstreamKeyEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDownstreamKeyCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDownstreamKeyCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDownstreamKeyCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDownstreamKeyCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherDownstreamKeyCallback * This,
            /* [in] */ BMDSwitcherDownstreamKeyEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherDownstreamKeyCallbackVtbl;

    interface IBMDSwitcherDownstreamKeyCallback
    {
        CONST_VTBL struct IBMDSwitcherDownstreamKeyCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDownstreamKeyCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDownstreamKeyCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDownstreamKeyCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDownstreamKeyCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDownstreamKeyCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKey_INTERFACE_DEFINED__
#define __IBMDSwitcherDownstreamKey_INTERFACE_DEFINED__

/* interface IBMDSwitcherDownstreamKey */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDownstreamKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6E4F204-712C-4D59-848D-926B14BEF353")
    IBMDSwitcherDownstreamKey : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCutInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFillInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTie( 
            /* [out] */ BOOL *tie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTie( 
            /* [in] */ BOOL tie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOnAir( 
            /* [out] */ BOOL *onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOnAir( 
            /* [in] */ BOOL onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformAutoTransition( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsTransitioning( 
            /* [out] */ BOOL *isTransitioning) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAutoTransitioning( 
            /* [out] */ BOOL *isAutoTransitioning) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFramesRemaining( 
            /* [out] */ unsigned int *framesRemaining) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMasked( 
            /* [out] */ BOOL *maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMasked( 
            /* [in] */ BOOL maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMask( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDownstreamKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDownstreamKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDownstreamKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetCutInputAvailabilityMask )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *GetFillInputAvailabilityMask )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *GetTie )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *tie);
        
        HRESULT ( STDMETHODCALLTYPE *SetTie )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL tie);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetOnAir )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *onAir);
        
        HRESULT ( STDMETHODCALLTYPE *SetOnAir )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL onAir);
        
        HRESULT ( STDMETHODCALLTYPE *PerformAutoTransition )( 
            IBMDSwitcherDownstreamKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsTransitioning )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *isTransitioning);
        
        HRESULT ( STDMETHODCALLTYPE *IsAutoTransitioning )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *isAutoTransitioning);
        
        HRESULT ( STDMETHODCALLTYPE *GetFramesRemaining )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ unsigned int *framesRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetMasked )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ BOOL *maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetMasked )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ BOOL maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherDownstreamKey * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMask )( 
            IBMDSwitcherDownstreamKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherDownstreamKey * This,
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherDownstreamKeyVtbl;

    interface IBMDSwitcherDownstreamKey
    {
        CONST_VTBL struct IBMDSwitcherDownstreamKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDownstreamKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDownstreamKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDownstreamKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDownstreamKey_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherDownstreamKey_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherDownstreamKey_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherDownstreamKey_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherDownstreamKey_GetCutInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetCutInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherDownstreamKey_GetFillInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetFillInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherDownstreamKey_GetTie(This,tie)	\
    ( (This)->lpVtbl -> GetTie(This,tie) ) 

#define IBMDSwitcherDownstreamKey_SetTie(This,tie)	\
    ( (This)->lpVtbl -> SetTie(This,tie) ) 

#define IBMDSwitcherDownstreamKey_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherDownstreamKey_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherDownstreamKey_GetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> GetOnAir(This,onAir) ) 

#define IBMDSwitcherDownstreamKey_SetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> SetOnAir(This,onAir) ) 

#define IBMDSwitcherDownstreamKey_PerformAutoTransition(This)	\
    ( (This)->lpVtbl -> PerformAutoTransition(This) ) 

#define IBMDSwitcherDownstreamKey_IsTransitioning(This,isTransitioning)	\
    ( (This)->lpVtbl -> IsTransitioning(This,isTransitioning) ) 

#define IBMDSwitcherDownstreamKey_IsAutoTransitioning(This,isAutoTransitioning)	\
    ( (This)->lpVtbl -> IsAutoTransitioning(This,isAutoTransitioning) ) 

#define IBMDSwitcherDownstreamKey_GetFramesRemaining(This,framesRemaining)	\
    ( (This)->lpVtbl -> GetFramesRemaining(This,framesRemaining) ) 

#define IBMDSwitcherDownstreamKey_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherDownstreamKey_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherDownstreamKey_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherDownstreamKey_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherDownstreamKey_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherDownstreamKey_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherDownstreamKey_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherDownstreamKey_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherDownstreamKey_GetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> GetMasked(This,maskEnabled) ) 

#define IBMDSwitcherDownstreamKey_SetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> SetMasked(This,maskEnabled) ) 

#define IBMDSwitcherDownstreamKey_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherDownstreamKey_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherDownstreamKey_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherDownstreamKey_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherDownstreamKey_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherDownstreamKey_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherDownstreamKey_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherDownstreamKey_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherDownstreamKey_ResetMask(This)	\
    ( (This)->lpVtbl -> ResetMask(This) ) 

#define IBMDSwitcherDownstreamKey_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherDownstreamKey_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDownstreamKey_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherInputIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("275E9888-2F65-4B2E-9434-1937A72B9EC4")
    IBMDSwitcherInputIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherInput **input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ BMDSwitcherInputId inputId,
            /* [out] */ IBMDSwitcherInput **input) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherInputIterator * This,
            /* [out] */ IBMDSwitcherInput **input);
        
        HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IBMDSwitcherInputIterator * This,
            /* [in] */ BMDSwitcherInputId inputId,
            /* [out] */ IBMDSwitcherInput **input);
        
        END_INTERFACE
    } IBMDSwitcherInputIteratorVtbl;

    interface IBMDSwitcherInputIterator
    {
        CONST_VTBL struct IBMDSwitcherInputIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputIterator_Next(This,input)	\
    ( (This)->lpVtbl -> Next(This,input) ) 

#define IBMDSwitcherInputIterator_GetById(This,inputId,input)	\
    ( (This)->lpVtbl -> GetById(This,inputId,input) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherSuperSourceBoxIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherSuperSourceBoxIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherSuperSourceBoxIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherSuperSourceBoxIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96153CDA-C894-42EA-BA90-C387018CC334")
    IBMDSwitcherSuperSourceBoxIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherSuperSourceBox **box) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherSuperSourceBoxIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherSuperSourceBoxIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherSuperSourceBoxIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherSuperSourceBoxIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherSuperSourceBoxIterator * This,
            /* [out] */ IBMDSwitcherSuperSourceBox **box);
        
        END_INTERFACE
    } IBMDSwitcherSuperSourceBoxIteratorVtbl;

    interface IBMDSwitcherSuperSourceBoxIterator
    {
        CONST_VTBL struct IBMDSwitcherSuperSourceBoxIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherSuperSourceBoxIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherSuperSourceBoxIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherSuperSourceBoxIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherSuperSourceBoxIterator_Next(This,box)	\
    ( (This)->lpVtbl -> Next(This,box) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherSuperSourceBoxIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMixEffectBlockIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherMixEffectBlockIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherMixEffectBlockIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMixEffectBlockIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("930BDE3B-4A78-43D0-8FD3-6E82ABA0E117")
    IBMDSwitcherMixEffectBlockIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherMixEffectBlock **mixEffectBlock) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMixEffectBlockIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMixEffectBlockIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMixEffectBlockIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMixEffectBlockIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherMixEffectBlockIterator * This,
            /* [out] */ IBMDSwitcherMixEffectBlock **mixEffectBlock);
        
        END_INTERFACE
    } IBMDSwitcherMixEffectBlockIteratorVtbl;

    interface IBMDSwitcherMixEffectBlockIterator
    {
        CONST_VTBL struct IBMDSwitcherMixEffectBlockIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMixEffectBlockIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMixEffectBlockIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMixEffectBlockIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMixEffectBlockIterator_Next(This,mixEffectBlock)	\
    ( (This)->lpVtbl -> Next(This,mixEffectBlock) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMixEffectBlockIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherDownstreamKeyIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherDownstreamKeyIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDownstreamKeyIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F2968750-709B-42C8-B450-92CA2B065D14")
    IBMDSwitcherDownstreamKeyIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherDownstreamKey **downstreamKey) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDownstreamKeyIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDownstreamKeyIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDownstreamKeyIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDownstreamKeyIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherDownstreamKeyIterator * This,
            /* [out] */ IBMDSwitcherDownstreamKey **downstreamKey);
        
        END_INTERFACE
    } IBMDSwitcherDownstreamKeyIteratorVtbl;

    interface IBMDSwitcherDownstreamKeyIterator
    {
        CONST_VTBL struct IBMDSwitcherDownstreamKeyIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDownstreamKeyIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDownstreamKeyIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDownstreamKeyIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDownstreamKeyIterator_Next(This,downstreamKey)	\
    ( (This)->lpVtbl -> Next(This,downstreamKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDownstreamKeyIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ECC57473-0993-444F-B3CF-ED593CA25B09")
    IBMDSwitcherKeyIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherKey **key) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherKeyIterator * This,
            /* [out] */ IBMDSwitcherKey **key);
        
        END_INTERFACE
    } IBMDSwitcherKeyIteratorVtbl;

    interface IBMDSwitcherKeyIterator
    {
        CONST_VTBL struct IBMDSwitcherKeyIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyIterator_Next(This,key)	\
    ( (This)->lpVtbl -> Next(This,key) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPlayerIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPlayerIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPlayerIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPlayerIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E910816F-59CB-4224-A77F-06DE3D232275")
    IBMDSwitcherMediaPlayerIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherMediaPlayer **mediaPlayer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPlayerIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPlayerIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPlayerIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPlayerIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherMediaPlayerIterator * This,
            /* [out] */ IBMDSwitcherMediaPlayer **mediaPlayer);
        
        END_INTERFACE
    } IBMDSwitcherMediaPlayerIteratorVtbl;

    interface IBMDSwitcherMediaPlayerIterator
    {
        CONST_VTBL struct IBMDSwitcherMediaPlayerIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPlayerIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPlayerIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPlayerIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPlayerIterator_Next(This,mediaPlayer)	\
    ( (This)->lpVtbl -> Next(This,mediaPlayer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPlayerIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherMultiViewIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherMultiViewIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMultiViewIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B7A0D98B-A286-4651-A9E7-5596F62D652E")
    IBMDSwitcherMultiViewIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherMultiView **multiView) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMultiViewIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMultiViewIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMultiViewIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMultiViewIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherMultiViewIterator * This,
            /* [out] */ IBMDSwitcherMultiView **multiView);
        
        END_INTERFACE
    } IBMDSwitcherMultiViewIteratorVtbl;

    interface IBMDSwitcherMultiViewIterator
    {
        CONST_VTBL struct IBMDSwitcherMultiViewIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMultiViewIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMultiViewIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMultiViewIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMultiViewIterator_Next(This,multiView)	\
    ( (This)->lpVtbl -> Next(This,multiView) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMultiViewIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMonitorOutputIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMonitorOutputIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMonitorOutputIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMonitorOutputIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C76BAC6A-DFEE-4F2F-B161-226B481D556A")
    IBMDSwitcherAudioMonitorOutputIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherAudioMonitorOutput **audioMonitorOutput) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMonitorOutputIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMonitorOutputIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMonitorOutputIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMonitorOutputIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherAudioMonitorOutputIterator * This,
            /* [out] */ IBMDSwitcherAudioMonitorOutput **audioMonitorOutput);
        
        END_INTERFACE
    } IBMDSwitcherAudioMonitorOutputIteratorVtbl;

    interface IBMDSwitcherAudioMonitorOutputIterator
    {
        CONST_VTBL struct IBMDSwitcherAudioMonitorOutputIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMonitorOutputIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMonitorOutputIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMonitorOutputIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMonitorOutputIterator_Next(This,audioMonitorOutput)	\
    ( (This)->lpVtbl -> Next(This,audioMonitorOutput) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMonitorOutputIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioHeadphoneOutputIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioHeadphoneOutputIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioHeadphoneOutputIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioHeadphoneOutputIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("151CFF07-EF32-441F-8FF8-C2163A751EA2")
    IBMDSwitcherAudioHeadphoneOutputIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherAudioHeadphoneOutput **audioHeadphoneOutput) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioHeadphoneOutputIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioHeadphoneOutputIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioHeadphoneOutputIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioHeadphoneOutputIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherAudioHeadphoneOutputIterator * This,
            /* [out] */ IBMDSwitcherAudioHeadphoneOutput **audioHeadphoneOutput);
        
        END_INTERFACE
    } IBMDSwitcherAudioHeadphoneOutputIteratorVtbl;

    interface IBMDSwitcherAudioHeadphoneOutputIterator
    {
        CONST_VTBL struct IBMDSwitcherAudioHeadphoneOutputIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioHeadphoneOutputIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioHeadphoneOutputIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioHeadphoneOutputIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioHeadphoneOutputIterator_Next(This,audioHeadphoneOutput)	\
    ( (This)->lpVtbl -> Next(This,audioHeadphoneOutput) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioHeadphoneOutputIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioInputIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioInputIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioInputIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("97959903-651E-4F68-BA42-1FA61508F189")
    IBMDSwitcherAudioInputIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherAudioInput **audioInput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ IBMDSwitcherAudioInput **audioInput) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioInputIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioInputIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioInputIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioInputIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherAudioInputIterator * This,
            /* [out] */ IBMDSwitcherAudioInput **audioInput);
        
        HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IBMDSwitcherAudioInputIterator * This,
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ IBMDSwitcherAudioInput **audioInput);
        
        END_INTERFACE
    } IBMDSwitcherAudioInputIteratorVtbl;

    interface IBMDSwitcherAudioInputIterator
    {
        CONST_VTBL struct IBMDSwitcherAudioInputIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioInputIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioInputIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioInputIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioInputIterator_Next(This,audioInput)	\
    ( (This)->lpVtbl -> Next(This,audioInput) ) 

#define IBMDSwitcherAudioInputIterator_GetById(This,audioInputId,audioInput)	\
    ( (This)->lpVtbl -> GetById(This,audioInputId,audioInput) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioInputIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherSerialPortIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherSerialPortIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherSerialPortIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherSerialPortIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3F0E3CE-5A1A-4D60-94A4-D3DBB2514763")
    IBMDSwitcherSerialPortIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherSerialPort **serialPort) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherSerialPortIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherSerialPortIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherSerialPortIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherSerialPortIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherSerialPortIterator * This,
            /* [out] */ IBMDSwitcherSerialPort **serialPort);
        
        END_INTERFACE
    } IBMDSwitcherSerialPortIteratorVtbl;

    interface IBMDSwitcherSerialPortIterator
    {
        CONST_VTBL struct IBMDSwitcherSerialPortIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherSerialPortIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherSerialPortIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherSerialPortIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherSerialPortIterator_Next(This,serialPort)	\
    ( (This)->lpVtbl -> Next(This,serialPort) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherSerialPortIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherHyperDeckIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherHyperDeckIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherHyperDeckIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35879F23-168D-4AF2-80B0-6D72838E17F9")
    IBMDSwitcherHyperDeckIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherHyperDeck **hyperDeck) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ BMDSwitcherHyperDeckId hyperDeckId,
            /* [out] */ IBMDSwitcherHyperDeck **hyperDeck) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherHyperDeckIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherHyperDeckIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherHyperDeckIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherHyperDeckIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherHyperDeckIterator * This,
            /* [out] */ IBMDSwitcherHyperDeck **hyperDeck);
        
        HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IBMDSwitcherHyperDeckIterator * This,
            /* [in] */ BMDSwitcherHyperDeckId hyperDeckId,
            /* [out] */ IBMDSwitcherHyperDeck **hyperDeck);
        
        END_INTERFACE
    } IBMDSwitcherHyperDeckIteratorVtbl;

    interface IBMDSwitcherHyperDeckIterator
    {
        CONST_VTBL struct IBMDSwitcherHyperDeckIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherHyperDeckIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherHyperDeckIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherHyperDeckIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherHyperDeckIterator_Next(This,hyperDeck)	\
    ( (This)->lpVtbl -> Next(This,hyperDeck) ) 

#define IBMDSwitcherHyperDeckIterator_GetById(This,hyperDeckId,hyperDeck)	\
    ( (This)->lpVtbl -> GetById(This,hyperDeckId,hyperDeck) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherHyperDeckIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMixMinusOutputIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherMixMinusOutputIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherMixMinusOutputIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMixMinusOutputIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C878F9F2-116D-48D4-9BBF-CA03447EA9A7")
    IBMDSwitcherMixMinusOutputIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherMixMinusOutput **mixMinusOutput) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMixMinusOutputIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMixMinusOutputIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMixMinusOutputIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMixMinusOutputIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherMixMinusOutputIterator * This,
            /* [out] */ IBMDSwitcherMixMinusOutput **mixMinusOutput);
        
        END_INTERFACE
    } IBMDSwitcherMixMinusOutputIteratorVtbl;

    interface IBMDSwitcherMixMinusOutputIterator
    {
        CONST_VTBL struct IBMDSwitcherMixMinusOutputIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMixMinusOutputIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMixMinusOutputIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMixMinusOutputIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMixMinusOutputIterator_Next(This,mixMinusOutput)	\
    ( (This)->lpVtbl -> Next(This,mixMinusOutput) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMixMinusOutputIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE50FC2C-D0D7-42D6-965A-57498CECC1F6")
    IBMDSwitcherCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherEventType eventType,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherCallback * This,
            /* [in] */ BMDSwitcherEventType eventType,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode);
        
        END_INTERFACE
    } IBMDSwitcherCallbackVtbl;

    interface IBMDSwitcherCallback
    {
        CONST_VTBL struct IBMDSwitcherCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherCallback_Notify(This,eventType,coreVideoMode)	\
    ( (This)->lpVtbl -> Notify(This,eventType,coreVideoMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcher_INTERFACE_DEFINED__
#define __IBMDSwitcher_INTERFACE_DEFINED__

/* interface IBMDSwitcher */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcher;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3D480E2F-3CF4-474B-92E7-B7907EE83B41")
    IBMDSwitcher : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProductName( 
            /* [out] */ BSTR *productName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVideoMode( 
            /* [out] */ BMDSwitcherVideoMode *videoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVideoMode( 
            /* [in] */ BMDSwitcherVideoMode videoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportVideoMode( 
            /* [in] */ BMDSwitcherVideoMode videoMode,
            /* [out] */ BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMethodForDownConvertedSD( 
            /* [out] */ BMDSwitcherDownConversionMethod *method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMethodForDownConvertedSD( 
            /* [in] */ BMDSwitcherDownConversionMethod method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDownConvertedHDVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [out] */ BMDSwitcherVideoMode *downConvertedHDVideoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDownConvertedHDVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode downConvertedHDVideoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportDownConvertedHDVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode downConvertedHDVideoMode,
            /* [out] */ BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMultiViewVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [out] */ BMDSwitcherVideoMode *multiviewVideoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMultiViewVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode multiviewVideoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportMultiViewVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode multiviewVideoMode,
            /* [out] */ BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Get3GSDIOutputLevel( 
            /* [out] */ BMDSwitcher3GSDIOutputLevel *outputLevel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Set3GSDIOutputLevel( 
            /* [in] */ BMDSwitcher3GSDIOutputLevel outputLevel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPowerStatus( 
            /* [out] */ BMDSwitcherPowerStatus *powerStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcher * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcher * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcher * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProductName )( 
            IBMDSwitcher * This,
            /* [out] */ BSTR *productName);
        
        HRESULT ( STDMETHODCALLTYPE *GetVideoMode )( 
            IBMDSwitcher * This,
            /* [out] */ BMDSwitcherVideoMode *videoMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetVideoMode )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherVideoMode videoMode);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportVideoMode )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherVideoMode videoMode,
            /* [out] */ BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *GetMethodForDownConvertedSD )( 
            IBMDSwitcher * This,
            /* [out] */ BMDSwitcherDownConversionMethod *method);
        
        HRESULT ( STDMETHODCALLTYPE *SetMethodForDownConvertedSD )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherDownConversionMethod method);
        
        HRESULT ( STDMETHODCALLTYPE *GetDownConvertedHDVideoMode )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [out] */ BMDSwitcherVideoMode *downConvertedHDVideoMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetDownConvertedHDVideoMode )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode downConvertedHDVideoMode);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportDownConvertedHDVideoMode )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode downConvertedHDVideoMode,
            /* [out] */ BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *GetMultiViewVideoMode )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [out] */ BMDSwitcherVideoMode *multiviewVideoMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetMultiViewVideoMode )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode multiviewVideoMode);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportMultiViewVideoMode )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode multiviewVideoMode,
            /* [out] */ BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *Get3GSDIOutputLevel )( 
            IBMDSwitcher * This,
            /* [out] */ BMDSwitcher3GSDIOutputLevel *outputLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Set3GSDIOutputLevel )( 
            IBMDSwitcher * This,
            /* [in] */ BMDSwitcher3GSDIOutputLevel outputLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerStatus )( 
            IBMDSwitcher * This,
            /* [out] */ BMDSwitcherPowerStatus *powerStatus);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcher * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcher * This,
            /* [in] */ IBMDSwitcherCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcher * This,
            /* [in] */ IBMDSwitcherCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherVtbl;

    interface IBMDSwitcher
    {
        CONST_VTBL struct IBMDSwitcherVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcher_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcher_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcher_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcher_GetProductName(This,productName)	\
    ( (This)->lpVtbl -> GetProductName(This,productName) ) 

#define IBMDSwitcher_GetVideoMode(This,videoMode)	\
    ( (This)->lpVtbl -> GetVideoMode(This,videoMode) ) 

#define IBMDSwitcher_SetVideoMode(This,videoMode)	\
    ( (This)->lpVtbl -> SetVideoMode(This,videoMode) ) 

#define IBMDSwitcher_DoesSupportVideoMode(This,videoMode,supported)	\
    ( (This)->lpVtbl -> DoesSupportVideoMode(This,videoMode,supported) ) 

#define IBMDSwitcher_GetMethodForDownConvertedSD(This,method)	\
    ( (This)->lpVtbl -> GetMethodForDownConvertedSD(This,method) ) 

#define IBMDSwitcher_SetMethodForDownConvertedSD(This,method)	\
    ( (This)->lpVtbl -> SetMethodForDownConvertedSD(This,method) ) 

#define IBMDSwitcher_GetDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode)	\
    ( (This)->lpVtbl -> GetDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode) ) 

#define IBMDSwitcher_SetDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode)	\
    ( (This)->lpVtbl -> SetDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode) ) 

#define IBMDSwitcher_DoesSupportDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode,supported)	\
    ( (This)->lpVtbl -> DoesSupportDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode,supported) ) 

#define IBMDSwitcher_GetMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode)	\
    ( (This)->lpVtbl -> GetMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode) ) 

#define IBMDSwitcher_SetMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode)	\
    ( (This)->lpVtbl -> SetMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode) ) 

#define IBMDSwitcher_DoesSupportMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode,supported)	\
    ( (This)->lpVtbl -> DoesSupportMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode,supported) ) 

#define IBMDSwitcher_Get3GSDIOutputLevel(This,outputLevel)	\
    ( (This)->lpVtbl -> Get3GSDIOutputLevel(This,outputLevel) ) 

#define IBMDSwitcher_Set3GSDIOutputLevel(This,outputLevel)	\
    ( (This)->lpVtbl -> Set3GSDIOutputLevel(This,outputLevel) ) 

#define IBMDSwitcher_GetPowerStatus(This,powerStatus)	\
    ( (This)->lpVtbl -> GetPowerStatus(This,powerStatus) ) 

#define IBMDSwitcher_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcher_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcher_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcher_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_INTERFACE_DEFINED__
#define __IBMDSwitcherDiscovery_INTERFACE_DEFINED__

/* interface IBMDSwitcherDiscovery */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDiscovery;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2CEFAB87-89E6-442F-A4F6-8FE63A50E17E")
    IBMDSwitcherDiscovery : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConnectTo( 
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDiscoveryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDiscovery * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDiscovery * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDiscovery * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectTo )( 
            IBMDSwitcherDiscovery * This,
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason);
        
        END_INTERFACE
    } IBMDSwitcherDiscoveryVtbl;

    interface IBMDSwitcherDiscovery
    {
        CONST_VTBL struct IBMDSwitcherDiscoveryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDiscovery_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDiscovery_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDiscovery_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDiscovery_ConnectTo(This,deviceAddress,switcherDevice,failReason)	\
    ( (This)->lpVtbl -> ConnectTo(This,deviceAddress,switcherDevice,failReason) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDiscovery_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherFrame_INTERFACE_DEFINED__
#define __IBMDSwitcherFrame_INTERFACE_DEFINED__

/* interface IBMDSwitcherFrame */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35A1F6A6-D317-4F89-A565-0F0BD414CF77")
    IBMDSwitcherFrame : public IUnknown
    {
    public:
        virtual int STDMETHODCALLTYPE GetWidth( void) = 0;
        
        virtual int STDMETHODCALLTYPE GetHeight( void) = 0;
        
        virtual int STDMETHODCALLTYPE GetRowBytes( void) = 0;
        
        virtual BMDSwitcherPixelFormat STDMETHODCALLTYPE GetPixelFormat( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBytes( 
            /* [out] */ void **buffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherFrame * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherFrame * This);
        
        int ( STDMETHODCALLTYPE *GetWidth )( 
            IBMDSwitcherFrame * This);
        
        int ( STDMETHODCALLTYPE *GetHeight )( 
            IBMDSwitcherFrame * This);
        
        int ( STDMETHODCALLTYPE *GetRowBytes )( 
            IBMDSwitcherFrame * This);
        
        BMDSwitcherPixelFormat ( STDMETHODCALLTYPE *GetPixelFormat )( 
            IBMDSwitcherFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBytes )( 
            IBMDSwitcherFrame * This,
            /* [out] */ void **buffer);
        
        END_INTERFACE
    } IBMDSwitcherFrameVtbl;

    interface IBMDSwitcherFrame
    {
        CONST_VTBL struct IBMDSwitcherFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherFrame_GetWidth(This)	\
    ( (This)->lpVtbl -> GetWidth(This) ) 

#define IBMDSwitcherFrame_GetHeight(This)	\
    ( (This)->lpVtbl -> GetHeight(This) ) 

#define IBMDSwitcherFrame_GetRowBytes(This)	\
    ( (This)->lpVtbl -> GetRowBytes(This) ) 

#define IBMDSwitcherFrame_GetPixelFormat(This)	\
    ( (This)->lpVtbl -> GetPixelFormat(This) ) 

#define IBMDSwitcherFrame_GetBytes(This,buffer)	\
    ( (This)->lpVtbl -> GetBytes(This,buffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherFrame_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudio_INTERFACE_DEFINED__
#define __IBMDSwitcherAudio_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudio */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E89BD25E-FD04-4FBE-A124-CCAF5ADBE5B2")
    IBMDSwitcherAudio : public IUnknown
    {
    public:
        virtual int STDMETHODCALLTYPE GetSize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBytes( 
            /* [out] */ void **buffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudio * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudio * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudio * This);
        
        int ( STDMETHODCALLTYPE *GetSize )( 
            IBMDSwitcherAudio * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBytes )( 
            IBMDSwitcherAudio * This,
            /* [out] */ void **buffer);
        
        END_INTERFACE
    } IBMDSwitcherAudioVtbl;

    interface IBMDSwitcherAudio
    {
        CONST_VTBL struct IBMDSwitcherAudioVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudio_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudio_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudio_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudio_GetSize(This)	\
    ( (This)->lpVtbl -> GetSize(This) ) 

#define IBMDSwitcherAudio_GetBytes(This,buffer)	\
    ( (This)->lpVtbl -> GetBytes(This,buffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudio_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherLockCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherLockCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherLockCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherLockCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56663D7A-85A8-4DA0-9B13-2A52D3C7740C")
    IBMDSwitcherLockCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Obtained( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherLockCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherLockCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherLockCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherLockCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Obtained )( 
            IBMDSwitcherLockCallback * This);
        
        END_INTERFACE
    } IBMDSwitcherLockCallbackVtbl;

    interface IBMDSwitcherLockCallback
    {
        CONST_VTBL struct IBMDSwitcherLockCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherLockCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherLockCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherLockCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherLockCallback_Obtained(This)	\
    ( (This)->lpVtbl -> Obtained(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherLockCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherStillsCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherStillsCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherStillsCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherStillsCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AF82DC6-9A43-4CD2-9712-585E6BA159BA")
    IBMDSwitcherStillsCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherMediaPoolEventType eventType,
            /* [in] */ IBMDSwitcherFrame *frame,
            /* [in] */ int index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherStillsCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherStillsCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherStillsCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherStillsCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherStillsCallback * This,
            /* [in] */ BMDSwitcherMediaPoolEventType eventType,
            /* [in] */ IBMDSwitcherFrame *frame,
            /* [in] */ int index);
        
        END_INTERFACE
    } IBMDSwitcherStillsCallbackVtbl;

    interface IBMDSwitcherStillsCallback
    {
        CONST_VTBL struct IBMDSwitcherStillsCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherStillsCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherStillsCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherStillsCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherStillsCallback_Notify(This,eventType,frame,index)	\
    ( (This)->lpVtbl -> Notify(This,eventType,frame,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherStillsCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherStills_INTERFACE_DEFINED__
#define __IBMDSwitcherStills_INTERFACE_DEFINED__

/* interface IBMDSwitcherStills */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherStills;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("235C654C-7389-4D3E-AB46-D0078D065940")
    IBMDSwitcherStills : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ unsigned int *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsValid( 
            /* [in] */ unsigned int index,
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ unsigned int index,
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHash( 
            /* [in] */ unsigned int index,
            /* [out] */ BMDSwitcherHash *hash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInvalid( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Lock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unlock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Upload( 
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherFrame *frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Download( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelTransfer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [out] */ double *progress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherStillsCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherStillsCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherStillsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherStills * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherStills * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherStills * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IBMDSwitcherStills * This,
            /* [out] */ unsigned int *count);
        
        HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned int index,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned int index,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned int index,
            /* [out] */ BMDSwitcherHash *hash);
        
        HRESULT ( STDMETHODCALLTYPE *SetInvalid )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *Lock )( 
            IBMDSwitcherStills * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Unlock )( 
            IBMDSwitcherStills * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Upload )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *Download )( 
            IBMDSwitcherStills * This,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *CancelTransfer )( 
            IBMDSwitcherStills * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IBMDSwitcherStills * This,
            /* [out] */ double *progress);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherStills * This,
            /* [in] */ IBMDSwitcherStillsCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherStills * This,
            /* [in] */ IBMDSwitcherStillsCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherStillsVtbl;

    interface IBMDSwitcherStills
    {
        CONST_VTBL struct IBMDSwitcherStillsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherStills_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherStills_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherStills_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherStills_GetCount(This,count)	\
    ( (This)->lpVtbl -> GetCount(This,count) ) 

#define IBMDSwitcherStills_IsValid(This,index,valid)	\
    ( (This)->lpVtbl -> IsValid(This,index,valid) ) 

#define IBMDSwitcherStills_GetName(This,index,name)	\
    ( (This)->lpVtbl -> GetName(This,index,name) ) 

#define IBMDSwitcherStills_SetName(This,index,name)	\
    ( (This)->lpVtbl -> SetName(This,index,name) ) 

#define IBMDSwitcherStills_GetHash(This,index,hash)	\
    ( (This)->lpVtbl -> GetHash(This,index,hash) ) 

#define IBMDSwitcherStills_SetInvalid(This,index)	\
    ( (This)->lpVtbl -> SetInvalid(This,index) ) 

#define IBMDSwitcherStills_Lock(This,lockCallback)	\
    ( (This)->lpVtbl -> Lock(This,lockCallback) ) 

#define IBMDSwitcherStills_Unlock(This,lockCallback)	\
    ( (This)->lpVtbl -> Unlock(This,lockCallback) ) 

#define IBMDSwitcherStills_Upload(This,index,name,frame)	\
    ( (This)->lpVtbl -> Upload(This,index,name,frame) ) 

#define IBMDSwitcherStills_Download(This,index)	\
    ( (This)->lpVtbl -> Download(This,index) ) 

#define IBMDSwitcherStills_CancelTransfer(This)	\
    ( (This)->lpVtbl -> CancelTransfer(This) ) 

#define IBMDSwitcherStills_GetProgress(This,progress)	\
    ( (This)->lpVtbl -> GetProgress(This,progress) ) 

#define IBMDSwitcherStills_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherStills_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherStills_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherClipCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherClipCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherClipCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherClipCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("407117B4-B6A8-46D2-9911-43254171B1B7")
    IBMDSwitcherClipCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherMediaPoolEventType eventType,
            /* [in] */ IBMDSwitcherFrame *frame,
            /* [in] */ int frameIndex,
            /* [in] */ IBMDSwitcherAudio *audio,
            /* [in] */ int clipIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherClipCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherClipCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherClipCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherClipCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherClipCallback * This,
            /* [in] */ BMDSwitcherMediaPoolEventType eventType,
            /* [in] */ IBMDSwitcherFrame *frame,
            /* [in] */ int frameIndex,
            /* [in] */ IBMDSwitcherAudio *audio,
            /* [in] */ int clipIndex);
        
        END_INTERFACE
    } IBMDSwitcherClipCallbackVtbl;

    interface IBMDSwitcherClipCallback
    {
        CONST_VTBL struct IBMDSwitcherClipCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherClipCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherClipCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherClipCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherClipCallback_Notify(This,eventType,frame,frameIndex,audio,clipIndex)	\
    ( (This)->lpVtbl -> Notify(This,eventType,frame,frameIndex,audio,clipIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherClipCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherClip_INTERFACE_DEFINED__
#define __IBMDSwitcherClip_INTERFACE_DEFINED__

/* interface IBMDSwitcherClip */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherClip;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94AAF18A-7AF4-4721-8C1E-1843D42644E7")
    IBMDSwitcherClip : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIndex( 
            /* [out] */ unsigned int *index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsValid( 
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValid( 
            /* [in] */ BSTR name,
            /* [in] */ unsigned int frameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInvalid( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameCount( 
            /* [out] */ unsigned int *frameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxFrameCount( 
            /* [out] */ unsigned int *maxFrameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsFrameValid( 
            /* [in] */ unsigned int frameIndex,
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameHash( 
            /* [in] */ unsigned int frameIndex,
            /* [out] */ BMDSwitcherHash *hash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAudioValid( 
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAudioName( 
            /* [in] */ BSTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioHash( 
            /* [out] */ BMDSwitcherHash *hash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAudioInvalid( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Lock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unlock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UploadFrame( 
            /* [in] */ unsigned int frameIndex,
            /* [in] */ IBMDSwitcherFrame *frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadFrame( 
            /* [in] */ unsigned int frameIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UploadAudio( 
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherAudio *audio) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadAudio( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelTransfer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [out] */ double *progress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherClipCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherClipCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherClipVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherClip * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherClip * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIndex )( 
            IBMDSwitcherClip * This,
            /* [out] */ unsigned int *index);
        
        HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IBMDSwitcherClip * This,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IBMDSwitcherClip * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IBMDSwitcherClip * This,
            /* [in] */ BSTR name);
        
        HRESULT ( STDMETHODCALLTYPE *SetValid )( 
            IBMDSwitcherClip * This,
            /* [in] */ BSTR name,
            /* [in] */ unsigned int frameCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetInvalid )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameCount )( 
            IBMDSwitcherClip * This,
            /* [out] */ unsigned int *frameCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaxFrameCount )( 
            IBMDSwitcherClip * This,
            /* [out] */ unsigned int *maxFrameCount);
        
        HRESULT ( STDMETHODCALLTYPE *IsFrameValid )( 
            IBMDSwitcherClip * This,
            /* [in] */ unsigned int frameIndex,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameHash )( 
            IBMDSwitcherClip * This,
            /* [in] */ unsigned int frameIndex,
            /* [out] */ BMDSwitcherHash *hash);
        
        HRESULT ( STDMETHODCALLTYPE *IsAudioValid )( 
            IBMDSwitcherClip * This,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioName )( 
            IBMDSwitcherClip * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetAudioName )( 
            IBMDSwitcherClip * This,
            /* [in] */ BSTR name);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioHash )( 
            IBMDSwitcherClip * This,
            /* [out] */ BMDSwitcherHash *hash);
        
        HRESULT ( STDMETHODCALLTYPE *SetAudioInvalid )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *Lock )( 
            IBMDSwitcherClip * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Unlock )( 
            IBMDSwitcherClip * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *UploadFrame )( 
            IBMDSwitcherClip * This,
            /* [in] */ unsigned int frameIndex,
            /* [in] */ IBMDSwitcherFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *DownloadFrame )( 
            IBMDSwitcherClip * This,
            /* [in] */ unsigned int frameIndex);
        
        HRESULT ( STDMETHODCALLTYPE *UploadAudio )( 
            IBMDSwitcherClip * This,
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherAudio *audio);
        
        HRESULT ( STDMETHODCALLTYPE *DownloadAudio )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *CancelTransfer )( 
            IBMDSwitcherClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IBMDSwitcherClip * This,
            /* [out] */ double *progress);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherClip * This,
            /* [in] */ IBMDSwitcherClipCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherClip * This,
            /* [in] */ IBMDSwitcherClipCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherClipVtbl;

    interface IBMDSwitcherClip
    {
        CONST_VTBL struct IBMDSwitcherClipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherClip_GetIndex(This,index)	\
    ( (This)->lpVtbl -> GetIndex(This,index) ) 

#define IBMDSwitcherClip_IsValid(This,valid)	\
    ( (This)->lpVtbl -> IsValid(This,valid) ) 

#define IBMDSwitcherClip_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IBMDSwitcherClip_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IBMDSwitcherClip_SetValid(This,name,frameCount)	\
    ( (This)->lpVtbl -> SetValid(This,name,frameCount) ) 

#define IBMDSwitcherClip_SetInvalid(This)	\
    ( (This)->lpVtbl -> SetInvalid(This) ) 

#define IBMDSwitcherClip_GetFrameCount(This,frameCount)	\
    ( (This)->lpVtbl -> GetFrameCount(This,frameCount) ) 

#define IBMDSwitcherClip_GetMaxFrameCount(This,maxFrameCount)	\
    ( (This)->lpVtbl -> GetMaxFrameCount(This,maxFrameCount) ) 

#define IBMDSwitcherClip_IsFrameValid(This,frameIndex,valid)	\
    ( (This)->lpVtbl -> IsFrameValid(This,frameIndex,valid) ) 

#define IBMDSwitcherClip_GetFrameHash(This,frameIndex,hash)	\
    ( (This)->lpVtbl -> GetFrameHash(This,frameIndex,hash) ) 

#define IBMDSwitcherClip_IsAudioValid(This,valid)	\
    ( (This)->lpVtbl -> IsAudioValid(This,valid) ) 

#define IBMDSwitcherClip_GetAudioName(This,name)	\
    ( (This)->lpVtbl -> GetAudioName(This,name) ) 

#define IBMDSwitcherClip_SetAudioName(This,name)	\
    ( (This)->lpVtbl -> SetAudioName(This,name) ) 

#define IBMDSwitcherClip_GetAudioHash(This,hash)	\
    ( (This)->lpVtbl -> GetAudioHash(This,hash) ) 

#define IBMDSwitcherClip_SetAudioInvalid(This)	\
    ( (This)->lpVtbl -> SetAudioInvalid(This) ) 

#define IBMDSwitcherClip_Lock(This,lockCallback)	\
    ( (This)->lpVtbl -> Lock(This,lockCallback) ) 

#define IBMDSwitcherClip_Unlock(This,lockCallback)	\
    ( (This)->lpVtbl -> Unlock(This,lockCallback) ) 

#define IBMDSwitcherClip_UploadFrame(This,frameIndex,frame)	\
    ( (This)->lpVtbl -> UploadFrame(This,frameIndex,frame) ) 

#define IBMDSwitcherClip_DownloadFrame(This,frameIndex)	\
    ( (This)->lpVtbl -> DownloadFrame(This,frameIndex) ) 

#define IBMDSwitcherClip_UploadAudio(This,name,audio)	\
    ( (This)->lpVtbl -> UploadAudio(This,name,audio) ) 

#define IBMDSwitcherClip_DownloadAudio(This)	\
    ( (This)->lpVtbl -> DownloadAudio(This) ) 

#define IBMDSwitcherClip_CancelTransfer(This)	\
    ( (This)->lpVtbl -> CancelTransfer(This) ) 

#define IBMDSwitcherClip_GetProgress(This,progress)	\
    ( (This)->lpVtbl -> GetProgress(This,progress) ) 

#define IBMDSwitcherClip_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherClip_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherClip_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPoolCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPoolCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPoolCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPoolCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8617A16-1B17-4FD6-93BF-664FA71F2A50")
    IBMDSwitcherMediaPoolCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ClipFrameMaxCountsChanged( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FrameTotalForClipsChanged( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPoolCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPoolCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPoolCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPoolCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ClipFrameMaxCountsChanged )( 
            IBMDSwitcherMediaPoolCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *FrameTotalForClipsChanged )( 
            IBMDSwitcherMediaPoolCallback * This);
        
        END_INTERFACE
    } IBMDSwitcherMediaPoolCallbackVtbl;

    interface IBMDSwitcherMediaPoolCallback
    {
        CONST_VTBL struct IBMDSwitcherMediaPoolCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPoolCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPoolCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPoolCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPoolCallback_ClipFrameMaxCountsChanged(This)	\
    ( (This)->lpVtbl -> ClipFrameMaxCountsChanged(This) ) 

#define IBMDSwitcherMediaPoolCallback_FrameTotalForClipsChanged(This)	\
    ( (This)->lpVtbl -> FrameTotalForClipsChanged(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPoolCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPool_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPool_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPool */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59A3056E-7B62-46F0-8B78-1FB149F7372C")
    IBMDSwitcherMediaPool : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStills( 
            /* [out] */ IBMDSwitcherStills **stills) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [in] */ unsigned int clipIndex,
            /* [out] */ IBMDSwitcherClip **clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipCount( 
            /* [out] */ unsigned int *clipCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFrame( 
            /* [in] */ BMDSwitcherPixelFormat pixelFormat,
            /* [in] */ unsigned int width,
            /* [in] */ unsigned int height,
            /* [out] */ IBMDSwitcherFrame **frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAudio( 
            /* [in] */ unsigned int sizeBytes,
            /* [out] */ IBMDSwitcherAudio **audio) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameTotalForClips( 
            /* [out] */ unsigned int *total) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipMaxFrameCounts( 
            /* [in] */ unsigned int clipCount,
            /* [out] */ unsigned int *clipMaxFrameCounts) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClipMaxFrameCounts( 
            /* [in] */ unsigned int clipCount,
            /* [in] */ const unsigned int *clipMaxFrameCounts) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPoolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStills )( 
            IBMDSwitcherMediaPool * This,
            /* [out] */ IBMDSwitcherStills **stills);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ unsigned int clipIndex,
            /* [out] */ IBMDSwitcherClip **clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipCount )( 
            IBMDSwitcherMediaPool * This,
            /* [out] */ unsigned int *clipCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFrame )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ BMDSwitcherPixelFormat pixelFormat,
            /* [in] */ unsigned int width,
            /* [in] */ unsigned int height,
            /* [out] */ IBMDSwitcherFrame **frame);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAudio )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ unsigned int sizeBytes,
            /* [out] */ IBMDSwitcherAudio **audio);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameTotalForClips )( 
            IBMDSwitcherMediaPool * This,
            /* [out] */ unsigned int *total);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipMaxFrameCounts )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ unsigned int clipCount,
            /* [out] */ unsigned int *clipMaxFrameCounts);
        
        HRESULT ( STDMETHODCALLTYPE *SetClipMaxFrameCounts )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ unsigned int clipCount,
            /* [in] */ const unsigned int *clipMaxFrameCounts);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IBMDSwitcherMediaPool * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMediaPool * This,
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMediaPoolVtbl;

    interface IBMDSwitcherMediaPool
    {
        CONST_VTBL struct IBMDSwitcherMediaPoolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPool_GetStills(This,stills)	\
    ( (This)->lpVtbl -> GetStills(This,stills) ) 

#define IBMDSwitcherMediaPool_GetClip(This,clipIndex,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clipIndex,clip) ) 

#define IBMDSwitcherMediaPool_GetClipCount(This,clipCount)	\
    ( (This)->lpVtbl -> GetClipCount(This,clipCount) ) 

#define IBMDSwitcherMediaPool_CreateFrame(This,pixelFormat,width,height,frame)	\
    ( (This)->lpVtbl -> CreateFrame(This,pixelFormat,width,height,frame) ) 

#define IBMDSwitcherMediaPool_CreateAudio(This,sizeBytes,audio)	\
    ( (This)->lpVtbl -> CreateAudio(This,sizeBytes,audio) ) 

#define IBMDSwitcherMediaPool_GetFrameTotalForClips(This,total)	\
    ( (This)->lpVtbl -> GetFrameTotalForClips(This,total) ) 

#define IBMDSwitcherMediaPool_GetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts)	\
    ( (This)->lpVtbl -> GetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts) ) 

#define IBMDSwitcherMediaPool_SetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts)	\
    ( (This)->lpVtbl -> SetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts) ) 

#define IBMDSwitcherMediaPool_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IBMDSwitcherMediaPool_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMediaPool_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPool_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherCameraControlParameterIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherCameraControlParameterIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherCameraControlParameterIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherCameraControlParameterIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B6E289F-0847-480A-A0BD-E8FB78A5505A")
    IBMDSwitcherCameraControlParameterIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ unsigned int *destinationDevice,
            /* [out] */ unsigned int *category,
            /* [out] */ unsigned int *parameter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherCameraControlParameterIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherCameraControlParameterIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherCameraControlParameterIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherCameraControlParameterIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherCameraControlParameterIterator * This,
            /* [out] */ unsigned int *destinationDevice,
            /* [out] */ unsigned int *category,
            /* [out] */ unsigned int *parameter);
        
        END_INTERFACE
    } IBMDSwitcherCameraControlParameterIteratorVtbl;

    interface IBMDSwitcherCameraControlParameterIterator
    {
        CONST_VTBL struct IBMDSwitcherCameraControlParameterIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherCameraControlParameterIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherCameraControlParameterIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherCameraControlParameterIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherCameraControlParameterIterator_Next(This,destinationDevice,category,parameter)	\
    ( (This)->lpVtbl -> Next(This,destinationDevice,category,parameter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherCameraControlParameterIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherCameraControlCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherCameraControlCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherCameraControlCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherCameraControlCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("90337CAC-9376-4A62-A58F-10936130970B")
    IBMDSwitcherCameraControlCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherCameraControlEventType eventType,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherCameraControlCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherCameraControlCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherCameraControlCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherCameraControlCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherCameraControlCallback * This,
            /* [in] */ BMDSwitcherCameraControlEventType eventType,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter);
        
        END_INTERFACE
    } IBMDSwitcherCameraControlCallbackVtbl;

    interface IBMDSwitcherCameraControlCallback
    {
        CONST_VTBL struct IBMDSwitcherCameraControlCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherCameraControlCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherCameraControlCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherCameraControlCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherCameraControlCallback_Notify(This,eventType,destinationDevice,category,parameter)	\
    ( (This)->lpVtbl -> Notify(This,eventType,destinationDevice,category,parameter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherCameraControlCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherCameraControl_INTERFACE_DEFINED__
#define __IBMDSwitcherCameraControl_INTERFACE_DEFINED__

/* interface IBMDSwitcherCameraControl */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherCameraControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("889111CC-02CA-4268-ADD1-569166F0F0D9")
    IBMDSwitcherCameraControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPeriodicFlushInterval( 
            /* [out] */ unsigned int *intervalMs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPeriodicFlushInterval( 
            /* [in] */ unsigned int intervalMs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParameterInfo( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BMDSwitcherCameraControlParameterType *type,
            /* [out] */ unsigned int *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParameterPeriodicFlushEnabled( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetParameterPeriodicFlushEnabled( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ BOOL enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const BOOL *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ToggleFlags( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const BOOL *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ BOOL *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt8s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const signed char *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetInt8s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const signed char *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt8s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ signed char *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt16s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const short *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetInt16s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const short *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt16s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ short *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt32s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const int *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetInt32s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const int *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt32s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ int *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt64s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const long long *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetInt64s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const long long *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt64s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ long long *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetString( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ BSTR value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetFloats( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const double *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFloats( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const double *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFloats( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ double *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherCameraControlCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherCameraControlCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherCameraControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherCameraControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherCameraControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPeriodicFlushInterval )( 
            IBMDSwitcherCameraControl * This,
            /* [out] */ unsigned int *intervalMs);
        
        HRESULT ( STDMETHODCALLTYPE *SetPeriodicFlushInterval )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int intervalMs);
        
        HRESULT ( STDMETHODCALLTYPE *GetParameterInfo )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BMDSwitcherCameraControlParameterType *type,
            /* [out] */ unsigned int *count);
        
        HRESULT ( STDMETHODCALLTYPE *GetParameterPeriodicFlushEnabled )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetParameterPeriodicFlushEnabled )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ BOOL enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const BOOL *values);
        
        HRESULT ( STDMETHODCALLTYPE *ToggleFlags )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const BOOL *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ BOOL *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt8s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const signed char *values);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetInt8s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const signed char *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt8s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ signed char *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt16s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const short *values);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetInt16s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const short *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt16s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ short *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt32s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const int *values);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetInt32s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const int *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt32s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ int *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt64s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const long long *values);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetInt64s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const long long *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt64s )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ long long *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetString )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ BSTR value);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BSTR *value);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetFloats )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const double *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetFloats )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const double *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetFloats )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ double *values);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ IBMDSwitcherCameraControlCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherCameraControl * This,
            /* [in] */ IBMDSwitcherCameraControlCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherCameraControlVtbl;

    interface IBMDSwitcherCameraControl
    {
        CONST_VTBL struct IBMDSwitcherCameraControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherCameraControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherCameraControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherCameraControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherCameraControl_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcherCameraControl_GetPeriodicFlushInterval(This,intervalMs)	\
    ( (This)->lpVtbl -> GetPeriodicFlushInterval(This,intervalMs) ) 

#define IBMDSwitcherCameraControl_SetPeriodicFlushInterval(This,intervalMs)	\
    ( (This)->lpVtbl -> SetPeriodicFlushInterval(This,intervalMs) ) 

#define IBMDSwitcherCameraControl_GetParameterInfo(This,destinationDevice,category,parameter,type,count)	\
    ( (This)->lpVtbl -> GetParameterInfo(This,destinationDevice,category,parameter,type,count) ) 

#define IBMDSwitcherCameraControl_GetParameterPeriodicFlushEnabled(This,destinationDevice,category,parameter,enabled)	\
    ( (This)->lpVtbl -> GetParameterPeriodicFlushEnabled(This,destinationDevice,category,parameter,enabled) ) 

#define IBMDSwitcherCameraControl_SetParameterPeriodicFlushEnabled(This,destinationDevice,category,parameter,enabled)	\
    ( (This)->lpVtbl -> SetParameterPeriodicFlushEnabled(This,destinationDevice,category,parameter,enabled) ) 

#define IBMDSwitcherCameraControl_SetFlags(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetFlags(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_ToggleFlags(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> ToggleFlags(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_GetFlags(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetFlags(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_SetInt8s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetInt8s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_OffsetInt8s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> OffsetInt8s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_GetInt8s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetInt8s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_SetInt16s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetInt16s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_OffsetInt16s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> OffsetInt16s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_GetInt16s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetInt16s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_SetInt32s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetInt32s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_OffsetInt32s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> OffsetInt32s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_GetInt32s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetInt32s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_SetInt64s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetInt64s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_OffsetInt64s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> OffsetInt64s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_GetInt64s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetInt64s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_SetString(This,destinationDevice,category,parameter,value)	\
    ( (This)->lpVtbl -> SetString(This,destinationDevice,category,parameter,value) ) 

#define IBMDSwitcherCameraControl_GetString(This,destinationDevice,category,parameter,value)	\
    ( (This)->lpVtbl -> GetString(This,destinationDevice,category,parameter,value) ) 

#define IBMDSwitcherCameraControl_OffsetFloats(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> OffsetFloats(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_SetFloats(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetFloats(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_GetFloats(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetFloats(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherCameraControl_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherCameraControl_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMacro_INTERFACE_DEFINED__
#define __IBMDSwitcherMacro_INTERFACE_DEFINED__

/* interface IBMDSwitcherMacro */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMacro;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F1DF648-CB02-48D5-B5EB-B857BBD626A7")
    IBMDSwitcherMacro : public IUnknown
    {
    public:
        virtual int STDMETHODCALLTYPE GetSize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBytes( 
            /* [out] */ void **buffer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMacroVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMacro * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMacro * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMacro * This);
        
        int ( STDMETHODCALLTYPE *GetSize )( 
            IBMDSwitcherMacro * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBytes )( 
            IBMDSwitcherMacro * This,
            /* [out] */ void **buffer);
        
        END_INTERFACE
    } IBMDSwitcherMacroVtbl;

    interface IBMDSwitcherMacro
    {
        CONST_VTBL struct IBMDSwitcherMacroVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMacro_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMacro_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMacro_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMacro_GetSize(This)	\
    ( (This)->lpVtbl -> GetSize(This) ) 

#define IBMDSwitcherMacro_GetBytes(This,buffer)	\
    ( (This)->lpVtbl -> GetBytes(This,buffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMacro_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransferMacro_INTERFACE_DEFINED__
#define __IBMDSwitcherTransferMacro_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransferMacro */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransferMacro;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9BAD28DB-F0CC-4696-82EE-B1E3E5A7C129")
    IBMDSwitcherTransferMacro : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [out] */ double *progress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMacro( 
            /* [out] */ IBMDSwitcherMacro **macro) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransferMacroVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransferMacro * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransferMacro * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransferMacro * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IBMDSwitcherTransferMacro * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IBMDSwitcherTransferMacro * This,
            /* [out] */ double *progress);
        
        HRESULT ( STDMETHODCALLTYPE *GetMacro )( 
            IBMDSwitcherTransferMacro * This,
            /* [out] */ IBMDSwitcherMacro **macro);
        
        END_INTERFACE
    } IBMDSwitcherTransferMacroVtbl;

    interface IBMDSwitcherTransferMacro
    {
        CONST_VTBL struct IBMDSwitcherTransferMacroVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransferMacro_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransferMacro_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransferMacro_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransferMacro_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IBMDSwitcherTransferMacro_GetProgress(This,progress)	\
    ( (This)->lpVtbl -> GetProgress(This,progress) ) 

#define IBMDSwitcherTransferMacro_GetMacro(This,macro)	\
    ( (This)->lpVtbl -> GetMacro(This,macro) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransferMacro_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMacroPoolCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMacroPoolCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMacroPoolCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMacroPoolCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E29294A0-FB4C-418D-9AE1-C6CBA288104F")
    IBMDSwitcherMacroPoolCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherMacroPoolEventType eventType,
            /* [in] */ unsigned int index,
            /* [in] */ IBMDSwitcherTransferMacro *macroTransfer) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMacroPoolCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMacroPoolCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMacroPoolCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMacroPoolCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherMacroPoolCallback * This,
            /* [in] */ BMDSwitcherMacroPoolEventType eventType,
            /* [in] */ unsigned int index,
            /* [in] */ IBMDSwitcherTransferMacro *macroTransfer);
        
        END_INTERFACE
    } IBMDSwitcherMacroPoolCallbackVtbl;

    interface IBMDSwitcherMacroPoolCallback
    {
        CONST_VTBL struct IBMDSwitcherMacroPoolCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMacroPoolCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMacroPoolCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMacroPoolCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMacroPoolCallback_Notify(This,eventType,index,macroTransfer)	\
    ( (This)->lpVtbl -> Notify(This,eventType,index,macroTransfer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMacroPoolCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMacroPool_INTERFACE_DEFINED__
#define __IBMDSwitcherMacroPool_INTERFACE_DEFINED__

/* interface IBMDSwitcherMacroPool */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMacroPool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5FA28BFC-7934-42F4-BED8-8744D62D210F")
    IBMDSwitcherMacroPool : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMaxCount( 
            /* [out] */ unsigned int *maxCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsValid( 
            /* [in] */ unsigned int index,
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasUnsupportedOps( 
            /* [in] */ unsigned int index,
            /* [out] */ BOOL *hasUnsupportedOps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ unsigned int index,
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [in] */ unsigned int index,
            /* [out] */ BSTR *description) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [in] */ unsigned int index,
            /* [in] */ BSTR description) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateMacro( 
            /* [in] */ unsigned int sizeBytes,
            /* [out] */ IBMDSwitcherMacro **macro) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Upload( 
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name,
            /* [in] */ BSTR description,
            /* [in] */ IBMDSwitcherMacro *macro,
            /* [out] */ IBMDSwitcherTransferMacro **macroTransfer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Download( 
            /* [in] */ unsigned int index,
            /* [out] */ IBMDSwitcherTransferMacro **macroTransfer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMacroPoolCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMacroPoolCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMacroPoolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMacroPool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMacroPool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaxCount )( 
            IBMDSwitcherMacroPool * This,
            /* [out] */ unsigned int *maxCount);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int index,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *HasUnsupportedOps )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int index,
            /* [out] */ BOOL *hasUnsupportedOps);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int index,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int index,
            /* [out] */ BSTR *description);
        
        HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int index,
            /* [in] */ BSTR description);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMacro )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int sizeBytes,
            /* [out] */ IBMDSwitcherMacro **macro);
        
        HRESULT ( STDMETHODCALLTYPE *Upload )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name,
            /* [in] */ BSTR description,
            /* [in] */ IBMDSwitcherMacro *macro,
            /* [out] */ IBMDSwitcherTransferMacro **macroTransfer);
        
        HRESULT ( STDMETHODCALLTYPE *Download )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ unsigned int index,
            /* [out] */ IBMDSwitcherTransferMacro **macroTransfer);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ IBMDSwitcherMacroPoolCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMacroPool * This,
            /* [in] */ IBMDSwitcherMacroPoolCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMacroPoolVtbl;

    interface IBMDSwitcherMacroPool
    {
        CONST_VTBL struct IBMDSwitcherMacroPoolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMacroPool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMacroPool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMacroPool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMacroPool_GetMaxCount(This,maxCount)	\
    ( (This)->lpVtbl -> GetMaxCount(This,maxCount) ) 

#define IBMDSwitcherMacroPool_Delete(This,index)	\
    ( (This)->lpVtbl -> Delete(This,index) ) 

#define IBMDSwitcherMacroPool_IsValid(This,index,valid)	\
    ( (This)->lpVtbl -> IsValid(This,index,valid) ) 

#define IBMDSwitcherMacroPool_HasUnsupportedOps(This,index,hasUnsupportedOps)	\
    ( (This)->lpVtbl -> HasUnsupportedOps(This,index,hasUnsupportedOps) ) 

#define IBMDSwitcherMacroPool_GetName(This,index,name)	\
    ( (This)->lpVtbl -> GetName(This,index,name) ) 

#define IBMDSwitcherMacroPool_SetName(This,index,name)	\
    ( (This)->lpVtbl -> SetName(This,index,name) ) 

#define IBMDSwitcherMacroPool_GetDescription(This,index,description)	\
    ( (This)->lpVtbl -> GetDescription(This,index,description) ) 

#define IBMDSwitcherMacroPool_SetDescription(This,index,description)	\
    ( (This)->lpVtbl -> SetDescription(This,index,description) ) 

#define IBMDSwitcherMacroPool_CreateMacro(This,sizeBytes,macro)	\
    ( (This)->lpVtbl -> CreateMacro(This,sizeBytes,macro) ) 

#define IBMDSwitcherMacroPool_Upload(This,index,name,description,macro,macroTransfer)	\
    ( (This)->lpVtbl -> Upload(This,index,name,description,macro,macroTransfer) ) 

#define IBMDSwitcherMacroPool_Download(This,index,macroTransfer)	\
    ( (This)->lpVtbl -> Download(This,index,macroTransfer) ) 

#define IBMDSwitcherMacroPool_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMacroPool_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMacroPool_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMacroControlCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMacroControlCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMacroControlCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMacroControlCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F6A62317-60F6-4D5C-A5DD-2DC372B9F4FF")
    IBMDSwitcherMacroControlCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherMacroControlEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMacroControlCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMacroControlCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMacroControlCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMacroControlCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherMacroControlCallback * This,
            /* [in] */ BMDSwitcherMacroControlEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherMacroControlCallbackVtbl;

    interface IBMDSwitcherMacroControlCallback
    {
        CONST_VTBL struct IBMDSwitcherMacroControlCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMacroControlCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMacroControlCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMacroControlCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMacroControlCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMacroControlCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMacroControl_INTERFACE_DEFINED__
#define __IBMDSwitcherMacroControl_INTERFACE_DEFINED__

/* interface IBMDSwitcherMacroControl */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMacroControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E23E657-A7F0-4C4A-BCBE-4B8D3DD061AC")
    IBMDSwitcherMacroControl : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLoop( 
            /* [out] */ BOOL *loop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLoop( 
            /* [in] */ BOOL loop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResumeRunning( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopRunning( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Record( 
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name,
            /* [in] */ BSTR description) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RecordUserWait( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RecordPause( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopRecording( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRunStatus( 
            /* [out] */ BMDSwitcherMacroRunStatus *status,
            /* [out] */ BOOL *loop,
            /* [out] */ unsigned int *index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecordStatus( 
            /* [out] */ BMDSwitcherMacroRecordStatus *status,
            /* [out] */ unsigned int *index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMacroControlCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMacroControlCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMacroControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMacroControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMacroControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMacroControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Run )( 
            IBMDSwitcherMacroControl * This,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *GetLoop )( 
            IBMDSwitcherMacroControl * This,
            /* [out] */ BOOL *loop);
        
        HRESULT ( STDMETHODCALLTYPE *SetLoop )( 
            IBMDSwitcherMacroControl * This,
            /* [in] */ BOOL loop);
        
        HRESULT ( STDMETHODCALLTYPE *ResumeRunning )( 
            IBMDSwitcherMacroControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *StopRunning )( 
            IBMDSwitcherMacroControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *Record )( 
            IBMDSwitcherMacroControl * This,
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name,
            /* [in] */ BSTR description);
        
        HRESULT ( STDMETHODCALLTYPE *RecordUserWait )( 
            IBMDSwitcherMacroControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *RecordPause )( 
            IBMDSwitcherMacroControl * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *StopRecording )( 
            IBMDSwitcherMacroControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRunStatus )( 
            IBMDSwitcherMacroControl * This,
            /* [out] */ BMDSwitcherMacroRunStatus *status,
            /* [out] */ BOOL *loop,
            /* [out] */ unsigned int *index);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecordStatus )( 
            IBMDSwitcherMacroControl * This,
            /* [out] */ BMDSwitcherMacroRecordStatus *status,
            /* [out] */ unsigned int *index);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMacroControl * This,
            /* [in] */ IBMDSwitcherMacroControlCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMacroControl * This,
            /* [in] */ IBMDSwitcherMacroControlCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMacroControlVtbl;

    interface IBMDSwitcherMacroControl
    {
        CONST_VTBL struct IBMDSwitcherMacroControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMacroControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMacroControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMacroControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMacroControl_Run(This,index)	\
    ( (This)->lpVtbl -> Run(This,index) ) 

#define IBMDSwitcherMacroControl_GetLoop(This,loop)	\
    ( (This)->lpVtbl -> GetLoop(This,loop) ) 

#define IBMDSwitcherMacroControl_SetLoop(This,loop)	\
    ( (This)->lpVtbl -> SetLoop(This,loop) ) 

#define IBMDSwitcherMacroControl_ResumeRunning(This)	\
    ( (This)->lpVtbl -> ResumeRunning(This) ) 

#define IBMDSwitcherMacroControl_StopRunning(This)	\
    ( (This)->lpVtbl -> StopRunning(This) ) 

#define IBMDSwitcherMacroControl_Record(This,index,name,description)	\
    ( (This)->lpVtbl -> Record(This,index,name,description) ) 

#define IBMDSwitcherMacroControl_RecordUserWait(This)	\
    ( (This)->lpVtbl -> RecordUserWait(This) ) 

#define IBMDSwitcherMacroControl_RecordPause(This,frames)	\
    ( (This)->lpVtbl -> RecordPause(This,frames) ) 

#define IBMDSwitcherMacroControl_StopRecording(This)	\
    ( (This)->lpVtbl -> StopRecording(This) ) 

#define IBMDSwitcherMacroControl_GetRunStatus(This,status,loop,index)	\
    ( (This)->lpVtbl -> GetRunStatus(This,status,loop,index) ) 

#define IBMDSwitcherMacroControl_GetRecordStatus(This,status,index)	\
    ( (This)->lpVtbl -> GetRecordStatus(This,status,index) ) 

#define IBMDSwitcherMacroControl_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMacroControl_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMacroControl_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherSerialPortCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherSerialPortCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherSerialPortCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherSerialPortCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9CEBFC3C-77DF-45AC-A1B2-A9A6DF6ACE42")
    IBMDSwitcherSerialPortCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherSerialPortEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherSerialPortCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherSerialPortCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherSerialPortCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherSerialPortCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherSerialPortCallback * This,
            /* [in] */ BMDSwitcherSerialPortEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherSerialPortCallbackVtbl;

    interface IBMDSwitcherSerialPortCallback
    {
        CONST_VTBL struct IBMDSwitcherSerialPortCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherSerialPortCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherSerialPortCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherSerialPortCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherSerialPortCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherSerialPortCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherSerialPort_INTERFACE_DEFINED__
#define __IBMDSwitcherSerialPort_INTERFACE_DEFINED__

/* interface IBMDSwitcherSerialPort */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherSerialPort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14BEA77D-3F69-4FBF-A331-F5EA9FF6A42E")
    IBMDSwitcherSerialPort : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetFunction( 
            /* [in] */ BMDSwitcherSerialPortFunction function) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFunction( 
            /* [out] */ BMDSwitcherSerialPortFunction *function) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportFunction( 
            /* [in] */ BMDSwitcherSerialPortFunction function,
            /* [out] */ BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherSerialPortCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherSerialPortCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherSerialPortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherSerialPort * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherSerialPort * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherSerialPort * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFunction )( 
            IBMDSwitcherSerialPort * This,
            /* [in] */ BMDSwitcherSerialPortFunction function);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunction )( 
            IBMDSwitcherSerialPort * This,
            /* [out] */ BMDSwitcherSerialPortFunction *function);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportFunction )( 
            IBMDSwitcherSerialPort * This,
            /* [in] */ BMDSwitcherSerialPortFunction function,
            /* [out] */ BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherSerialPort * This,
            /* [in] */ IBMDSwitcherSerialPortCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherSerialPort * This,
            /* [in] */ IBMDSwitcherSerialPortCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherSerialPortVtbl;

    interface IBMDSwitcherSerialPort
    {
        CONST_VTBL struct IBMDSwitcherSerialPortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherSerialPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherSerialPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherSerialPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherSerialPort_SetFunction(This,function)	\
    ( (This)->lpVtbl -> SetFunction(This,function) ) 

#define IBMDSwitcherSerialPort_GetFunction(This,function)	\
    ( (This)->lpVtbl -> GetFunction(This,function) ) 

#define IBMDSwitcherSerialPort_DoesSupportFunction(This,function,supported)	\
    ( (This)->lpVtbl -> DoesSupportFunction(This,function,supported) ) 

#define IBMDSwitcherSerialPort_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherSerialPort_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherSerialPort_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckClipCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherHyperDeckClipCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherHyperDeckClipCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherHyperDeckClipCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("473830E4-53D9-4924-9DC1-0FC0239EDBE9")
    IBMDSwitcherHyperDeckClipCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherHyperDeckClipEventType eventType,
            /* [in] */ BMDSwitcherHyperDeckClipId clipId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherHyperDeckClipCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherHyperDeckClipCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherHyperDeckClipCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherHyperDeckClipCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherHyperDeckClipCallback * This,
            /* [in] */ BMDSwitcherHyperDeckClipEventType eventType,
            /* [in] */ BMDSwitcherHyperDeckClipId clipId);
        
        END_INTERFACE
    } IBMDSwitcherHyperDeckClipCallbackVtbl;

    interface IBMDSwitcherHyperDeckClipCallback
    {
        CONST_VTBL struct IBMDSwitcherHyperDeckClipCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherHyperDeckClipCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherHyperDeckClipCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherHyperDeckClipCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherHyperDeckClipCallback_Notify(This,eventType,clipId)	\
    ( (This)->lpVtbl -> Notify(This,eventType,clipId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherHyperDeckClipCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckClip_INTERFACE_DEFINED__
#define __IBMDSwitcherHyperDeckClip_INTERFACE_DEFINED__

/* interface IBMDSwitcherHyperDeckClip */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherHyperDeckClip;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DFBE7482-B24A-4BF1-92AD-7EAF1F5F2AE8")
    IBMDSwitcherHyperDeckClip : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsValid( 
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsInfoAvailable( 
            /* [out] */ BOOL *infoAvailable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetId( 
            /* [out] */ BMDSwitcherHyperDeckClipId *clipId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDuration( 
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTimelineStart( 
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTimelineEnd( 
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherHyperDeckClipCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherHyperDeckClipCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherHyperDeckClipVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherHyperDeckClip * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherHyperDeckClip * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *IsInfoAvailable )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [out] */ BOOL *infoAvailable);
        
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [out] */ BMDSwitcherHyperDeckClipId *clipId);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetDuration )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimelineStart )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimelineEnd )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [in] */ IBMDSwitcherHyperDeckClipCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherHyperDeckClip * This,
            /* [in] */ IBMDSwitcherHyperDeckClipCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherHyperDeckClipVtbl;

    interface IBMDSwitcherHyperDeckClip
    {
        CONST_VTBL struct IBMDSwitcherHyperDeckClipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherHyperDeckClip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherHyperDeckClip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherHyperDeckClip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherHyperDeckClip_IsValid(This,valid)	\
    ( (This)->lpVtbl -> IsValid(This,valid) ) 

#define IBMDSwitcherHyperDeckClip_IsInfoAvailable(This,infoAvailable)	\
    ( (This)->lpVtbl -> IsInfoAvailable(This,infoAvailable) ) 

#define IBMDSwitcherHyperDeckClip_GetId(This,clipId)	\
    ( (This)->lpVtbl -> GetId(This,clipId) ) 

#define IBMDSwitcherHyperDeckClip_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IBMDSwitcherHyperDeckClip_GetDuration(This,hours,minutes,seconds,frames)	\
    ( (This)->lpVtbl -> GetDuration(This,hours,minutes,seconds,frames) ) 

#define IBMDSwitcherHyperDeckClip_GetTimelineStart(This,hours,minutes,seconds,frames)	\
    ( (This)->lpVtbl -> GetTimelineStart(This,hours,minutes,seconds,frames) ) 

#define IBMDSwitcherHyperDeckClip_GetTimelineEnd(This,hours,minutes,seconds,frames)	\
    ( (This)->lpVtbl -> GetTimelineEnd(This,hours,minutes,seconds,frames) ) 

#define IBMDSwitcherHyperDeckClip_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherHyperDeckClip_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherHyperDeckClip_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckClipIterator_INTERFACE_DEFINED__
#define __IBMDSwitcherHyperDeckClipIterator_INTERFACE_DEFINED__

/* interface IBMDSwitcherHyperDeckClipIterator */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherHyperDeckClipIterator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("162A6BFE-8290-4EAC-95E4-BA109D7BA4EC")
    IBMDSwitcherHyperDeckClipIterator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherHyperDeckClip **clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ BMDSwitcherHyperDeckClipId clipId,
            /* [out] */ IBMDSwitcherHyperDeckClip **clip) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherHyperDeckClipIteratorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherHyperDeckClipIterator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherHyperDeckClipIterator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherHyperDeckClipIterator * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherHyperDeckClipIterator * This,
            /* [out] */ IBMDSwitcherHyperDeckClip **clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IBMDSwitcherHyperDeckClipIterator * This,
            /* [in] */ BMDSwitcherHyperDeckClipId clipId,
            /* [out] */ IBMDSwitcherHyperDeckClip **clip);
        
        END_INTERFACE
    } IBMDSwitcherHyperDeckClipIteratorVtbl;

    interface IBMDSwitcherHyperDeckClipIterator
    {
        CONST_VTBL struct IBMDSwitcherHyperDeckClipIteratorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherHyperDeckClipIterator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherHyperDeckClipIterator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherHyperDeckClipIterator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherHyperDeckClipIterator_Next(This,clip)	\
    ( (This)->lpVtbl -> Next(This,clip) ) 

#define IBMDSwitcherHyperDeckClipIterator_GetById(This,clipId,clip)	\
    ( (This)->lpVtbl -> GetById(This,clipId,clip) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherHyperDeckClipIterator_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeckCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherHyperDeckCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherHyperDeckCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherHyperDeckCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F745EBDF-F868-4787-B2D4-50064A5D6597")
    IBMDSwitcherHyperDeckCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherHyperDeckEventType eventType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyError( 
            /* [in] */ BMDSwitcherHyperDeckErrorType errorType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherHyperDeckCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherHyperDeckCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherHyperDeckCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherHyperDeckCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherHyperDeckCallback * This,
            /* [in] */ BMDSwitcherHyperDeckEventType eventType);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyError )( 
            IBMDSwitcherHyperDeckCallback * This,
            /* [in] */ BMDSwitcherHyperDeckErrorType errorType);
        
        END_INTERFACE
    } IBMDSwitcherHyperDeckCallbackVtbl;

    interface IBMDSwitcherHyperDeckCallback
    {
        CONST_VTBL struct IBMDSwitcherHyperDeckCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherHyperDeckCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherHyperDeckCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherHyperDeckCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherHyperDeckCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#define IBMDSwitcherHyperDeckCallback_NotifyError(This,errorType)	\
    ( (This)->lpVtbl -> NotifyError(This,errorType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherHyperDeckCallback_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherHyperDeck_INTERFACE_DEFINED__
#define __IBMDSwitcherHyperDeck_INTERFACE_DEFINED__

/* interface IBMDSwitcherHyperDeck */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherHyperDeck;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6BB0F7E1-2013-4C8F-A4C0-1016B0C37D14")
    IBMDSwitcherHyperDeck : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetId( 
            /* [out] */ BMDSwitcherHyperDeckId *hyperDeckId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConnectionStatus( 
            /* [out] */ BMDSwitcherHyperDeckConnectionStatus *status) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRemoteAccessEnabled( 
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStorageMediaCount( 
            /* [out] */ unsigned int *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStorageMediaState( 
            /* [in] */ unsigned int storageMediaId,
            /* [out] */ BMDSwitcherHyperDeckStorageMediaState *state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetActiveStorageMedia( 
            /* [out] */ int *index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetActiveStorageMedia( 
            /* [in] */ int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipCount( 
            /* [out] */ unsigned int *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSwitcherInput( 
            /* [out] */ BMDSwitcherInputId *inputId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSwitcherInput( 
            /* [in] */ BMDSwitcherInputId inputId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameRate( 
            /* [out] */ unsigned int *frameRate,
            /* [out] */ unsigned int *timeScale) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsInterlacedVideo( 
            /* [out] */ BOOL *isInterlaced) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsDropFrameTimeCode( 
            /* [out] */ BOOL *isDropFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPlayerState( 
            /* [out] */ BMDSwitcherHyperDeckPlayerState *state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentClip( 
            /* [out] */ BMDSwitcherHyperDeckClipId *clipId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentClip( 
            /* [in] */ BMDSwitcherHyperDeckClipId clipId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentClipTime( 
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentClipTime( 
            /* [in] */ unsigned short hours,
            /* [in] */ unsigned char minutes,
            /* [in] */ unsigned char seconds,
            /* [in] */ unsigned char frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentTimelineTime( 
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentTimelineTime( 
            /* [in] */ unsigned short hours,
            /* [in] */ unsigned char minutes,
            /* [in] */ unsigned char seconds,
            /* [in] */ unsigned char frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEstimatedRecordTimeRemaining( 
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Play( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Record( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shuttle( 
            /* [in] */ int speedPercent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShuttleSpeed( 
            /* [out] */ int *speedPercent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Jog( 
            /* [in] */ int frameDelta) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLoopedPlayback( 
            /* [out] */ BOOL *loop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLoopedPlayback( 
            /* [in] */ BOOL loop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSingleClipPlayback( 
            /* [out] */ BOOL *single) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSingleClipPlayback( 
            /* [in] */ BOOL single) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAutoRollOnTake( 
            /* [out] */ BOOL *autoRollOnTake) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAutoRollOnTake( 
            /* [in] */ BOOL autoRollOnTake) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAutoRollOnTakeFrameDelay( 
            /* [out] */ unsigned short *frameDelay) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAutoRollOnTakeFrameDelay( 
            /* [in] */ unsigned short frameDelay) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNetworkAddress( 
            /* [out] */ unsigned int *address) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNetworkAddress( 
            /* [in] */ unsigned int address) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherHyperDeckCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherHyperDeckCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherHyperDeckVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherHyperDeck * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherHyperDeck * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetId )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BMDSwitcherHyperDeckId *hyperDeckId);
        
        HRESULT ( STDMETHODCALLTYPE *GetConnectionStatus )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BMDSwitcherHyperDeckConnectionStatus *status);
        
        HRESULT ( STDMETHODCALLTYPE *IsRemoteAccessEnabled )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageMediaCount )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ unsigned int *count);
        
        HRESULT ( STDMETHODCALLTYPE *GetStorageMediaState )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ unsigned int storageMediaId,
            /* [out] */ BMDSwitcherHyperDeckStorageMediaState *state);
        
        HRESULT ( STDMETHODCALLTYPE *GetActiveStorageMedia )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ int *index);
        
        HRESULT ( STDMETHODCALLTYPE *SetActiveStorageMedia )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ int index);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipCount )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ unsigned int *count);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetSwitcherInput )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BMDSwitcherInputId *inputId);
        
        HRESULT ( STDMETHODCALLTYPE *SetSwitcherInput )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ BMDSwitcherInputId inputId);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameRate )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ unsigned int *frameRate,
            /* [out] */ unsigned int *timeScale);
        
        HRESULT ( STDMETHODCALLTYPE *IsInterlacedVideo )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BOOL *isInterlaced);
        
        HRESULT ( STDMETHODCALLTYPE *IsDropFrameTimeCode )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BOOL *isDropFrame);
        
        HRESULT ( STDMETHODCALLTYPE *GetPlayerState )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BMDSwitcherHyperDeckPlayerState *state);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentClip )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BMDSwitcherHyperDeckClipId *clipId);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentClip )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ BMDSwitcherHyperDeckClipId clipId);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentClipTime )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentClipTime )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ unsigned short hours,
            /* [in] */ unsigned char minutes,
            /* [in] */ unsigned char seconds,
            /* [in] */ unsigned char frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentTimelineTime )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentTimelineTime )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ unsigned short hours,
            /* [in] */ unsigned char minutes,
            /* [in] */ unsigned char seconds,
            /* [in] */ unsigned char frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetEstimatedRecordTimeRemaining )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ unsigned short *hours,
            /* [out] */ unsigned char *minutes,
            /* [out] */ unsigned char *seconds,
            /* [out] */ unsigned char *frames);
        
        HRESULT ( STDMETHODCALLTYPE *Play )( 
            IBMDSwitcherHyperDeck * This);
        
        HRESULT ( STDMETHODCALLTYPE *Record )( 
            IBMDSwitcherHyperDeck * This);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IBMDSwitcherHyperDeck * This);
        
        HRESULT ( STDMETHODCALLTYPE *Shuttle )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ int speedPercent);
        
        HRESULT ( STDMETHODCALLTYPE *GetShuttleSpeed )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ int *speedPercent);
        
        HRESULT ( STDMETHODCALLTYPE *Jog )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ int frameDelta);
        
        HRESULT ( STDMETHODCALLTYPE *GetLoopedPlayback )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BOOL *loop);
        
        HRESULT ( STDMETHODCALLTYPE *SetLoopedPlayback )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ BOOL loop);
        
        HRESULT ( STDMETHODCALLTYPE *GetSingleClipPlayback )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BOOL *single);
        
        HRESULT ( STDMETHODCALLTYPE *SetSingleClipPlayback )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ BOOL single);
        
        HRESULT ( STDMETHODCALLTYPE *GetAutoRollOnTake )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ BOOL *autoRollOnTake);
        
        HRESULT ( STDMETHODCALLTYPE *SetAutoRollOnTake )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ BOOL autoRollOnTake);
        
        HRESULT ( STDMETHODCALLTYPE *GetAutoRollOnTakeFrameDelay )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ unsigned short *frameDelay);
        
        HRESULT ( STDMETHODCALLTYPE *SetAutoRollOnTakeFrameDelay )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ unsigned short frameDelay);
        
        HRESULT ( STDMETHODCALLTYPE *GetNetworkAddress )( 
            IBMDSwitcherHyperDeck * This,
            /* [out] */ unsigned int *address);
        
        HRESULT ( STDMETHODCALLTYPE *SetNetworkAddress )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ unsigned int address);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ IBMDSwitcherHyperDeckCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherHyperDeck * This,
            /* [in] */ IBMDSwitcherHyperDeckCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherHyperDeckVtbl;

    interface IBMDSwitcherHyperDeck
    {
        CONST_VTBL struct IBMDSwitcherHyperDeckVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherHyperDeck_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherHyperDeck_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherHyperDeck_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherHyperDeck_GetId(This,hyperDeckId)	\
    ( (This)->lpVtbl -> GetId(This,hyperDeckId) ) 

#define IBMDSwitcherHyperDeck_GetConnectionStatus(This,status)	\
    ( (This)->lpVtbl -> GetConnectionStatus(This,status) ) 

#define IBMDSwitcherHyperDeck_IsRemoteAccessEnabled(This,enabled)	\
    ( (This)->lpVtbl -> IsRemoteAccessEnabled(This,enabled) ) 

#define IBMDSwitcherHyperDeck_GetStorageMediaCount(This,count)	\
    ( (This)->lpVtbl -> GetStorageMediaCount(This,count) ) 

#define IBMDSwitcherHyperDeck_GetStorageMediaState(This,storageMediaId,state)	\
    ( (This)->lpVtbl -> GetStorageMediaState(This,storageMediaId,state) ) 

#define IBMDSwitcherHyperDeck_GetActiveStorageMedia(This,index)	\
    ( (This)->lpVtbl -> GetActiveStorageMedia(This,index) ) 

#define IBMDSwitcherHyperDeck_SetActiveStorageMedia(This,index)	\
    ( (This)->lpVtbl -> SetActiveStorageMedia(This,index) ) 

#define IBMDSwitcherHyperDeck_GetClipCount(This,count)	\
    ( (This)->lpVtbl -> GetClipCount(This,count) ) 

#define IBMDSwitcherHyperDeck_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcherHyperDeck_GetSwitcherInput(This,inputId)	\
    ( (This)->lpVtbl -> GetSwitcherInput(This,inputId) ) 

#define IBMDSwitcherHyperDeck_SetSwitcherInput(This,inputId)	\
    ( (This)->lpVtbl -> SetSwitcherInput(This,inputId) ) 

#define IBMDSwitcherHyperDeck_GetFrameRate(This,frameRate,timeScale)	\
    ( (This)->lpVtbl -> GetFrameRate(This,frameRate,timeScale) ) 

#define IBMDSwitcherHyperDeck_IsInterlacedVideo(This,isInterlaced)	\
    ( (This)->lpVtbl -> IsInterlacedVideo(This,isInterlaced) ) 

#define IBMDSwitcherHyperDeck_IsDropFrameTimeCode(This,isDropFrame)	\
    ( (This)->lpVtbl -> IsDropFrameTimeCode(This,isDropFrame) ) 

#define IBMDSwitcherHyperDeck_GetPlayerState(This,state)	\
    ( (This)->lpVtbl -> GetPlayerState(This,state) ) 

#define IBMDSwitcherHyperDeck_GetCurrentClip(This,clipId)	\
    ( (This)->lpVtbl -> GetCurrentClip(This,clipId) ) 

#define IBMDSwitcherHyperDeck_SetCurrentClip(This,clipId)	\
    ( (This)->lpVtbl -> SetCurrentClip(This,clipId) ) 

#define IBMDSwitcherHyperDeck_GetCurrentClipTime(This,hours,minutes,seconds,frames)	\
    ( (This)->lpVtbl -> GetCurrentClipTime(This,hours,minutes,seconds,frames) ) 

#define IBMDSwitcherHyperDeck_SetCurrentClipTime(This,hours,minutes,seconds,frames)	\
    ( (This)->lpVtbl -> SetCurrentClipTime(This,hours,minutes,seconds,frames) ) 

#define IBMDSwitcherHyperDeck_GetCurrentTimelineTime(This,hours,minutes,seconds,frames)	\
    ( (This)->lpVtbl -> GetCurrentTimelineTime(This,hours,minutes,seconds,frames) ) 

#define IBMDSwitcherHyperDeck_SetCurrentTimelineTime(This,hours,minutes,seconds,frames)	\
    ( (This)->lpVtbl -> SetCurrentTimelineTime(This,hours,minutes,seconds,frames) ) 

#define IBMDSwitcherHyperDeck_GetEstimatedRecordTimeRemaining(This,hours,minutes,seconds,frames)	\
    ( (This)->lpVtbl -> GetEstimatedRecordTimeRemaining(This,hours,minutes,seconds,frames) ) 

#define IBMDSwitcherHyperDeck_Play(This)	\
    ( (This)->lpVtbl -> Play(This) ) 

#define IBMDSwitcherHyperDeck_Record(This)	\
    ( (This)->lpVtbl -> Record(This) ) 

#define IBMDSwitcherHyperDeck_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IBMDSwitcherHyperDeck_Shuttle(This,speedPercent)	\
    ( (This)->lpVtbl -> Shuttle(This,speedPercent) ) 

#define IBMDSwitcherHyperDeck_GetShuttleSpeed(This,speedPercent)	\
    ( (This)->lpVtbl -> GetShuttleSpeed(This,speedPercent) ) 

#define IBMDSwitcherHyperDeck_Jog(This,frameDelta)	\
    ( (This)->lpVtbl -> Jog(This,frameDelta) ) 

#define IBMDSwitcherHyperDeck_GetLoopedPlayback(This,loop)	\
    ( (This)->lpVtbl -> GetLoopedPlayback(This,loop) ) 

#define IBMDSwitcherHyperDeck_SetLoopedPlayback(This,loop)	\
    ( (This)->lpVtbl -> SetLoopedPlayback(This,loop) ) 

#define IBMDSwitcherHyperDeck_GetSingleClipPlayback(This,single)	\
    ( (This)->lpVtbl -> GetSingleClipPlayback(This,single) ) 

#define IBMDSwitcherHyperDeck_SetSingleClipPlayback(This,single)	\
    ( (This)->lpVtbl -> SetSingleClipPlayback(This,single) ) 

#define IBMDSwitcherHyperDeck_GetAutoRollOnTake(This,autoRollOnTake)	\
    ( (This)->lpVtbl -> GetAutoRollOnTake(This,autoRollOnTake) ) 

#define IBMDSwitcherHyperDeck_SetAutoRollOnTake(This,autoRollOnTake)	\
    ( (This)->lpVtbl -> SetAutoRollOnTake(This,autoRollOnTake) ) 

#define IBMDSwitcherHyperDeck_GetAutoRollOnTakeFrameDelay(This,frameDelay)	\
    ( (This)->lpVtbl -> GetAutoRollOnTakeFrameDelay(This,frameDelay) ) 

#define IBMDSwitcherHyperDeck_SetAutoRollOnTakeFrameDelay(This,frameDelay)	\
    ( (This)->lpVtbl -> SetAutoRollOnTakeFrameDelay(This,frameDelay) ) 

#define IBMDSwitcherHyperDeck_GetNetworkAddress(This,address)	\
    ( (This)->lpVtbl -> GetNetworkAddress(This,address) ) 

#define IBMDSwitcherHyperDeck_SetNetworkAddress(This,address)	\
    ( (This)->lpVtbl -> SetNetworkAddress(This,address) ) 

#define IBMDSwitcherHyperDeck_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherHyperDeck_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherHyperDeck_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMixMinusOutput_INTERFACE_DEFINED__
#define __IBMDSwitcherMixMinusOutput_INTERFACE_DEFINED__

/* interface IBMDSwitcherMixMinusOutput */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMixMinusOutput;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E787458F-FCF4-4A9B-83D9-E25188170742")
    IBMDSwitcherMixMinusOutput : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAudioMode( 
            /* [out] */ BMDSwitcherMixMinusOutputAudioMode *audioMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAudioMode( 
            /* [in] */ BMDSwitcherMixMinusOutputAudioMode audioMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMinusAudioInputId( 
            /* [out] */ BMDSwitcherAudioInputId *audioInputId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMixMinusOutputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMixMinusOutputCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMixMinusOutputVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMixMinusOutput * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMixMinusOutput * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMixMinusOutput * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioMode )( 
            IBMDSwitcherMixMinusOutput * This,
            /* [out] */ BMDSwitcherMixMinusOutputAudioMode *audioMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetAudioMode )( 
            IBMDSwitcherMixMinusOutput * This,
            /* [in] */ BMDSwitcherMixMinusOutputAudioMode audioMode);
        
        HRESULT ( STDMETHODCALLTYPE *GetMinusAudioInputId )( 
            IBMDSwitcherMixMinusOutput * This,
            /* [out] */ BMDSwitcherAudioInputId *audioInputId);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMixMinusOutput * This,
            /* [in] */ IBMDSwitcherMixMinusOutputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMixMinusOutput * This,
            /* [in] */ IBMDSwitcherMixMinusOutputCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMixMinusOutputVtbl;

    interface IBMDSwitcherMixMinusOutput
    {
        CONST_VTBL struct IBMDSwitcherMixMinusOutputVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMixMinusOutput_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMixMinusOutput_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMixMinusOutput_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMixMinusOutput_GetAudioMode(This,audioMode)	\
    ( (This)->lpVtbl -> GetAudioMode(This,audioMode) ) 

#define IBMDSwitcherMixMinusOutput_SetAudioMode(This,audioMode)	\
    ( (This)->lpVtbl -> SetAudioMode(This,audioMode) ) 

#define IBMDSwitcherMixMinusOutput_GetMinusAudioInputId(This,audioInputId)	\
    ( (This)->lpVtbl -> GetMinusAudioInputId(This,audioInputId) ) 

#define IBMDSwitcherMixMinusOutput_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMixMinusOutput_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMixMinusOutput_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMixMinusOutputCallback_INTERFACE_DEFINED__
#define __IBMDSwitcherMixMinusOutputCallback_INTERFACE_DEFINED__

/* interface IBMDSwitcherMixMinusOutputCallback */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMixMinusOutputCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1D2EDF8-D949-49D0-8501-F001D69AB44F")
    IBMDSwitcherMixMinusOutputCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherMixMinusOutputEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMixMinusOutputCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMixMinusOutputCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMixMinusOutputCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMixMinusOutputCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherMixMinusOutputCallback * This,
            /* [in] */ BMDSwitcherMixMinusOutputEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherMixMinusOutputCallbackVtbl;

    interface IBMDSwitcherMixMinusOutputCallback
    {
        CONST_VTBL struct IBMDSwitcherMixMinusOutputCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMixMinusOutputCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMixMinusOutputCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMixMinusOutputCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMixMinusOutputCallback_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMixMinusOutputCallback_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CBMDSwitcherDiscovery;

#ifdef __cplusplus

class DECLSPEC_UUID("BA726CE9-B8F5-4B1B-AA00-1A2DF3998B45")
CBMDSwitcherDiscovery;
#endif

#ifndef __IBMDSwitcherKeyFlyParameters_v3_5_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_v3_5_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyParameters_v3_5 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyParameters_v3_5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C522E970-DDB1-4027-B492-F52C1DFA5D09")
    IBMDSwitcherKeyFlyParameters_v3_5 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFly( 
            /* [out] */ BOOL *isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFly( 
            /* [in] */ BOOL isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanFly( 
            /* [out] */ BOOL *canFly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeX( 
            /* [out] */ double *multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeX( 
            /* [in] */ double multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeY( 
            /* [out] */ double *multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeY( 
            /* [in] */ double multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRotation( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRotation( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetRotation( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVE( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVEFull( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsKeyFrameStored( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StoreAsKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RunToKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAtKeyFrames( 
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRunning( 
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyParameters_v3_5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFly )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ BOOL *isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetFly )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ BOOL isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanFly )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ BOOL *canFly);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeX )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ double *multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeX )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ double multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeY )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ double *multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeY )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ double multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ double *offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ double offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ double *offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ double offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *GetRotation )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetRotation )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *ResetRotation )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVE )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVEFull )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsKeyFrameStored )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored);
        
        HRESULT ( STDMETHODCALLTYPE *StoreAsKeyFrame )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        HRESULT ( STDMETHODCALLTYPE *RunToKeyFrame )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame destination);
        
        HRESULT ( STDMETHODCALLTYPE *IsAtKeyFrames )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames);
        
        HRESULT ( STDMETHODCALLTYPE *IsRunning )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyFlyParameters_v3_5 * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyParameters_v3_5Vtbl;

    interface IBMDSwitcherKeyFlyParameters_v3_5
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyParameters_v3_5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyParameters_v3_5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyParameters_v3_5_GetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> GetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_SetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> SetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_GetCanFly(This,canFly)	\
    ( (This)->lpVtbl -> GetCanFly(This,canFly) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_GetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> GetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_SetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> SetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_GetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> GetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_SetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> SetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_GetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> GetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_SetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> SetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_GetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> GetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_SetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> SetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_GetRotation(This,degrees)	\
    ( (This)->lpVtbl -> GetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_SetRotation(This,degrees)	\
    ( (This)->lpVtbl -> SetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_ResetRotation(This)	\
    ( (This)->lpVtbl -> ResetRotation(This) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_ResetDVE(This)	\
    ( (This)->lpVtbl -> ResetDVE(This) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_ResetDVEFull(This)	\
    ( (This)->lpVtbl -> ResetDVEFull(This) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_IsKeyFrameStored(This,keyFrame,stored)	\
    ( (This)->lpVtbl -> IsKeyFrameStored(This,keyFrame,stored) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_StoreAsKeyFrame(This,keyFrame)	\
    ( (This)->lpVtbl -> StoreAsKeyFrame(This,keyFrame) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_RunToKeyFrame(This,destination)	\
    ( (This)->lpVtbl -> RunToKeyFrame(This,destination) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_IsAtKeyFrames(This,keyFrames)	\
    ( (This)->lpVtbl -> IsAtKeyFrames(This,keyFrames) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_IsRunning(This,isRunning,destination)	\
    ( (This)->lpVtbl -> IsRunning(This,isRunning,destination) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyFlyParameters_v3_5_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyParameters_v3_5_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcher_v4_0_INTERFACE_DEFINED__
#define __IBMDSwitcher_v4_0_INTERFACE_DEFINED__

/* interface IBMDSwitcher_v4_0 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcher_v4_0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1E8701D0-258F-43ED-9EDC-434FD16E922D")
    IBMDSwitcher_v4_0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherCallback_v4_0 *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherCallback_v4_0 *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlag( 
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlag( 
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [out] */ BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt( 
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [in] */ long long value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt( 
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [out] */ long long *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFloat( 
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [in] */ double value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFloat( 
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [out] */ double *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetString( 
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [in] */ BSTR value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [out] */ BSTR *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcher_v4_0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcher_v4_0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcher_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ IBMDSwitcherCallback_v4_0 *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ IBMDSwitcherCallback_v4_0 *callback);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlag )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [in] */ BOOL value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlag )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [out] */ BOOL *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [in] */ long long value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [out] */ long long *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetFloat )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [in] */ double value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFloat )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [out] */ double *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetString )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [in] */ BSTR value);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IBMDSwitcher_v4_0 * This,
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId,
            /* [out] */ BSTR *value);
        
        END_INTERFACE
    } IBMDSwitcher_v4_0Vtbl;

    interface IBMDSwitcher_v4_0
    {
        CONST_VTBL struct IBMDSwitcher_v4_0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcher_v4_0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcher_v4_0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcher_v4_0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcher_v4_0_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcher_v4_0_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcher_v4_0_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcher_v4_0_SetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFlag(This,propertyId,value) ) 

#define IBMDSwitcher_v4_0_GetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFlag(This,propertyId,value) ) 

#define IBMDSwitcher_v4_0_SetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetInt(This,propertyId,value) ) 

#define IBMDSwitcher_v4_0_GetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetInt(This,propertyId,value) ) 

#define IBMDSwitcher_v4_0_SetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFloat(This,propertyId,value) ) 

#define IBMDSwitcher_v4_0_GetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFloat(This,propertyId,value) ) 

#define IBMDSwitcher_v4_0_SetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetString(This,propertyId,value) ) 

#define IBMDSwitcher_v4_0_GetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetString(This,propertyId,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcher_v4_0_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_v4_0_INTERFACE_DEFINED__
#define __IBMDSwitcherDiscovery_v4_0_INTERFACE_DEFINED__

/* interface IBMDSwitcherDiscovery_v4_0 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDiscovery_v4_0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A676047A-D3A4-44B1-B8B5-31D7289D266A")
    IBMDSwitcherDiscovery_v4_0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConnectTo( 
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher_v4_0 **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDiscovery_v4_0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDiscovery_v4_0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDiscovery_v4_0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDiscovery_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectTo )( 
            IBMDSwitcherDiscovery_v4_0 * This,
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher_v4_0 **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason);
        
        END_INTERFACE
    } IBMDSwitcherDiscovery_v4_0Vtbl;

    interface IBMDSwitcherDiscovery_v4_0
    {
        CONST_VTBL struct IBMDSwitcherDiscovery_v4_0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDiscovery_v4_0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDiscovery_v4_0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDiscovery_v4_0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDiscovery_v4_0_ConnectTo(This,deviceAddress,switcherDevice,failReason)	\
    ( (This)->lpVtbl -> ConnectTo(This,deviceAddress,switcherDevice,failReason) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDiscovery_v4_0_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherCallback_v4_0_INTERFACE_DEFINED__
#define __IBMDSwitcherCallback_v4_0_INTERFACE_DEFINED__

/* interface IBMDSwitcherCallback_v4_0 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherCallback_v4_0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6C6E4441-9421-4729-9951-988659E3A44A")
    IBMDSwitcherCallback_v4_0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PropertyChanged( 
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Disconnected( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherCallback_v4_0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherCallback_v4_0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherCallback_v4_0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherCallback_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *PropertyChanged )( 
            IBMDSwitcherCallback_v4_0 * This,
            /* [in] */ BMDSwitcherPropertyId_v4_0 propertyId);
        
        HRESULT ( STDMETHODCALLTYPE *Disconnected )( 
            IBMDSwitcherCallback_v4_0 * This);
        
        END_INTERFACE
    } IBMDSwitcherCallback_v4_0Vtbl;

    interface IBMDSwitcherCallback_v4_0
    {
        CONST_VTBL struct IBMDSwitcherCallback_v4_0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherCallback_v4_0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherCallback_v4_0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherCallback_v4_0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherCallback_v4_0_PropertyChanged(This,propertyId)	\
    ( (This)->lpVtbl -> PropertyChanged(This,propertyId) ) 

#define IBMDSwitcherCallback_v4_0_Disconnected(This)	\
    ( (This)->lpVtbl -> Disconnected(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherCallback_v4_0_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherStills_v4_0_INTERFACE_DEFINED__
#define __IBMDSwitcherStills_v4_0_INTERFACE_DEFINED__

/* interface IBMDSwitcherStills_v4_0 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherStills_v4_0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA26D656-2400-407B-8D3C-796B506F99DB")
    IBMDSwitcherStills_v4_0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ unsigned int *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsValid( 
            /* [in] */ unsigned int index,
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ unsigned int index,
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHash( 
            /* [in] */ unsigned int index,
            /* [out] */ BMDSwitcherHash *hash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInvalid( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Lock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unlock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Upload( 
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherFrame *frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Download( 
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelTransfer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [out] */ double *progress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherStillsCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherStillsCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherStills_v4_0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherStills_v4_0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherStills_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [out] */ unsigned int *count);
        
        HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ unsigned int index,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ unsigned int index,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ unsigned int index,
            /* [out] */ BMDSwitcherHash *hash);
        
        HRESULT ( STDMETHODCALLTYPE *SetInvalid )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *Lock )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Unlock )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Upload )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ unsigned int index,
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *Download )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *CancelTransfer )( 
            IBMDSwitcherStills_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [out] */ double *progress);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ IBMDSwitcherStillsCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherStills_v4_0 * This,
            /* [in] */ IBMDSwitcherStillsCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherStills_v4_0Vtbl;

    interface IBMDSwitcherStills_v4_0
    {
        CONST_VTBL struct IBMDSwitcherStills_v4_0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherStills_v4_0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherStills_v4_0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherStills_v4_0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherStills_v4_0_GetCount(This,count)	\
    ( (This)->lpVtbl -> GetCount(This,count) ) 

#define IBMDSwitcherStills_v4_0_IsValid(This,index,valid)	\
    ( (This)->lpVtbl -> IsValid(This,index,valid) ) 

#define IBMDSwitcherStills_v4_0_GetName(This,index,name)	\
    ( (This)->lpVtbl -> GetName(This,index,name) ) 

#define IBMDSwitcherStills_v4_0_GetHash(This,index,hash)	\
    ( (This)->lpVtbl -> GetHash(This,index,hash) ) 

#define IBMDSwitcherStills_v4_0_SetInvalid(This,index)	\
    ( (This)->lpVtbl -> SetInvalid(This,index) ) 

#define IBMDSwitcherStills_v4_0_Lock(This,lockCallback)	\
    ( (This)->lpVtbl -> Lock(This,lockCallback) ) 

#define IBMDSwitcherStills_v4_0_Unlock(This,lockCallback)	\
    ( (This)->lpVtbl -> Unlock(This,lockCallback) ) 

#define IBMDSwitcherStills_v4_0_Upload(This,index,name,frame)	\
    ( (This)->lpVtbl -> Upload(This,index,name,frame) ) 

#define IBMDSwitcherStills_v4_0_Download(This,index)	\
    ( (This)->lpVtbl -> Download(This,index) ) 

#define IBMDSwitcherStills_v4_0_CancelTransfer(This)	\
    ( (This)->lpVtbl -> CancelTransfer(This) ) 

#define IBMDSwitcherStills_v4_0_GetProgress(This,progress)	\
    ( (This)->lpVtbl -> GetProgress(This,progress) ) 

#define IBMDSwitcherStills_v4_0_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherStills_v4_0_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherStills_v4_0_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherClip_v4_0_INTERFACE_DEFINED__
#define __IBMDSwitcherClip_v4_0_INTERFACE_DEFINED__

/* interface IBMDSwitcherClip_v4_0 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherClip_v4_0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3CC10CA1-3E13-4C69-9FFC-A37A62B05869")
    IBMDSwitcherClip_v4_0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIndex( 
            /* [out] */ unsigned int *index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsValid( 
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValid( 
            /* [in] */ BSTR name,
            /* [in] */ unsigned int frameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInvalid( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameCount( 
            /* [out] */ unsigned int *frameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaxFrameCount( 
            /* [out] */ unsigned int *maxFrameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsFrameValid( 
            /* [in] */ unsigned int frameIndex,
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameHash( 
            /* [in] */ unsigned int frameIndex,
            /* [out] */ BMDSwitcherHash *hash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAudioValid( 
            /* [out] */ BOOL *valid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioHash( 
            /* [out] */ BMDSwitcherHash *hash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAudioInvalid( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Lock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unlock( 
            /* [in] */ IBMDSwitcherLockCallback *lockCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UploadFrame( 
            /* [in] */ unsigned int frameIndex,
            /* [in] */ IBMDSwitcherFrame *frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadFrame( 
            /* [in] */ unsigned int frameIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UploadAudio( 
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherAudio *audio) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DownloadAudio( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelTransfer( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [out] */ double *progress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherClipCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherClipCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherClip_v4_0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherClip_v4_0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherClip_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIndex )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [out] */ unsigned int *index);
        
        HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetValid )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ BSTR name,
            /* [in] */ unsigned int frameCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetInvalid )( 
            IBMDSwitcherClip_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameCount )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [out] */ unsigned int *frameCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaxFrameCount )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [out] */ unsigned int *maxFrameCount);
        
        HRESULT ( STDMETHODCALLTYPE *IsFrameValid )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ unsigned int frameIndex,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameHash )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ unsigned int frameIndex,
            /* [out] */ BMDSwitcherHash *hash);
        
        HRESULT ( STDMETHODCALLTYPE *IsAudioValid )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [out] */ BOOL *valid);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioName )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioHash )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [out] */ BMDSwitcherHash *hash);
        
        HRESULT ( STDMETHODCALLTYPE *SetAudioInvalid )( 
            IBMDSwitcherClip_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Lock )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Unlock )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ IBMDSwitcherLockCallback *lockCallback);
        
        HRESULT ( STDMETHODCALLTYPE *UploadFrame )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ unsigned int frameIndex,
            /* [in] */ IBMDSwitcherFrame *frame);
        
        HRESULT ( STDMETHODCALLTYPE *DownloadFrame )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ unsigned int frameIndex);
        
        HRESULT ( STDMETHODCALLTYPE *UploadAudio )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ BSTR name,
            /* [in] */ IBMDSwitcherAudio *audio);
        
        HRESULT ( STDMETHODCALLTYPE *DownloadAudio )( 
            IBMDSwitcherClip_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CancelTransfer )( 
            IBMDSwitcherClip_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [out] */ double *progress);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ IBMDSwitcherClipCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherClip_v4_0 * This,
            /* [in] */ IBMDSwitcherClipCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherClip_v4_0Vtbl;

    interface IBMDSwitcherClip_v4_0
    {
        CONST_VTBL struct IBMDSwitcherClip_v4_0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherClip_v4_0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherClip_v4_0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherClip_v4_0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherClip_v4_0_GetIndex(This,index)	\
    ( (This)->lpVtbl -> GetIndex(This,index) ) 

#define IBMDSwitcherClip_v4_0_IsValid(This,valid)	\
    ( (This)->lpVtbl -> IsValid(This,valid) ) 

#define IBMDSwitcherClip_v4_0_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IBMDSwitcherClip_v4_0_SetValid(This,name,frameCount)	\
    ( (This)->lpVtbl -> SetValid(This,name,frameCount) ) 

#define IBMDSwitcherClip_v4_0_SetInvalid(This)	\
    ( (This)->lpVtbl -> SetInvalid(This) ) 

#define IBMDSwitcherClip_v4_0_GetFrameCount(This,frameCount)	\
    ( (This)->lpVtbl -> GetFrameCount(This,frameCount) ) 

#define IBMDSwitcherClip_v4_0_GetMaxFrameCount(This,maxFrameCount)	\
    ( (This)->lpVtbl -> GetMaxFrameCount(This,maxFrameCount) ) 

#define IBMDSwitcherClip_v4_0_IsFrameValid(This,frameIndex,valid)	\
    ( (This)->lpVtbl -> IsFrameValid(This,frameIndex,valid) ) 

#define IBMDSwitcherClip_v4_0_GetFrameHash(This,frameIndex,hash)	\
    ( (This)->lpVtbl -> GetFrameHash(This,frameIndex,hash) ) 

#define IBMDSwitcherClip_v4_0_IsAudioValid(This,valid)	\
    ( (This)->lpVtbl -> IsAudioValid(This,valid) ) 

#define IBMDSwitcherClip_v4_0_GetAudioName(This,name)	\
    ( (This)->lpVtbl -> GetAudioName(This,name) ) 

#define IBMDSwitcherClip_v4_0_GetAudioHash(This,hash)	\
    ( (This)->lpVtbl -> GetAudioHash(This,hash) ) 

#define IBMDSwitcherClip_v4_0_SetAudioInvalid(This)	\
    ( (This)->lpVtbl -> SetAudioInvalid(This) ) 

#define IBMDSwitcherClip_v4_0_Lock(This,lockCallback)	\
    ( (This)->lpVtbl -> Lock(This,lockCallback) ) 

#define IBMDSwitcherClip_v4_0_Unlock(This,lockCallback)	\
    ( (This)->lpVtbl -> Unlock(This,lockCallback) ) 

#define IBMDSwitcherClip_v4_0_UploadFrame(This,frameIndex,frame)	\
    ( (This)->lpVtbl -> UploadFrame(This,frameIndex,frame) ) 

#define IBMDSwitcherClip_v4_0_DownloadFrame(This,frameIndex)	\
    ( (This)->lpVtbl -> DownloadFrame(This,frameIndex) ) 

#define IBMDSwitcherClip_v4_0_UploadAudio(This,name,audio)	\
    ( (This)->lpVtbl -> UploadAudio(This,name,audio) ) 

#define IBMDSwitcherClip_v4_0_DownloadAudio(This)	\
    ( (This)->lpVtbl -> DownloadAudio(This) ) 

#define IBMDSwitcherClip_v4_0_CancelTransfer(This)	\
    ( (This)->lpVtbl -> CancelTransfer(This) ) 

#define IBMDSwitcherClip_v4_0_GetProgress(This,progress)	\
    ( (This)->lpVtbl -> GetProgress(This,progress) ) 

#define IBMDSwitcherClip_v4_0_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherClip_v4_0_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherClip_v4_0_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMediaPool_v4_0_INTERFACE_DEFINED__
#define __IBMDSwitcherMediaPool_v4_0_INTERFACE_DEFINED__

/* interface IBMDSwitcherMediaPool_v4_0 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMediaPool_v4_0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D9B2A1E7-023E-42EC-96C9-5FFE28CE8399")
    IBMDSwitcherMediaPool_v4_0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStills( 
            /* [out] */ IBMDSwitcherStills_v4_0 **stills) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [in] */ unsigned int clipIndex,
            /* [out] */ IBMDSwitcherClip_v4_0 **clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipCount( 
            /* [out] */ unsigned int *clipCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFrame( 
            /* [in] */ BMDSwitcherPixelFormat pixelFormat,
            /* [in] */ unsigned int width,
            /* [in] */ unsigned int height,
            /* [out] */ IBMDSwitcherFrame **frame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateAudio( 
            /* [in] */ unsigned int sizeBytes,
            /* [out] */ IBMDSwitcherAudio **audio) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFrameTotalForClips( 
            /* [out] */ unsigned int *total) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipMaxFrameCounts( 
            /* [in] */ unsigned int clipCount,
            /* [out] */ unsigned int *clipMaxFrameCounts) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClipMaxFrameCounts( 
            /* [in] */ unsigned int clipCount,
            /* [in] */ const unsigned int *clipMaxFrameCounts) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMediaPool_v4_0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMediaPool_v4_0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMediaPool_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStills )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [out] */ IBMDSwitcherStills_v4_0 **stills);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [in] */ unsigned int clipIndex,
            /* [out] */ IBMDSwitcherClip_v4_0 **clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipCount )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [out] */ unsigned int *clipCount);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFrame )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [in] */ BMDSwitcherPixelFormat pixelFormat,
            /* [in] */ unsigned int width,
            /* [in] */ unsigned int height,
            /* [out] */ IBMDSwitcherFrame **frame);
        
        HRESULT ( STDMETHODCALLTYPE *CreateAudio )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [in] */ unsigned int sizeBytes,
            /* [out] */ IBMDSwitcherAudio **audio);
        
        HRESULT ( STDMETHODCALLTYPE *GetFrameTotalForClips )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [out] */ unsigned int *total);
        
        HRESULT ( STDMETHODCALLTYPE *GetClipMaxFrameCounts )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [in] */ unsigned int clipCount,
            /* [out] */ unsigned int *clipMaxFrameCounts);
        
        HRESULT ( STDMETHODCALLTYPE *SetClipMaxFrameCounts )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [in] */ unsigned int clipCount,
            /* [in] */ const unsigned int *clipMaxFrameCounts);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMediaPool_v4_0 * This,
            /* [in] */ IBMDSwitcherMediaPoolCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMediaPool_v4_0Vtbl;

    interface IBMDSwitcherMediaPool_v4_0
    {
        CONST_VTBL struct IBMDSwitcherMediaPool_v4_0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMediaPool_v4_0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMediaPool_v4_0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMediaPool_v4_0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMediaPool_v4_0_GetStills(This,stills)	\
    ( (This)->lpVtbl -> GetStills(This,stills) ) 

#define IBMDSwitcherMediaPool_v4_0_GetClip(This,clipIndex,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clipIndex,clip) ) 

#define IBMDSwitcherMediaPool_v4_0_GetClipCount(This,clipCount)	\
    ( (This)->lpVtbl -> GetClipCount(This,clipCount) ) 

#define IBMDSwitcherMediaPool_v4_0_CreateFrame(This,pixelFormat,width,height,frame)	\
    ( (This)->lpVtbl -> CreateFrame(This,pixelFormat,width,height,frame) ) 

#define IBMDSwitcherMediaPool_v4_0_CreateAudio(This,sizeBytes,audio)	\
    ( (This)->lpVtbl -> CreateAudio(This,sizeBytes,audio) ) 

#define IBMDSwitcherMediaPool_v4_0_GetFrameTotalForClips(This,total)	\
    ( (This)->lpVtbl -> GetFrameTotalForClips(This,total) ) 

#define IBMDSwitcherMediaPool_v4_0_GetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts)	\
    ( (This)->lpVtbl -> GetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts) ) 

#define IBMDSwitcherMediaPool_v4_0_SetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts)	\
    ( (This)->lpVtbl -> SetClipMaxFrameCounts(This,clipCount,clipMaxFrameCounts) ) 

#define IBMDSwitcherMediaPool_v4_0_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMediaPool_v4_0_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMediaPool_v4_0_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioInput_v4_0_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioInput_v4_0_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioInput_v4_0 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioInput_v4_0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("87B99021-FA29-4720-9526-4512CA553858")
    IBMDSwitcherAudioInput_v4_0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ BMDSwitcherAudioInputType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMixOption( 
            /* [out] */ BMDSwitcherAudioMixOption *mixOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMixOption( 
            /* [in] */ BMDSwitcherAudioMixOption mixOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBalance( 
            /* [out] */ double *balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBalance( 
            /* [in] */ double balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsMixedIn( 
            /* [out] */ BOOL *mixedIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAudioInputId( 
            /* [out] */ BMDSwitcherAudioInputId *audioInputId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioInputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioInputCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioInput_v4_0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioInput_v4_0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioInput_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [out] */ BMDSwitcherAudioInputType *type);
        
        HRESULT ( STDMETHODCALLTYPE *GetMixOption )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [out] */ BMDSwitcherAudioMixOption *mixOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetMixOption )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [in] */ BMDSwitcherAudioMixOption mixOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetBalance )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [out] */ double *balance);
        
        HRESULT ( STDMETHODCALLTYPE *SetBalance )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [in] */ double balance);
        
        HRESULT ( STDMETHODCALLTYPE *IsMixedIn )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [out] */ BOOL *mixedIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetAudioInputId )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [out] */ BMDSwitcherAudioInputId *audioInputId);
        
        HRESULT ( STDMETHODCALLTYPE *ResetLevelNotificationPeaks )( 
            IBMDSwitcherAudioInput_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [in] */ IBMDSwitcherAudioInputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioInput_v4_0 * This,
            /* [in] */ IBMDSwitcherAudioInputCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherAudioInput_v4_0Vtbl;

    interface IBMDSwitcherAudioInput_v4_0
    {
        CONST_VTBL struct IBMDSwitcherAudioInput_v4_0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioInput_v4_0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioInput_v4_0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioInput_v4_0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioInput_v4_0_GetType(This,type)	\
    ( (This)->lpVtbl -> GetType(This,type) ) 

#define IBMDSwitcherAudioInput_v4_0_GetMixOption(This,mixOption)	\
    ( (This)->lpVtbl -> GetMixOption(This,mixOption) ) 

#define IBMDSwitcherAudioInput_v4_0_SetMixOption(This,mixOption)	\
    ( (This)->lpVtbl -> SetMixOption(This,mixOption) ) 

#define IBMDSwitcherAudioInput_v4_0_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherAudioInput_v4_0_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherAudioInput_v4_0_GetBalance(This,balance)	\
    ( (This)->lpVtbl -> GetBalance(This,balance) ) 

#define IBMDSwitcherAudioInput_v4_0_SetBalance(This,balance)	\
    ( (This)->lpVtbl -> SetBalance(This,balance) ) 

#define IBMDSwitcherAudioInput_v4_0_IsMixedIn(This,mixedIn)	\
    ( (This)->lpVtbl -> IsMixedIn(This,mixedIn) ) 

#define IBMDSwitcherAudioInput_v4_0_GetAudioInputId(This,audioInputId)	\
    ( (This)->lpVtbl -> GetAudioInputId(This,audioInputId) ) 

#define IBMDSwitcherAudioInput_v4_0_ResetLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioInput_v4_0_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioInput_v4_0_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioInput_v4_0_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioInputIterator_v4_0_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioInputIterator_v4_0_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioInputIterator_v4_0 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioInputIterator_v4_0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0194C65A-3EDA-4853-A6D3-D59CD12B3C0A")
    IBMDSwitcherAudioInputIterator_v4_0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherAudioInput_v4_0 **audioInput) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ IBMDSwitcherAudioInput_v4_0 **audioInput) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioInputIterator_v4_0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioInputIterator_v4_0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioInputIterator_v4_0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioInputIterator_v4_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherAudioInputIterator_v4_0 * This,
            /* [out] */ IBMDSwitcherAudioInput_v4_0 **audioInput);
        
        HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IBMDSwitcherAudioInputIterator_v4_0 * This,
            /* [in] */ BMDSwitcherAudioInputId audioInputId,
            /* [out] */ IBMDSwitcherAudioInput_v4_0 **audioInput);
        
        END_INTERFACE
    } IBMDSwitcherAudioInputIterator_v4_0Vtbl;

    interface IBMDSwitcherAudioInputIterator_v4_0
    {
        CONST_VTBL struct IBMDSwitcherAudioInputIterator_v4_0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioInputIterator_v4_0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioInputIterator_v4_0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioInputIterator_v4_0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioInputIterator_v4_0_Next(This,audioInput)	\
    ( (This)->lpVtbl -> Next(This,audioInput) ) 

#define IBMDSwitcherAudioInputIterator_v4_0_GetById(This,audioInputId,audioInput)	\
    ( (This)->lpVtbl -> GetById(This,audioInputId,audioInput) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioInputIterator_v4_0_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CBMDSwitcherDiscovery_v4_0;

#ifdef __cplusplus

class DECLSPEC_UUID("F2DC5149-9599-47E4-84B9-054C78A1A46D")
CBMDSwitcherDiscovery_v4_0;
#endif

#ifndef __IBMDSwitcherTransitionDVEParameters_v4_1_3_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDVEParameters_v4_1_3_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDVEParameters_v4_1_3 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDVEParameters_v4_1_3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("31CA3097-D178-4398-B041-059C1312F129")
    IBMDSwitcherTransitionDVEParameters_v4_1_3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLogoRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLogoRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReverse( 
            /* [out] */ BOOL *reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReverse( 
            /* [in] */ BOOL reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlipFlop( 
            /* [out] */ BOOL *flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlipFlop( 
            /* [in] */ BOOL flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStyle( 
            /* [out] */ BMDSwitcherDVETransitionStyle *style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStyle( 
            /* [in] */ BMDSwitcherDVETransitionStyle style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnableKey( 
            /* [out] */ BOOL *enableKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnableKey( 
            /* [in] */ BOOL enableKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDVEParameters_v4_1_3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetLogoRate )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetLogoRate )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetReverse )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ BOOL *reverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetReverse )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ BOOL reverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlipFlop )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ BOOL *flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlipFlop )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ BOOL flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *GetStyle )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ BMDSwitcherDVETransitionStyle *style);
        
        HRESULT ( STDMETHODCALLTYPE *SetStyle )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ BMDSwitcherDVETransitionStyle style);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnableKey )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ BOOL *enableKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnableKey )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ BOOL enableKey);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionDVEParameters_v4_1_3 * This,
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDVEParameters_v4_1_3Vtbl;

    interface IBMDSwitcherTransitionDVEParameters_v4_1_3
    {
        CONST_VTBL struct IBMDSwitcherTransitionDVEParameters_v4_1_3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDVEParameters_v4_1_3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetLogoRate(This,frames)	\
    ( (This)->lpVtbl -> GetLogoRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetLogoRate(This,frames)	\
    ( (This)->lpVtbl -> SetLogoRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetReverse(This,reverse)	\
    ( (This)->lpVtbl -> GetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetReverse(This,reverse)	\
    ( (This)->lpVtbl -> SetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> GetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> SetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetStyle(This,style)	\
    ( (This)->lpVtbl -> GetStyle(This,style) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetStyle(This,style)	\
    ( (This)->lpVtbl -> SetStyle(This,style) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetEnableKey(This,enableKey)	\
    ( (This)->lpVtbl -> GetEnableKey(This,enableKey) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetEnableKey(This,enableKey)	\
    ( (This)->lpVtbl -> SetEnableKey(This,enableKey) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionDVEParameters_v4_1_3_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDVEParameters_v4_1_3_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKey_v4_1_3_INTERFACE_DEFINED__
#define __IBMDSwitcherKey_v4_1_3_INTERFACE_DEFINED__

/* interface IBMDSwitcherKey_v4_1_3 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKey_v4_1_3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("918E234D-67C1-452F-80A0-DB39FE6BCB21")
    IBMDSwitcherKey_v4_1_3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [out] */ BMDSwitcherKeyType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetType( 
            /* [in] */ BMDSwitcherKeyType type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOnAir( 
            /* [out] */ BOOL *onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOnAir( 
            /* [in] */ BOOL onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanBeDVEKey( 
            /* [out] */ BOOL *canDVE) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMasked( 
            /* [out] */ BOOL *maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMasked( 
            /* [in] */ BOOL maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMask( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTransitionSelectionMask( 
            /* [out] */ BMDSwitcherTransitionSelection *selectionMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKey_v4_1_3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKey_v4_1_3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKey_v4_1_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ BMDSwitcherKeyType *type);
        
        HRESULT ( STDMETHODCALLTYPE *SetType )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ BMDSwitcherKeyType type);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetOnAir )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ BOOL *onAir);
        
        HRESULT ( STDMETHODCALLTYPE *SetOnAir )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ BOOL onAir);
        
        HRESULT ( STDMETHODCALLTYPE *CanBeDVEKey )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ BOOL *canDVE);
        
        HRESULT ( STDMETHODCALLTYPE *GetMasked )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ BOOL *maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetMasked )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ BOOL maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMask )( 
            IBMDSwitcherKey_v4_1_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTransitionSelectionMask )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [out] */ BMDSwitcherTransitionSelection *selectionMask);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ IBMDSwitcherKeyCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKey_v4_1_3 * This,
            /* [in] */ IBMDSwitcherKeyCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKey_v4_1_3Vtbl;

    interface IBMDSwitcherKey_v4_1_3
    {
        CONST_VTBL struct IBMDSwitcherKey_v4_1_3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKey_v4_1_3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKey_v4_1_3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKey_v4_1_3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKey_v4_1_3_GetType(This,type)	\
    ( (This)->lpVtbl -> GetType(This,type) ) 

#define IBMDSwitcherKey_v4_1_3_SetType(This,type)	\
    ( (This)->lpVtbl -> SetType(This,type) ) 

#define IBMDSwitcherKey_v4_1_3_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherKey_v4_1_3_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherKey_v4_1_3_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherKey_v4_1_3_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherKey_v4_1_3_GetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> GetOnAir(This,onAir) ) 

#define IBMDSwitcherKey_v4_1_3_SetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> SetOnAir(This,onAir) ) 

#define IBMDSwitcherKey_v4_1_3_CanBeDVEKey(This,canDVE)	\
    ( (This)->lpVtbl -> CanBeDVEKey(This,canDVE) ) 

#define IBMDSwitcherKey_v4_1_3_GetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> GetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKey_v4_1_3_SetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> SetMasked(This,maskEnabled) ) 

#define IBMDSwitcherKey_v4_1_3_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherKey_v4_1_3_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherKey_v4_1_3_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKey_v4_1_3_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKey_v4_1_3_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherKey_v4_1_3_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherKey_v4_1_3_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherKey_v4_1_3_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherKey_v4_1_3_ResetMask(This)	\
    ( (This)->lpVtbl -> ResetMask(This) ) 

#define IBMDSwitcherKey_v4_1_3_GetTransitionSelectionMask(This,selectionMask)	\
    ( (This)->lpVtbl -> GetTransitionSelectionMask(This,selectionMask) ) 

#define IBMDSwitcherKey_v4_1_3_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKey_v4_1_3_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKey_v4_1_3_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyIterator_v4_1_3_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyIterator_v4_1_3_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyIterator_v4_1_3 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyIterator_v4_1_3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EFD545AE-2879-412B-84B7-17A04E4707ED")
    IBMDSwitcherKeyIterator_v4_1_3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherKey_v4_1_3 **key) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyIterator_v4_1_3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyIterator_v4_1_3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyIterator_v4_1_3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyIterator_v4_1_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherKeyIterator_v4_1_3 * This,
            /* [out] */ IBMDSwitcherKey_v4_1_3 **key);
        
        END_INTERFACE
    } IBMDSwitcherKeyIterator_v4_1_3Vtbl;

    interface IBMDSwitcherKeyIterator_v4_1_3
    {
        CONST_VTBL struct IBMDSwitcherKeyIterator_v4_1_3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyIterator_v4_1_3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyIterator_v4_1_3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyIterator_v4_1_3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyIterator_v4_1_3_Next(This,key)	\
    ( (This)->lpVtbl -> Next(This,key) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyIterator_v4_1_3_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputSuperSource_v4_1_3_INTERFACE_DEFINED__
#define __IBMDSwitcherInputSuperSource_v4_1_3_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputSuperSource_v4_1_3 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputSuperSource_v4_1_3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("327DBE95-F003-409E-8FEB-D9C624C439BC")
    IBMDSwitcherInputSuperSource_v4_1_3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArtOption( 
            /* [out] */ BMDSwitcherSuperSourceArtOption *artOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetArtOption( 
            /* [in] */ BMDSwitcherSuperSourceArtOption artOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderEnabled( 
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderEnabled( 
            /* [in] */ BOOL enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevel( 
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevel( 
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthOut( 
            /* [out] */ double *widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthOut( 
            /* [in] */ double widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthIn( 
            /* [out] */ double *widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthIn( 
            /* [in] */ double widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessOut( 
            /* [out] */ double *softnessOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessOut( 
            /* [in] */ double softnessOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessIn( 
            /* [out] */ double *softnessIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessIn( 
            /* [in] */ double softnessIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelSoftness( 
            /* [out] */ double *bevelSoftness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelSoftness( 
            /* [in] */ double bevelSoftness) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelPosition( 
            /* [out] */ double *bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelPosition( 
            /* [in] */ double bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceDirection( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceDirection( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceAltitude( 
            /* [out] */ double *altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceAltitude( 
            /* [in] */ double altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputSuperSource_v4_1_3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetArtOption )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ BMDSwitcherSuperSourceArtOption *artOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetArtOption )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ BMDSwitcherSuperSourceArtOption artOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderEnabled )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderEnabled )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ BOOL enabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevel )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ BMDSwitcherBorderBevelOption *bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevel )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ BMDSwitcherBorderBevelOption bevelOption);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthOut )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthOut )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthIn )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthIn )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessOut )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *softnessOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessOut )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double softnessOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessIn )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *softnessIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessIn )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double softnessIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelSoftness )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *bevelSoftness);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelSoftness )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double bevelSoftness);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelPosition )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelPosition )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderHue )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderHue )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSaturation )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSaturation )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLuma )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLuma )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceDirection )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceDirection )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceAltitude )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [out] */ double *altitude);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceAltitude )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ double altitude);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ IBMDSwitcherInputSuperSourceCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherInputSuperSource_v4_1_3 * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        END_INTERFACE
    } IBMDSwitcherInputSuperSource_v4_1_3Vtbl;

    interface IBMDSwitcherInputSuperSource_v4_1_3
    {
        CONST_VTBL struct IBMDSwitcherInputSuperSource_v4_1_3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputSuperSource_v4_1_3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputSuperSource_v4_1_3_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetArtOption(This,artOption)	\
    ( (This)->lpVtbl -> GetArtOption(This,artOption) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetArtOption(This,artOption)	\
    ( (This)->lpVtbl -> SetArtOption(This,artOption) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderEnabled(This,enabled)	\
    ( (This)->lpVtbl -> GetBorderEnabled(This,enabled) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderEnabled(This,enabled)	\
    ( (This)->lpVtbl -> SetBorderEnabled(This,enabled) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> GetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderBevel(This,bevelOption)	\
    ( (This)->lpVtbl -> SetBorderBevel(This,bevelOption) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> GetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> SetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> GetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> SetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderSoftnessOut(This,softnessOut)	\
    ( (This)->lpVtbl -> GetBorderSoftnessOut(This,softnessOut) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderSoftnessOut(This,softnessOut)	\
    ( (This)->lpVtbl -> SetBorderSoftnessOut(This,softnessOut) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderSoftnessIn(This,softnessIn)	\
    ( (This)->lpVtbl -> GetBorderSoftnessIn(This,softnessIn) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderSoftnessIn(This,softnessIn)	\
    ( (This)->lpVtbl -> SetBorderSoftnessIn(This,softnessIn) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderBevelSoftness(This,bevelSoftness)	\
    ( (This)->lpVtbl -> GetBorderBevelSoftness(This,bevelSoftness) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderBevelSoftness(This,bevelSoftness)	\
    ( (This)->lpVtbl -> SetBorderBevelSoftness(This,bevelSoftness) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> GetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> SetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> GetBorderHue(This,hue) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> SetBorderHue(This,hue) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetBorderSaturation(This,sat) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetBorderSaturation(This,sat) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> GetBorderLuma(This,luma) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> SetBorderLuma(This,luma) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> GetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> SetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_GetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> GetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_SetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> SetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherInputSuperSource_v4_1_3_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputSuperSource_v4_1_3_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKey_v4_1_3_INTERFACE_DEFINED__
#define __IBMDSwitcherDownstreamKey_v4_1_3_INTERFACE_DEFINED__

/* interface IBMDSwitcherDownstreamKey_v4_1_3 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDownstreamKey_v4_1_3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D10D51E-71FA-4031-BC13-95BE3653D0E6")
    IBMDSwitcherDownstreamKey_v4_1_3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTie( 
            /* [out] */ BOOL *tie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTie( 
            /* [in] */ BOOL tie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOnAir( 
            /* [out] */ BOOL *onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOnAir( 
            /* [in] */ BOOL onAir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PerformAutoTransition( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsTransitioning( 
            /* [out] */ BOOL *isTransitioning) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAutoTransitioning( 
            /* [out] */ BOOL *isAutoTransitioning) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFramesRemaining( 
            /* [out] */ unsigned int *framesRemaining) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMasked( 
            /* [out] */ BOOL *maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMasked( 
            /* [in] */ BOOL maskEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetMask( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDownstreamKey_v4_1_3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetTie )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BOOL *tie);
        
        HRESULT ( STDMETHODCALLTYPE *SetTie )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ BOOL tie);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetOnAir )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BOOL *onAir);
        
        HRESULT ( STDMETHODCALLTYPE *SetOnAir )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ BOOL onAir);
        
        HRESULT ( STDMETHODCALLTYPE *PerformAutoTransition )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsTransitioning )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BOOL *isTransitioning);
        
        HRESULT ( STDMETHODCALLTYPE *IsAutoTransitioning )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BOOL *isAutoTransitioning);
        
        HRESULT ( STDMETHODCALLTYPE *GetFramesRemaining )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ unsigned int *framesRemaining);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetMasked )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BOOL *maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetMasked )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ BOOL maskEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *ResetMask )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherDownstreamKey_v4_1_3 * This,
            /* [in] */ IBMDSwitcherDownstreamKeyCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherDownstreamKey_v4_1_3Vtbl;

    interface IBMDSwitcherDownstreamKey_v4_1_3
    {
        CONST_VTBL struct IBMDSwitcherDownstreamKey_v4_1_3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDownstreamKey_v4_1_3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDownstreamKey_v4_1_3_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetTie(This,tie)	\
    ( (This)->lpVtbl -> GetTie(This,tie) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetTie(This,tie)	\
    ( (This)->lpVtbl -> SetTie(This,tie) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> GetOnAir(This,onAir) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetOnAir(This,onAir)	\
    ( (This)->lpVtbl -> SetOnAir(This,onAir) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_PerformAutoTransition(This)	\
    ( (This)->lpVtbl -> PerformAutoTransition(This) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_IsTransitioning(This,isTransitioning)	\
    ( (This)->lpVtbl -> IsTransitioning(This,isTransitioning) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_IsAutoTransitioning(This,isAutoTransitioning)	\
    ( (This)->lpVtbl -> IsAutoTransitioning(This,isAutoTransitioning) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetFramesRemaining(This,framesRemaining)	\
    ( (This)->lpVtbl -> GetFramesRemaining(This,framesRemaining) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> GetMasked(This,maskEnabled) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetMasked(This,maskEnabled)	\
    ( (This)->lpVtbl -> SetMasked(This,maskEnabled) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_ResetMask(This)	\
    ( (This)->lpVtbl -> ResetMask(This) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_GetInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherDownstreamKey_v4_1_3_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDownstreamKey_v4_1_3_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDownstreamKeyIterator_v4_1_3_INTERFACE_DEFINED__
#define __IBMDSwitcherDownstreamKeyIterator_v4_1_3_INTERFACE_DEFINED__

/* interface IBMDSwitcherDownstreamKeyIterator_v4_1_3 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDownstreamKeyIterator_v4_1_3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD063042-B7FD-4819-BD1E-809DC380DFE9")
    IBMDSwitcherDownstreamKeyIterator_v4_1_3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherDownstreamKey_v4_1_3 **downstreamKey) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDownstreamKeyIterator_v4_1_3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDownstreamKeyIterator_v4_1_3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDownstreamKeyIterator_v4_1_3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDownstreamKeyIterator_v4_1_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherDownstreamKeyIterator_v4_1_3 * This,
            /* [out] */ IBMDSwitcherDownstreamKey_v4_1_3 **downstreamKey);
        
        END_INTERFACE
    } IBMDSwitcherDownstreamKeyIterator_v4_1_3Vtbl;

    interface IBMDSwitcherDownstreamKeyIterator_v4_1_3
    {
        CONST_VTBL struct IBMDSwitcherDownstreamKeyIterator_v4_1_3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDownstreamKeyIterator_v4_1_3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDownstreamKeyIterator_v4_1_3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDownstreamKeyIterator_v4_1_3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDownstreamKeyIterator_v4_1_3_Next(This,downstreamKey)	\
    ( (This)->lpVtbl -> Next(This,downstreamKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDownstreamKeyIterator_v4_1_3_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixer_v6_0_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMixer_v6_0_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMixer_v6_0 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMixer_v6_0;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("58739C15-063E-4FC1-B59B-CC3D9A012D99")
    IBMDSwitcherAudioMixer_v6_0 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutBalance( 
            /* [out] */ double *balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutBalance( 
            /* [in] */ double balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAllLevelNotificationsEnable( 
            /* [in] */ BOOL enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetProgramOutLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetAllLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMixer_v6_0Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMixer_v6_0 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMixer_v6_0 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMixer_v6_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutGain )( 
            IBMDSwitcherAudioMixer_v6_0 * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutGain )( 
            IBMDSwitcherAudioMixer_v6_0 * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutBalance )( 
            IBMDSwitcherAudioMixer_v6_0 * This,
            /* [out] */ double *balance);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutBalance )( 
            IBMDSwitcherAudioMixer_v6_0 * This,
            /* [in] */ double balance);
        
        HRESULT ( STDMETHODCALLTYPE *SetAllLevelNotificationsEnable )( 
            IBMDSwitcherAudioMixer_v6_0 * This,
            /* [in] */ BOOL enable);
        
        HRESULT ( STDMETHODCALLTYPE *ResetProgramOutLevelNotificationPeaks )( 
            IBMDSwitcherAudioMixer_v6_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetAllLevelNotificationPeaks )( 
            IBMDSwitcherAudioMixer_v6_0 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioMixer_v6_0 * This,
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioMixer_v6_0 * This,
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherAudioMixer_v6_0 * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        END_INTERFACE
    } IBMDSwitcherAudioMixer_v6_0Vtbl;

    interface IBMDSwitcherAudioMixer_v6_0
    {
        CONST_VTBL struct IBMDSwitcherAudioMixer_v6_0Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMixer_v6_0_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMixer_v6_0_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMixer_v6_0_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMixer_v6_0_GetProgramOutGain(This,gain)	\
    ( (This)->lpVtbl -> GetProgramOutGain(This,gain) ) 

#define IBMDSwitcherAudioMixer_v6_0_SetProgramOutGain(This,gain)	\
    ( (This)->lpVtbl -> SetProgramOutGain(This,gain) ) 

#define IBMDSwitcherAudioMixer_v6_0_GetProgramOutBalance(This,balance)	\
    ( (This)->lpVtbl -> GetProgramOutBalance(This,balance) ) 

#define IBMDSwitcherAudioMixer_v6_0_SetProgramOutBalance(This,balance)	\
    ( (This)->lpVtbl -> SetProgramOutBalance(This,balance) ) 

#define IBMDSwitcherAudioMixer_v6_0_SetAllLevelNotificationsEnable(This,enable)	\
    ( (This)->lpVtbl -> SetAllLevelNotificationsEnable(This,enable) ) 

#define IBMDSwitcherAudioMixer_v6_0_ResetProgramOutLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetProgramOutLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMixer_v6_0_ResetAllLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetAllLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMixer_v6_0_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioMixer_v6_0_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherAudioMixer_v6_0_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMixer_v6_0_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherCallback_v6_4_1_INTERFACE_DEFINED__
#define __IBMDSwitcherCallback_v6_4_1_INTERFACE_DEFINED__

/* interface IBMDSwitcherCallback_v6_4_1 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherCallback_v6_4_1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6122F290-8003-4CDB-9493-54BD3FBCD3A1")
    IBMDSwitcherCallback_v6_4_1 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherEventType_v6_4_1 eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherCallback_v6_4_1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherCallback_v6_4_1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherCallback_v6_4_1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherCallback_v6_4_1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherCallback_v6_4_1 * This,
            /* [in] */ BMDSwitcherEventType_v6_4_1 eventType);
        
        END_INTERFACE
    } IBMDSwitcherCallback_v6_4_1Vtbl;

    interface IBMDSwitcherCallback_v6_4_1
    {
        CONST_VTBL struct IBMDSwitcherCallback_v6_4_1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherCallback_v6_4_1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherCallback_v6_4_1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherCallback_v6_4_1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherCallback_v6_4_1_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherCallback_v6_4_1_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcher_v6_4_1_INTERFACE_DEFINED__
#define __IBMDSwitcher_v6_4_1_INTERFACE_DEFINED__

/* interface IBMDSwitcher_v6_4_1 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcher_v6_4_1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13772940-59AE-4F4A-A4E4-0BD12F56C791")
    IBMDSwitcher_v6_4_1 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProductName( 
            /* [out] */ BSTR *productName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVideoMode( 
            /* [out] */ BMDSwitcherVideoMode *videoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVideoMode( 
            /* [in] */ BMDSwitcherVideoMode videoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDownConverterMode( 
            /* [out] */ BMDSwitcherDownConverterMode_v6_4_1 *downConverterMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDownConverterMode( 
            /* [in] */ BMDSwitcherDownConverterMode_v6_4_1 downConverterMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPowerStatus( 
            /* [out] */ BMDSwitcherPowerStatus *powerStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportVideoMode( 
            /* [in] */ BMDSwitcherVideoMode videoMode,
            /* [out] */ BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherCallback_v6_4_1 *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherCallback_v6_4_1 *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcher_v6_4_1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcher_v6_4_1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcher_v6_4_1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProductName )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [out] */ BSTR *productName);
        
        HRESULT ( STDMETHODCALLTYPE *GetVideoMode )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [out] */ BMDSwitcherVideoMode *videoMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetVideoMode )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [in] */ BMDSwitcherVideoMode videoMode);
        
        HRESULT ( STDMETHODCALLTYPE *GetDownConverterMode )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [out] */ BMDSwitcherDownConverterMode_v6_4_1 *downConverterMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetDownConverterMode )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [in] */ BMDSwitcherDownConverterMode_v6_4_1 downConverterMode);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerStatus )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [out] */ BMDSwitcherPowerStatus *powerStatus);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportVideoMode )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [in] */ BMDSwitcherVideoMode videoMode,
            /* [out] */ BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [in] */ IBMDSwitcherCallback_v6_4_1 *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcher_v6_4_1 * This,
            /* [in] */ IBMDSwitcherCallback_v6_4_1 *callback);
        
        END_INTERFACE
    } IBMDSwitcher_v6_4_1Vtbl;

    interface IBMDSwitcher_v6_4_1
    {
        CONST_VTBL struct IBMDSwitcher_v6_4_1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcher_v6_4_1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcher_v6_4_1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcher_v6_4_1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcher_v6_4_1_GetProductName(This,productName)	\
    ( (This)->lpVtbl -> GetProductName(This,productName) ) 

#define IBMDSwitcher_v6_4_1_GetVideoMode(This,videoMode)	\
    ( (This)->lpVtbl -> GetVideoMode(This,videoMode) ) 

#define IBMDSwitcher_v6_4_1_SetVideoMode(This,videoMode)	\
    ( (This)->lpVtbl -> SetVideoMode(This,videoMode) ) 

#define IBMDSwitcher_v6_4_1_GetDownConverterMode(This,downConverterMode)	\
    ( (This)->lpVtbl -> GetDownConverterMode(This,downConverterMode) ) 

#define IBMDSwitcher_v6_4_1_SetDownConverterMode(This,downConverterMode)	\
    ( (This)->lpVtbl -> SetDownConverterMode(This,downConverterMode) ) 

#define IBMDSwitcher_v6_4_1_GetPowerStatus(This,powerStatus)	\
    ( (This)->lpVtbl -> GetPowerStatus(This,powerStatus) ) 

#define IBMDSwitcher_v6_4_1_DoesSupportVideoMode(This,videoMode,supported)	\
    ( (This)->lpVtbl -> DoesSupportVideoMode(This,videoMode,supported) ) 

#define IBMDSwitcher_v6_4_1_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcher_v6_4_1_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcher_v6_4_1_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcher_v6_4_1_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_v6_4_1_INTERFACE_DEFINED__
#define __IBMDSwitcherDiscovery_v6_4_1_INTERFACE_DEFINED__

/* interface IBMDSwitcherDiscovery_v6_4_1 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDiscovery_v6_4_1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0283B116-8CE0-4F86-A1FD-D25EAD2F1A00")
    IBMDSwitcherDiscovery_v6_4_1 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConnectTo( 
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher_v6_4_1 **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDiscovery_v6_4_1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDiscovery_v6_4_1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDiscovery_v6_4_1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDiscovery_v6_4_1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectTo )( 
            IBMDSwitcherDiscovery_v6_4_1 * This,
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher_v6_4_1 **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason);
        
        END_INTERFACE
    } IBMDSwitcherDiscovery_v6_4_1Vtbl;

    interface IBMDSwitcherDiscovery_v6_4_1
    {
        CONST_VTBL struct IBMDSwitcherDiscovery_v6_4_1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDiscovery_v6_4_1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDiscovery_v6_4_1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDiscovery_v6_4_1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDiscovery_v6_4_1_ConnectTo(This,deviceAddress,switcherDevice,failReason)	\
    ( (This)->lpVtbl -> ConnectTo(This,deviceAddress,switcherDevice,failReason) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDiscovery_v6_4_1_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CBMDSwitcherDiscovery_v6_4_1;

#ifdef __cplusplus

class DECLSPEC_UUID("C9F0A63F-69C5-40FD-84F6-A8632B0D65D6")
CBMDSwitcherDiscovery_v6_4_1;
#endif

#ifndef __IBMDSwitcherInputCallback_v6_5_1_INTERFACE_DEFINED__
#define __IBMDSwitcherInputCallback_v6_5_1_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputCallback_v6_5_1 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputCallback_v6_5_1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E583D89-0BAF-4447-AB8C-6A12CD8724CB")
    IBMDSwitcherInputCallback_v6_5_1 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PropertyChanged( 
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputCallback_v6_5_1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputCallback_v6_5_1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputCallback_v6_5_1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputCallback_v6_5_1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *PropertyChanged )( 
            IBMDSwitcherInputCallback_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId);
        
        END_INTERFACE
    } IBMDSwitcherInputCallback_v6_5_1Vtbl;

    interface IBMDSwitcherInputCallback_v6_5_1
    {
        CONST_VTBL struct IBMDSwitcherInputCallback_v6_5_1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputCallback_v6_5_1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputCallback_v6_5_1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputCallback_v6_5_1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputCallback_v6_5_1_PropertyChanged(This,propertyId)	\
    ( (This)->lpVtbl -> PropertyChanged(This,propertyId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputCallback_v6_5_1_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInput_v6_5_1_INTERFACE_DEFINED__
#define __IBMDSwitcherInput_v6_5_1_INTERFACE_DEFINED__

/* interface IBMDSwitcherInput_v6_5_1 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInput_v6_5_1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66F3D466-8C8C-4DB4-B313-8DD2EC665DBB")
    IBMDSwitcherInput_v6_5_1 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputCallback_v6_5_1 *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputCallback_v6_5_1 *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlag( 
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlag( 
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [out] */ BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt( 
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [in] */ long long value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt( 
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [out] */ long long *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFloat( 
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [in] */ double value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFloat( 
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [out] */ double *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetString( 
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [in] */ BSTR value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [out] */ BSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputId( 
            /* [out] */ BMDSwitcherInputId *inputId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInput_v6_5_1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInput_v6_5_1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInput_v6_5_1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ IBMDSwitcherInputCallback_v6_5_1 *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ IBMDSwitcherInputCallback_v6_5_1 *callback);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlag )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [in] */ BOOL value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlag )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [out] */ BOOL *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [in] */ long long value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [out] */ long long *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetFloat )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [in] */ double value);
        
        HRESULT ( STDMETHODCALLTYPE *GetFloat )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [out] */ double *value);
        
        HRESULT ( STDMETHODCALLTYPE *SetString )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [in] */ BSTR value);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputPropertyId_v6_5_1 propertyId,
            /* [out] */ BSTR *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputId )( 
            IBMDSwitcherInput_v6_5_1 * This,
            /* [out] */ BMDSwitcherInputId *inputId);
        
        END_INTERFACE
    } IBMDSwitcherInput_v6_5_1Vtbl;

    interface IBMDSwitcherInput_v6_5_1
    {
        CONST_VTBL struct IBMDSwitcherInput_v6_5_1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInput_v6_5_1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInput_v6_5_1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInput_v6_5_1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInput_v6_5_1_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInput_v6_5_1_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherInput_v6_5_1_SetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFlag(This,propertyId,value) ) 

#define IBMDSwitcherInput_v6_5_1_GetFlag(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFlag(This,propertyId,value) ) 

#define IBMDSwitcherInput_v6_5_1_SetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetInt(This,propertyId,value) ) 

#define IBMDSwitcherInput_v6_5_1_GetInt(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetInt(This,propertyId,value) ) 

#define IBMDSwitcherInput_v6_5_1_SetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetFloat(This,propertyId,value) ) 

#define IBMDSwitcherInput_v6_5_1_GetFloat(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetFloat(This,propertyId,value) ) 

#define IBMDSwitcherInput_v6_5_1_SetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> SetString(This,propertyId,value) ) 

#define IBMDSwitcherInput_v6_5_1_GetString(This,propertyId,value)	\
    ( (This)->lpVtbl -> GetString(This,propertyId,value) ) 

#define IBMDSwitcherInput_v6_5_1_GetInputId(This,inputId)	\
    ( (This)->lpVtbl -> GetInputId(This,inputId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInput_v6_5_1_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputIterator_v6_5_1_INTERFACE_DEFINED__
#define __IBMDSwitcherInputIterator_v6_5_1_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputIterator_v6_5_1 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputIterator_v6_5_1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92AB7A73-C6F6-47FC-92A7-C8EEADC9EAAC")
    IBMDSwitcherInputIterator_v6_5_1 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherInput_v6_5_1 **input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ BMDSwitcherInputId inputId,
            /* [out] */ IBMDSwitcherInput_v6_5_1 **input) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputIterator_v6_5_1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputIterator_v6_5_1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputIterator_v6_5_1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputIterator_v6_5_1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherInputIterator_v6_5_1 * This,
            /* [out] */ IBMDSwitcherInput_v6_5_1 **input);
        
        HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IBMDSwitcherInputIterator_v6_5_1 * This,
            /* [in] */ BMDSwitcherInputId inputId,
            /* [out] */ IBMDSwitcherInput_v6_5_1 **input);
        
        END_INTERFACE
    } IBMDSwitcherInputIterator_v6_5_1Vtbl;

    interface IBMDSwitcherInputIterator_v6_5_1
    {
        CONST_VTBL struct IBMDSwitcherInputIterator_v6_5_1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputIterator_v6_5_1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputIterator_v6_5_1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputIterator_v6_5_1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputIterator_v6_5_1_Next(This,input)	\
    ( (This)->lpVtbl -> Next(This,input) ) 

#define IBMDSwitcherInputIterator_v6_5_1_GetById(This,inputId,input)	\
    ( (This)->lpVtbl -> GetById(This,inputId,input) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputIterator_v6_5_1_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyKeyFrameParameters_v6_7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A6B8530A-B0C3-4304-8172-6D5ED93989B1")
    IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSizeX( 
            /* [out] */ double *multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeX( 
            /* [in] */ double multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeY( 
            /* [out] */ double *multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeY( 
            /* [in] */ double multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRotation( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRotation( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthOut( 
            /* [out] */ double *widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthOut( 
            /* [in] */ double widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthIn( 
            /* [out] */ double *widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthIn( 
            /* [in] */ double widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessOut( 
            /* [out] */ double *softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessOut( 
            /* [in] */ double softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessIn( 
            /* [out] */ double *softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessIn( 
            /* [in] */ double softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelSoftness( 
            /* [out] */ double *bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelSoftness( 
            /* [in] */ double bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelPosition( 
            /* [out] */ double *bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelPosition( 
            /* [in] */ double bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderOpacity( 
            /* [out] */ double *opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderOpacity( 
            /* [in] */ double opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceDirection( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceDirection( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceAltitude( 
            /* [out] */ double *altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceAltitude( 
            /* [in] */ double altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyKeyFrameParameters_v6_7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *GetRotation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetRotation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *softOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double softOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *softIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double softIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelSoftness )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelSoftness )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelPosition )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelPosition )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderOpacity )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *opacity);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderOpacity )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double opacity);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderHue )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderHue )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSaturation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSaturation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLuma )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLuma )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceDirection )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceDirection )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceAltitude )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *altitude);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceAltitude )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double altitude);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 * This,
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyKeyFrameParameters_v6_7Vtbl;

    interface IBMDSwitcherKeyFlyKeyFrameParameters_v6_7
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyKeyFrameParameters_v6_7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> GetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> SetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> GetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> SetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> GetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> SetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> GetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> SetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetRotation(This,degrees)	\
    ( (This)->lpVtbl -> GetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetRotation(This,degrees)	\
    ( (This)->lpVtbl -> SetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> GetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> SetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> GetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> SetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> GetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> SetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> GetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> SetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> GetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> SetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> GetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> SetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> GetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> SetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> GetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> SetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> GetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> SetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> GetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> SetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> GetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> SetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyKeyFrameParameters_v6_7_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParameters_v6_7_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_v6_7_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyParameters_v6_7 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyParameters_v6_7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB1D2964-F55B-491E-9C5D-8E43304C34FD")
    IBMDSwitcherKeyFlyParameters_v6_7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFly( 
            /* [out] */ BOOL *isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFly( 
            /* [in] */ BOOL isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanFly( 
            /* [out] */ BOOL *canFly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeX( 
            /* [out] */ double *multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeX( 
            /* [in] */ double multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeY( 
            /* [out] */ double *multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeY( 
            /* [in] */ double multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRotation( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRotation( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetRotation( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVE( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVEFull( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsKeyFrameStored( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StoreAsKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RunToKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAtKeyFrames( 
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKeyFrameParameters( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 **keyFrameParameters) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRunning( 
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyParameters_v6_7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFly )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ BOOL *isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetFly )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ BOOL isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanFly )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ BOOL *canFly);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeX )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ double *multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeX )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ double multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeY )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ double *multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeY )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ double multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ double *offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ double offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ double *offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ double offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *GetRotation )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetRotation )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *ResetRotation )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVE )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVEFull )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsKeyFrameStored )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored);
        
        HRESULT ( STDMETHODCALLTYPE *StoreAsKeyFrame )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        HRESULT ( STDMETHODCALLTYPE *ClearKeyFrame )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        HRESULT ( STDMETHODCALLTYPE *RunToKeyFrame )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame destination);
        
        HRESULT ( STDMETHODCALLTYPE *IsAtKeyFrames )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames);
        
        HRESULT ( STDMETHODCALLTYPE *GetKeyFrameParameters )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ IBMDSwitcherKeyFlyKeyFrameParameters_v6_7 **keyFrameParameters);
        
        HRESULT ( STDMETHODCALLTYPE *IsRunning )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyFlyParameters_v6_7 * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyParameters_v6_7Vtbl;

    interface IBMDSwitcherKeyFlyParameters_v6_7
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyParameters_v6_7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyParameters_v6_7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyParameters_v6_7_GetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> GetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_SetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> SetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_GetCanFly(This,canFly)	\
    ( (This)->lpVtbl -> GetCanFly(This,canFly) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_GetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> GetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_SetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> SetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_GetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> GetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_SetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> SetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_GetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> GetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_SetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> SetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_GetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> GetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_SetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> SetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_GetRotation(This,degrees)	\
    ( (This)->lpVtbl -> GetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_SetRotation(This,degrees)	\
    ( (This)->lpVtbl -> SetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_ResetRotation(This)	\
    ( (This)->lpVtbl -> ResetRotation(This) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_ResetDVE(This)	\
    ( (This)->lpVtbl -> ResetDVE(This) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_ResetDVEFull(This)	\
    ( (This)->lpVtbl -> ResetDVEFull(This) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_IsKeyFrameStored(This,keyFrame,stored)	\
    ( (This)->lpVtbl -> IsKeyFrameStored(This,keyFrame,stored) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_StoreAsKeyFrame(This,keyFrame)	\
    ( (This)->lpVtbl -> StoreAsKeyFrame(This,keyFrame) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_ClearKeyFrame(This,keyFrame)	\
    ( (This)->lpVtbl -> ClearKeyFrame(This,keyFrame) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_RunToKeyFrame(This,destination)	\
    ( (This)->lpVtbl -> RunToKeyFrame(This,destination) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_IsAtKeyFrames(This,keyFrames)	\
    ( (This)->lpVtbl -> IsAtKeyFrames(This,keyFrames) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_GetKeyFrameParameters(This,keyFrame,keyFrameParameters)	\
    ( (This)->lpVtbl -> GetKeyFrameParameters(This,keyFrame,keyFrameParameters) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_IsRunning(This,isRunning,destination)	\
    ( (This)->lpVtbl -> IsRunning(This,isRunning,destination) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyFlyParameters_v6_7_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyParameters_v6_7_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTransitionDVEParameters_v6_7_INTERFACE_DEFINED__
#define __IBMDSwitcherTransitionDVEParameters_v6_7_INTERFACE_DEFINED__

/* interface IBMDSwitcherTransitionDVEParameters_v6_7 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTransitionDVEParameters_v6_7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CAA10B02-F7CB-47A6-97DA-C71DEF172712")
    IBMDSwitcherTransitionDVEParameters_v6_7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLogoRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLogoRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReverse( 
            /* [out] */ BOOL *reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReverse( 
            /* [in] */ BOOL reverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlipFlop( 
            /* [out] */ BOOL *flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlipFlop( 
            /* [in] */ BOOL flipflop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStyle( 
            /* [out] */ BMDSwitcherDVETransitionStyle *style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetStyle( 
            /* [in] */ BMDSwitcherDVETransitionStyle style) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputFill( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputFill( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputCut( 
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputCut( 
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFillInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCutInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *mask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnableKey( 
            /* [out] */ BOOL *enableKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnableKey( 
            /* [in] */ BOOL enableKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPreMultiplied( 
            /* [out] */ BOOL *preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPreMultiplied( 
            /* [in] */ BOOL preMultiplied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClip( 
            /* [out] */ double *clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClip( 
            /* [in] */ double clip) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInverse( 
            /* [out] */ BOOL *inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInverse( 
            /* [in] */ BOOL inverse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTransitionDVEParameters_v6_7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetLogoRate )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetLogoRate )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetReverse )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BOOL *reverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetReverse )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ BOOL reverse);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlipFlop )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BOOL *flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlipFlop )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ BOOL flipflop);
        
        HRESULT ( STDMETHODCALLTYPE *GetStyle )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BMDSwitcherDVETransitionStyle *style);
        
        HRESULT ( STDMETHODCALLTYPE *SetStyle )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ BMDSwitcherDVETransitionStyle style);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputFill )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputFill )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCut )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputCut )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetFillInputAvailabilityMask )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *GetCutInputAvailabilityMask )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BMDSwitcherInputAvailability *mask);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnableKey )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BOOL *enableKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnableKey )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ BOOL enableKey);
        
        HRESULT ( STDMETHODCALLTYPE *GetPreMultiplied )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BOOL *preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *SetPreMultiplied )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ BOOL preMultiplied);
        
        HRESULT ( STDMETHODCALLTYPE *GetClip )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ double *clip);
        
        HRESULT ( STDMETHODCALLTYPE *SetClip )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ double clip);
        
        HRESULT ( STDMETHODCALLTYPE *GetGain )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetGain )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetInverse )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [out] */ BOOL *inverse);
        
        HRESULT ( STDMETHODCALLTYPE *SetInverse )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ BOOL inverse);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTransitionDVEParameters_v6_7 * This,
            /* [in] */ IBMDSwitcherTransitionDVEParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherTransitionDVEParameters_v6_7Vtbl;

    interface IBMDSwitcherTransitionDVEParameters_v6_7
    {
        CONST_VTBL struct IBMDSwitcherTransitionDVEParameters_v6_7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTransitionDVEParameters_v6_7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTransitionDVEParameters_v6_7_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetLogoRate(This,frames)	\
    ( (This)->lpVtbl -> GetLogoRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetLogoRate(This,frames)	\
    ( (This)->lpVtbl -> SetLogoRate(This,frames) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetReverse(This,reverse)	\
    ( (This)->lpVtbl -> GetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetReverse(This,reverse)	\
    ( (This)->lpVtbl -> SetReverse(This,reverse) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> GetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetFlipFlop(This,flipflop)	\
    ( (This)->lpVtbl -> SetFlipFlop(This,flipflop) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetStyle(This,style)	\
    ( (This)->lpVtbl -> GetStyle(This,style) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetStyle(This,style)	\
    ( (This)->lpVtbl -> SetStyle(This,style) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetInputFill(This,input)	\
    ( (This)->lpVtbl -> GetInputFill(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetInputFill(This,input)	\
    ( (This)->lpVtbl -> SetInputFill(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetInputCut(This,input)	\
    ( (This)->lpVtbl -> GetInputCut(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetInputCut(This,input)	\
    ( (This)->lpVtbl -> SetInputCut(This,input) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetFillInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetFillInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetCutInputAvailabilityMask(This,mask)	\
    ( (This)->lpVtbl -> GetCutInputAvailabilityMask(This,mask) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetEnableKey(This,enableKey)	\
    ( (This)->lpVtbl -> GetEnableKey(This,enableKey) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetEnableKey(This,enableKey)	\
    ( (This)->lpVtbl -> SetEnableKey(This,enableKey) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> GetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetPreMultiplied(This,preMultiplied)	\
    ( (This)->lpVtbl -> SetPreMultiplied(This,preMultiplied) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetClip(This,clip)	\
    ( (This)->lpVtbl -> GetClip(This,clip) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetClip(This,clip)	\
    ( (This)->lpVtbl -> SetClip(This,clip) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetGain(This,gain)	\
    ( (This)->lpVtbl -> GetGain(This,gain) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetGain(This,gain)	\
    ( (This)->lpVtbl -> SetGain(This,gain) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_GetInverse(This,inverse)	\
    ( (This)->lpVtbl -> GetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_SetInverse(This,inverse)	\
    ( (This)->lpVtbl -> SetInverse(This,inverse) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTransitionDVEParameters_v6_7_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTransitionDVEParameters_v6_7_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcher_v6_7_INTERFACE_DEFINED__
#define __IBMDSwitcher_v6_7_INTERFACE_DEFINED__

/* interface IBMDSwitcher_v6_7 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcher_v6_7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38A89278-D0EF-499A-A73F-464C8F9C866E")
    IBMDSwitcher_v6_7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProductName( 
            /* [out] */ BSTR *productName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVideoMode( 
            /* [out] */ BMDSwitcherVideoMode *videoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVideoMode( 
            /* [in] */ BMDSwitcherVideoMode videoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportVideoMode( 
            /* [in] */ BMDSwitcherVideoMode videoMode,
            /* [out] */ BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMethodForDownConvertedSD( 
            /* [out] */ BMDSwitcherDownConversionMethod *method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMethodForDownConvertedSD( 
            /* [in] */ BMDSwitcherDownConversionMethod method) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDownConvertedHDVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [out] */ BMDSwitcherVideoMode *downConvertedHDVideoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDownConvertedHDVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode downConvertedHDVideoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportDownConvertedHDVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode downConvertedHDVideoMode,
            /* [out] */ BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMultiViewVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [out] */ BMDSwitcherVideoMode *multiviewVideoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMultiViewVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode multiviewVideoMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesSupportMultiViewVideoMode( 
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode multiviewVideoMode,
            /* [out] */ BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPowerStatus( 
            /* [out] */ BMDSwitcherPowerStatus *powerStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcher_v6_7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcher_v6_7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcher_v6_7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProductName )( 
            IBMDSwitcher_v6_7 * This,
            /* [out] */ BSTR *productName);
        
        HRESULT ( STDMETHODCALLTYPE *GetVideoMode )( 
            IBMDSwitcher_v6_7 * This,
            /* [out] */ BMDSwitcherVideoMode *videoMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetVideoMode )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ BMDSwitcherVideoMode videoMode);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportVideoMode )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ BMDSwitcherVideoMode videoMode,
            /* [out] */ BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *GetMethodForDownConvertedSD )( 
            IBMDSwitcher_v6_7 * This,
            /* [out] */ BMDSwitcherDownConversionMethod *method);
        
        HRESULT ( STDMETHODCALLTYPE *SetMethodForDownConvertedSD )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ BMDSwitcherDownConversionMethod method);
        
        HRESULT ( STDMETHODCALLTYPE *GetDownConvertedHDVideoMode )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [out] */ BMDSwitcherVideoMode *downConvertedHDVideoMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetDownConvertedHDVideoMode )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode downConvertedHDVideoMode);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportDownConvertedHDVideoMode )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode downConvertedHDVideoMode,
            /* [out] */ BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *GetMultiViewVideoMode )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [out] */ BMDSwitcherVideoMode *multiviewVideoMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetMultiViewVideoMode )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode multiviewVideoMode);
        
        HRESULT ( STDMETHODCALLTYPE *DoesSupportMultiViewVideoMode )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ BMDSwitcherVideoMode coreVideoMode,
            /* [in] */ BMDSwitcherVideoMode multiviewVideoMode,
            /* [out] */ BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerStatus )( 
            IBMDSwitcher_v6_7 * This,
            /* [out] */ BMDSwitcherPowerStatus *powerStatus);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ IBMDSwitcherCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcher_v6_7 * This,
            /* [in] */ IBMDSwitcherCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcher_v6_7Vtbl;

    interface IBMDSwitcher_v6_7
    {
        CONST_VTBL struct IBMDSwitcher_v6_7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcher_v6_7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcher_v6_7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcher_v6_7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcher_v6_7_GetProductName(This,productName)	\
    ( (This)->lpVtbl -> GetProductName(This,productName) ) 

#define IBMDSwitcher_v6_7_GetVideoMode(This,videoMode)	\
    ( (This)->lpVtbl -> GetVideoMode(This,videoMode) ) 

#define IBMDSwitcher_v6_7_SetVideoMode(This,videoMode)	\
    ( (This)->lpVtbl -> SetVideoMode(This,videoMode) ) 

#define IBMDSwitcher_v6_7_DoesSupportVideoMode(This,videoMode,supported)	\
    ( (This)->lpVtbl -> DoesSupportVideoMode(This,videoMode,supported) ) 

#define IBMDSwitcher_v6_7_GetMethodForDownConvertedSD(This,method)	\
    ( (This)->lpVtbl -> GetMethodForDownConvertedSD(This,method) ) 

#define IBMDSwitcher_v6_7_SetMethodForDownConvertedSD(This,method)	\
    ( (This)->lpVtbl -> SetMethodForDownConvertedSD(This,method) ) 

#define IBMDSwitcher_v6_7_GetDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode)	\
    ( (This)->lpVtbl -> GetDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode) ) 

#define IBMDSwitcher_v6_7_SetDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode)	\
    ( (This)->lpVtbl -> SetDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode) ) 

#define IBMDSwitcher_v6_7_DoesSupportDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode,supported)	\
    ( (This)->lpVtbl -> DoesSupportDownConvertedHDVideoMode(This,coreVideoMode,downConvertedHDVideoMode,supported) ) 

#define IBMDSwitcher_v6_7_GetMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode)	\
    ( (This)->lpVtbl -> GetMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode) ) 

#define IBMDSwitcher_v6_7_SetMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode)	\
    ( (This)->lpVtbl -> SetMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode) ) 

#define IBMDSwitcher_v6_7_DoesSupportMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode,supported)	\
    ( (This)->lpVtbl -> DoesSupportMultiViewVideoMode(This,coreVideoMode,multiviewVideoMode,supported) ) 

#define IBMDSwitcher_v6_7_GetPowerStatus(This,powerStatus)	\
    ( (This)->lpVtbl -> GetPowerStatus(This,powerStatus) ) 

#define IBMDSwitcher_v6_7_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcher_v6_7_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcher_v6_7_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcher_v6_7_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherDiscovery_v6_7_INTERFACE_DEFINED__
#define __IBMDSwitcherDiscovery_v6_7_INTERFACE_DEFINED__

/* interface IBMDSwitcherDiscovery_v6_7 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherDiscovery_v6_7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB3FEF99-8561-4836-97B7-E5C768880D2A")
    IBMDSwitcherDiscovery_v6_7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ConnectTo( 
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher_v6_7 **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherDiscovery_v6_7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherDiscovery_v6_7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherDiscovery_v6_7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherDiscovery_v6_7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectTo )( 
            IBMDSwitcherDiscovery_v6_7 * This,
            /* [in] */ BSTR deviceAddress,
            /* [out] */ IBMDSwitcher_v6_7 **switcherDevice,
            /* [out] */ BMDSwitcherConnectToFailure *failReason);
        
        END_INTERFACE
    } IBMDSwitcherDiscovery_v6_7Vtbl;

    interface IBMDSwitcherDiscovery_v6_7
    {
        CONST_VTBL struct IBMDSwitcherDiscovery_v6_7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherDiscovery_v6_7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherDiscovery_v6_7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherDiscovery_v6_7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherDiscovery_v6_7_ConnectTo(This,deviceAddress,switcherDevice,failReason)	\
    ( (This)->lpVtbl -> ConnectTo(This,deviceAddress,switcherDevice,failReason) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherDiscovery_v6_7_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CBMDSwitcherDiscovery_v6_7;

#ifdef __cplusplus

class DECLSPEC_UUID("49895038-FB6D-4AF7-A637-7A92F09F8655")
CBMDSwitcherDiscovery_v6_7;
#endif

#ifndef __IBMDSwitcherMultiView_v6_8_INTERFACE_DEFINED__
#define __IBMDSwitcherMultiView_v6_8_INTERFACE_DEFINED__

/* interface IBMDSwitcherMultiView_v6_8 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMultiView_v6_8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("231AA55F-EC1D-4FFF-ACE7-3806BA7894BB")
    IBMDSwitcherMultiView_v6_8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLayout( 
            /* [out] */ BMDSwitcherMultiViewLayout *layout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLayout( 
            /* [in] */ BMDSwitcherMultiViewLayout layout) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWindowInput( 
            /* [in] */ unsigned int window,
            /* [out] */ BMDSwitcherInputId *input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWindowInput( 
            /* [in] */ unsigned int window,
            /* [in] */ BMDSwitcherInputId input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWindowCount( 
            /* [out] */ unsigned int *windowCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailabilityMask( 
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanRouteInputs( 
            /* [out] */ BOOL *canRoute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherMultiViewCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherMultiViewCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMultiView_v6_8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMultiView_v6_8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMultiView_v6_8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLayout )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [out] */ BMDSwitcherMultiViewLayout *layout);
        
        HRESULT ( STDMETHODCALLTYPE *SetLayout )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [in] */ BMDSwitcherMultiViewLayout layout);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindowInput )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [in] */ unsigned int window,
            /* [out] */ BMDSwitcherInputId *input);
        
        HRESULT ( STDMETHODCALLTYPE *SetWindowInput )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [in] */ unsigned int window,
            /* [in] */ BMDSwitcherInputId input);
        
        HRESULT ( STDMETHODCALLTYPE *GetWindowCount )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [out] */ unsigned int *windowCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailabilityMask )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [out] */ BMDSwitcherInputAvailability *availabilityMask);
        
        HRESULT ( STDMETHODCALLTYPE *CanRouteInputs )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [out] */ BOOL *canRoute);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [in] */ IBMDSwitcherMultiViewCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherMultiView_v6_8 * This,
            /* [in] */ IBMDSwitcherMultiViewCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherMultiView_v6_8Vtbl;

    interface IBMDSwitcherMultiView_v6_8
    {
        CONST_VTBL struct IBMDSwitcherMultiView_v6_8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMultiView_v6_8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMultiView_v6_8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMultiView_v6_8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMultiView_v6_8_GetLayout(This,layout)	\
    ( (This)->lpVtbl -> GetLayout(This,layout) ) 

#define IBMDSwitcherMultiView_v6_8_SetLayout(This,layout)	\
    ( (This)->lpVtbl -> SetLayout(This,layout) ) 

#define IBMDSwitcherMultiView_v6_8_GetWindowInput(This,window,input)	\
    ( (This)->lpVtbl -> GetWindowInput(This,window,input) ) 

#define IBMDSwitcherMultiView_v6_8_SetWindowInput(This,window,input)	\
    ( (This)->lpVtbl -> SetWindowInput(This,window,input) ) 

#define IBMDSwitcherMultiView_v6_8_GetWindowCount(This,windowCount)	\
    ( (This)->lpVtbl -> GetWindowCount(This,windowCount) ) 

#define IBMDSwitcherMultiView_v6_8_GetInputAvailabilityMask(This,availabilityMask)	\
    ( (This)->lpVtbl -> GetInputAvailabilityMask(This,availabilityMask) ) 

#define IBMDSwitcherMultiView_v6_8_CanRouteInputs(This,canRoute)	\
    ( (This)->lpVtbl -> CanRouteInputs(This,canRoute) ) 

#define IBMDSwitcherMultiView_v6_8_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherMultiView_v6_8_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMultiView_v6_8_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherMultiViewIterator_v6_8_INTERFACE_DEFINED__
#define __IBMDSwitcherMultiViewIterator_v6_8_INTERFACE_DEFINED__

/* interface IBMDSwitcherMultiViewIterator_v6_8 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherMultiViewIterator_v6_8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51FED981-C2AD-45A2-8618-61429CEED48D")
    IBMDSwitcherMultiViewIterator_v6_8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherMultiView_v6_8 **multiView) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherMultiViewIterator_v6_8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherMultiViewIterator_v6_8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherMultiViewIterator_v6_8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherMultiViewIterator_v6_8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherMultiViewIterator_v6_8 * This,
            /* [out] */ IBMDSwitcherMultiView_v6_8 **multiView);
        
        END_INTERFACE
    } IBMDSwitcherMultiViewIterator_v6_8Vtbl;

    interface IBMDSwitcherMultiViewIterator_v6_8
    {
        CONST_VTBL struct IBMDSwitcherMultiViewIterator_v6_8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherMultiViewIterator_v6_8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherMultiViewIterator_v6_8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherMultiViewIterator_v6_8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherMultiViewIterator_v6_8_Next(This,multiView)	\
    ( (This)->lpVtbl -> Next(This,multiView) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherMultiViewIterator_v6_8_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInput_v6_8_INTERFACE_DEFINED__
#define __IBMDSwitcherInput_v6_8_INTERFACE_DEFINED__

/* interface IBMDSwitcherInput_v6_8 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInput_v6_8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("875D3396-6C8A-4FD8-93B7-D1CB655F2AF2")
    IBMDSwitcherInput_v6_8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPortType( 
            /* [out] */ BMDSwitcherPortType *type) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailability( 
            /* [out] */ BMDSwitcherInputAvailability *availability) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShortName( 
            /* [in] */ BSTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShortName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetLongName( 
            /* [in] */ BSTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLongName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetNames( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsProgramTallied( 
            /* [out] */ BOOL *isTallied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsPreviewTallied( 
            /* [out] */ BOOL *isTallied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAvailableExternalPortTypes( 
            /* [out] */ BMDSwitcherExternalPortType *types) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCurrentExternalPortType( 
            /* [in] */ BMDSwitcherExternalPortType value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentExternalPortType( 
            /* [out] */ BMDSwitcherExternalPortType *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputId( 
            /* [out] */ BMDSwitcherInputId *inputId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherInputCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherInputCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInput_v6_8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInput_v6_8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInput_v6_8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPortType )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [out] */ BMDSwitcherPortType *type);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailability )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [out] */ BMDSwitcherInputAvailability *availability);
        
        HRESULT ( STDMETHODCALLTYPE *SetShortName )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [in] */ BSTR name);
        
        HRESULT ( STDMETHODCALLTYPE *GetShortName )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetLongName )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [in] */ BSTR name);
        
        HRESULT ( STDMETHODCALLTYPE *GetLongName )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *ResetNames )( 
            IBMDSwitcherInput_v6_8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsProgramTallied )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [out] */ BOOL *isTallied);
        
        HRESULT ( STDMETHODCALLTYPE *IsPreviewTallied )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [out] */ BOOL *isTallied);
        
        HRESULT ( STDMETHODCALLTYPE *GetAvailableExternalPortTypes )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [out] */ BMDSwitcherExternalPortType *types);
        
        HRESULT ( STDMETHODCALLTYPE *SetCurrentExternalPortType )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [in] */ BMDSwitcherExternalPortType value);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentExternalPortType )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [out] */ BMDSwitcherExternalPortType *value);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputId )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [out] */ BMDSwitcherInputId *inputId);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [in] */ IBMDSwitcherInputCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherInput_v6_8 * This,
            /* [in] */ IBMDSwitcherInputCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherInput_v6_8Vtbl;

    interface IBMDSwitcherInput_v6_8
    {
        CONST_VTBL struct IBMDSwitcherInput_v6_8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInput_v6_8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInput_v6_8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInput_v6_8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInput_v6_8_GetPortType(This,type)	\
    ( (This)->lpVtbl -> GetPortType(This,type) ) 

#define IBMDSwitcherInput_v6_8_GetInputAvailability(This,availability)	\
    ( (This)->lpVtbl -> GetInputAvailability(This,availability) ) 

#define IBMDSwitcherInput_v6_8_SetShortName(This,name)	\
    ( (This)->lpVtbl -> SetShortName(This,name) ) 

#define IBMDSwitcherInput_v6_8_GetShortName(This,name)	\
    ( (This)->lpVtbl -> GetShortName(This,name) ) 

#define IBMDSwitcherInput_v6_8_SetLongName(This,name)	\
    ( (This)->lpVtbl -> SetLongName(This,name) ) 

#define IBMDSwitcherInput_v6_8_GetLongName(This,name)	\
    ( (This)->lpVtbl -> GetLongName(This,name) ) 

#define IBMDSwitcherInput_v6_8_ResetNames(This)	\
    ( (This)->lpVtbl -> ResetNames(This) ) 

#define IBMDSwitcherInput_v6_8_IsProgramTallied(This,isTallied)	\
    ( (This)->lpVtbl -> IsProgramTallied(This,isTallied) ) 

#define IBMDSwitcherInput_v6_8_IsPreviewTallied(This,isTallied)	\
    ( (This)->lpVtbl -> IsPreviewTallied(This,isTallied) ) 

#define IBMDSwitcherInput_v6_8_GetAvailableExternalPortTypes(This,types)	\
    ( (This)->lpVtbl -> GetAvailableExternalPortTypes(This,types) ) 

#define IBMDSwitcherInput_v6_8_SetCurrentExternalPortType(This,value)	\
    ( (This)->lpVtbl -> SetCurrentExternalPortType(This,value) ) 

#define IBMDSwitcherInput_v6_8_GetCurrentExternalPortType(This,value)	\
    ( (This)->lpVtbl -> GetCurrentExternalPortType(This,value) ) 

#define IBMDSwitcherInput_v6_8_GetInputId(This,inputId)	\
    ( (This)->lpVtbl -> GetInputId(This,inputId) ) 

#define IBMDSwitcherInput_v6_8_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherInput_v6_8_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInput_v6_8_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherInputIterator_v6_8_INTERFACE_DEFINED__
#define __IBMDSwitcherInputIterator_v6_8_INTERFACE_DEFINED__

/* interface IBMDSwitcherInputIterator_v6_8 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherInputIterator_v6_8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F841D36E-2762-4215-A598-FFE76D0FF05C")
    IBMDSwitcherInputIterator_v6_8 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ IBMDSwitcherInput_v6_8 **input) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetById( 
            /* [in] */ BMDSwitcherInputId inputId,
            /* [out] */ IBMDSwitcherInput_v6_8 **input) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherInputIterator_v6_8Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherInputIterator_v6_8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherInputIterator_v6_8 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherInputIterator_v6_8 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IBMDSwitcherInputIterator_v6_8 * This,
            /* [out] */ IBMDSwitcherInput_v6_8 **input);
        
        HRESULT ( STDMETHODCALLTYPE *GetById )( 
            IBMDSwitcherInputIterator_v6_8 * This,
            /* [in] */ BMDSwitcherInputId inputId,
            /* [out] */ IBMDSwitcherInput_v6_8 **input);
        
        END_INTERFACE
    } IBMDSwitcherInputIterator_v6_8Vtbl;

    interface IBMDSwitcherInputIterator_v6_8
    {
        CONST_VTBL struct IBMDSwitcherInputIterator_v6_8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherInputIterator_v6_8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherInputIterator_v6_8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherInputIterator_v6_8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherInputIterator_v6_8_Next(This,input)	\
    ( (This)->lpVtbl -> Next(This,input) ) 

#define IBMDSwitcherInputIterator_v6_8_GetById(This,inputId,input)	\
    ( (This)->lpVtbl -> GetById(This,inputId,input) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherInputIterator_v6_8_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyKeyFrameParameters_v6_9;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F3A7FA5-6B08-4999-B446-B64E9CFA3E37")
    IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSizeX( 
            /* [out] */ double *multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeX( 
            /* [in] */ double multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeY( 
            /* [out] */ double *multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeY( 
            /* [in] */ double multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRotation( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRotation( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanRotate( 
            /* [out] */ BOOL *canRotate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthOut( 
            /* [out] */ double *widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthOut( 
            /* [in] */ double widthOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderWidthIn( 
            /* [out] */ double *widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderWidthIn( 
            /* [in] */ double widthIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessOut( 
            /* [out] */ double *softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessOut( 
            /* [in] */ double softOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSoftnessIn( 
            /* [out] */ double *softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSoftnessIn( 
            /* [in] */ double softIn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelSoftness( 
            /* [out] */ double *bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelSoftness( 
            /* [in] */ double bevelSoft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderBevelPosition( 
            /* [out] */ double *bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderBevelPosition( 
            /* [in] */ double bevelPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderOpacity( 
            /* [out] */ double *opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderOpacity( 
            /* [in] */ double opacity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderHue( 
            /* [out] */ double *hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderHue( 
            /* [in] */ double hue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderSaturation( 
            /* [out] */ double *sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderSaturation( 
            /* [in] */ double sat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLuma( 
            /* [out] */ double *luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLuma( 
            /* [in] */ double luma) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceDirection( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceDirection( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBorderLightSourceAltitude( 
            /* [out] */ double *altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBorderLightSourceAltitude( 
            /* [in] */ double altitude) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskTop( 
            /* [out] */ double *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskTop( 
            /* [in] */ double top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskBottom( 
            /* [out] */ double *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskBottom( 
            /* [in] */ double bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskLeft( 
            /* [out] */ double *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskLeft( 
            /* [in] */ double left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMaskRight( 
            /* [out] */ double *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMaskRight( 
            /* [in] */ double right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyKeyFrameParameters_v6_9Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *GetRotation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetRotation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanRotate )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ BOOL *canRotate);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double widthOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderWidthIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderWidthIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double widthIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *softOut);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessOut )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double softOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSoftnessIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *softIn);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSoftnessIn )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double softIn);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelSoftness )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelSoftness )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double bevelSoft);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderBevelPosition )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderBevelPosition )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double bevelPosition);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderOpacity )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *opacity);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderOpacity )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double opacity);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderHue )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *hue);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderHue )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double hue);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderSaturation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *sat);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderSaturation )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double sat);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLuma )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *luma);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLuma )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double luma);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceDirection )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceDirection )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetBorderLightSourceAltitude )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *altitude);
        
        HRESULT ( STDMETHODCALLTYPE *SetBorderLightSourceAltitude )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double altitude);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskTop )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *top);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskTop )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double top);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskBottom )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskBottom )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double bottom);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskLeft )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *left);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskLeft )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double left);
        
        HRESULT ( STDMETHODCALLTYPE *GetMaskRight )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [out] */ double *right);
        
        HRESULT ( STDMETHODCALLTYPE *SetMaskRight )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ double right);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 * This,
            /* [in] */ IBMDSwitcherKeyFlyKeyFrameParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyKeyFrameParameters_v6_9Vtbl;

    interface IBMDSwitcherKeyFlyKeyFrameParameters_v6_9
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyKeyFrameParameters_v6_9Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> GetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> SetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> GetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> SetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> GetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> SetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> GetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> SetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetRotation(This,degrees)	\
    ( (This)->lpVtbl -> GetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetRotation(This,degrees)	\
    ( (This)->lpVtbl -> SetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetCanRotate(This,canRotate)	\
    ( (This)->lpVtbl -> GetCanRotate(This,canRotate) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> GetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderWidthOut(This,widthOut)	\
    ( (This)->lpVtbl -> SetBorderWidthOut(This,widthOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> GetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderWidthIn(This,widthIn)	\
    ( (This)->lpVtbl -> SetBorderWidthIn(This,widthIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> GetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderSoftnessOut(This,softOut)	\
    ( (This)->lpVtbl -> SetBorderSoftnessOut(This,softOut) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> GetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderSoftnessIn(This,softIn)	\
    ( (This)->lpVtbl -> SetBorderSoftnessIn(This,softIn) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> GetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderBevelSoftness(This,bevelSoft)	\
    ( (This)->lpVtbl -> SetBorderBevelSoftness(This,bevelSoft) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> GetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderBevelPosition(This,bevelPosition)	\
    ( (This)->lpVtbl -> SetBorderBevelPosition(This,bevelPosition) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> GetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderOpacity(This,opacity)	\
    ( (This)->lpVtbl -> SetBorderOpacity(This,opacity) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> GetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderHue(This,hue)	\
    ( (This)->lpVtbl -> SetBorderHue(This,hue) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> GetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderSaturation(This,sat)	\
    ( (This)->lpVtbl -> SetBorderSaturation(This,sat) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> GetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderLuma(This,luma)	\
    ( (This)->lpVtbl -> SetBorderLuma(This,luma) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> GetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderLightSourceDirection(This,degrees)	\
    ( (This)->lpVtbl -> SetBorderLightSourceDirection(This,degrees) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> GetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetBorderLightSourceAltitude(This,altitude)	\
    ( (This)->lpVtbl -> SetBorderLightSourceAltitude(This,altitude) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetMaskTop(This,top)	\
    ( (This)->lpVtbl -> GetMaskTop(This,top) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetMaskTop(This,top)	\
    ( (This)->lpVtbl -> SetMaskTop(This,top) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> GetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetMaskBottom(This,bottom)	\
    ( (This)->lpVtbl -> SetMaskBottom(This,bottom) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> GetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetMaskLeft(This,left)	\
    ( (This)->lpVtbl -> SetMaskLeft(This,left) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_GetMaskRight(This,right)	\
    ( (This)->lpVtbl -> GetMaskRight(This,right) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_SetMaskRight(This,right)	\
    ( (This)->lpVtbl -> SetMaskRight(This,right) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyKeyFrameParameters_v6_9_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherKeyFlyParameters_v6_9_INTERFACE_DEFINED__
#define __IBMDSwitcherKeyFlyParameters_v6_9_INTERFACE_DEFINED__

/* interface IBMDSwitcherKeyFlyParameters_v6_9 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherKeyFlyParameters_v6_9;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4CA84EC1-5A83-4A9D-A37A-72D32CDF1201")
    IBMDSwitcherKeyFlyParameters_v6_9 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFly( 
            /* [out] */ BOOL *isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFly( 
            /* [in] */ BOOL isFlyKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanFly( 
            /* [out] */ BOOL *canFly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRate( 
            /* [out] */ unsigned int *frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRate( 
            /* [in] */ unsigned int frames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeX( 
            /* [out] */ double *multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeX( 
            /* [in] */ double multiplierX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSizeY( 
            /* [out] */ double *multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSizeY( 
            /* [in] */ double multiplierY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionX( 
            /* [out] */ double *offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionX( 
            /* [in] */ double offsetX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPositionY( 
            /* [out] */ double *offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPositionY( 
            /* [in] */ double offsetY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRotation( 
            /* [out] */ double *degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRotation( 
            /* [in] */ double degrees) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanRotate( 
            /* [out] */ BOOL *canRotate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetRotation( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVE( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetDVEFull( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsKeyFrameStored( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StoreAsKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RunToKeyFrame( 
            /* [in] */ BMDSwitcherFlyKeyFrame destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsAtKeyFrames( 
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetKeyFrameParameters( 
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 **keyFrameParameters) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRunning( 
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherKeyFlyParameters_v6_9Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFly )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ BOOL *isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *SetFly )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ BOOL isFlyKey);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanFly )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ BOOL *canFly);
        
        HRESULT ( STDMETHODCALLTYPE *GetRate )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ unsigned int *frames);
        
        HRESULT ( STDMETHODCALLTYPE *SetRate )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ unsigned int frames);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeX )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ double *multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeX )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ double multiplierX);
        
        HRESULT ( STDMETHODCALLTYPE *GetSizeY )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ double *multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *SetSizeY )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ double multiplierY);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionX )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ double *offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionX )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ double offsetX);
        
        HRESULT ( STDMETHODCALLTYPE *GetPositionY )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ double *offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *SetPositionY )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ double offsetY);
        
        HRESULT ( STDMETHODCALLTYPE *GetRotation )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ double *degrees);
        
        HRESULT ( STDMETHODCALLTYPE *SetRotation )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ double degrees);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanRotate )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ BOOL *canRotate);
        
        HRESULT ( STDMETHODCALLTYPE *ResetRotation )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVE )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetDVEFull )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsKeyFrameStored )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ BOOL *stored);
        
        HRESULT ( STDMETHODCALLTYPE *StoreAsKeyFrame )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        HRESULT ( STDMETHODCALLTYPE *ClearKeyFrame )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame);
        
        HRESULT ( STDMETHODCALLTYPE *RunToKeyFrame )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame destination);
        
        HRESULT ( STDMETHODCALLTYPE *IsAtKeyFrames )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ BMDSwitcherFlyKeyFrame *keyFrames);
        
        HRESULT ( STDMETHODCALLTYPE *GetKeyFrameParameters )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ BMDSwitcherFlyKeyFrame keyFrame,
            /* [out] */ IBMDSwitcherKeyFlyKeyFrameParameters_v6_9 **keyFrameParameters);
        
        HRESULT ( STDMETHODCALLTYPE *IsRunning )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [out] */ BOOL *isRunning,
            /* [out] */ BMDSwitcherFlyKeyFrame *destination);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherKeyFlyParameters_v6_9 * This,
            /* [in] */ IBMDSwitcherKeyFlyParametersCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherKeyFlyParameters_v6_9Vtbl;

    interface IBMDSwitcherKeyFlyParameters_v6_9
    {
        CONST_VTBL struct IBMDSwitcherKeyFlyParameters_v6_9Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherKeyFlyParameters_v6_9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherKeyFlyParameters_v6_9_GetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> GetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_SetFly(This,isFlyKey)	\
    ( (This)->lpVtbl -> SetFly(This,isFlyKey) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_GetCanFly(This,canFly)	\
    ( (This)->lpVtbl -> GetCanFly(This,canFly) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_GetRate(This,frames)	\
    ( (This)->lpVtbl -> GetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_SetRate(This,frames)	\
    ( (This)->lpVtbl -> SetRate(This,frames) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_GetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> GetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_SetSizeX(This,multiplierX)	\
    ( (This)->lpVtbl -> SetSizeX(This,multiplierX) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_GetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> GetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_SetSizeY(This,multiplierY)	\
    ( (This)->lpVtbl -> SetSizeY(This,multiplierY) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_GetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> GetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_SetPositionX(This,offsetX)	\
    ( (This)->lpVtbl -> SetPositionX(This,offsetX) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_GetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> GetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_SetPositionY(This,offsetY)	\
    ( (This)->lpVtbl -> SetPositionY(This,offsetY) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_GetRotation(This,degrees)	\
    ( (This)->lpVtbl -> GetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_SetRotation(This,degrees)	\
    ( (This)->lpVtbl -> SetRotation(This,degrees) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_GetCanRotate(This,canRotate)	\
    ( (This)->lpVtbl -> GetCanRotate(This,canRotate) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_ResetRotation(This)	\
    ( (This)->lpVtbl -> ResetRotation(This) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_ResetDVE(This)	\
    ( (This)->lpVtbl -> ResetDVE(This) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_ResetDVEFull(This)	\
    ( (This)->lpVtbl -> ResetDVEFull(This) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_IsKeyFrameStored(This,keyFrame,stored)	\
    ( (This)->lpVtbl -> IsKeyFrameStored(This,keyFrame,stored) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_StoreAsKeyFrame(This,keyFrame)	\
    ( (This)->lpVtbl -> StoreAsKeyFrame(This,keyFrame) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_ClearKeyFrame(This,keyFrame)	\
    ( (This)->lpVtbl -> ClearKeyFrame(This,keyFrame) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_RunToKeyFrame(This,destination)	\
    ( (This)->lpVtbl -> RunToKeyFrame(This,destination) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_IsAtKeyFrames(This,keyFrames)	\
    ( (This)->lpVtbl -> IsAtKeyFrames(This,keyFrames) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_GetKeyFrameParameters(This,keyFrame,keyFrameParameters)	\
    ( (This)->lpVtbl -> GetKeyFrameParameters(This,keyFrame,keyFrameParameters) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_IsRunning(This,isRunning,destination)	\
    ( (This)->lpVtbl -> IsRunning(This,isRunning,destination) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherKeyFlyParameters_v6_9_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherKeyFlyParameters_v6_9_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTalkbackCallback_v6_9_INTERFACE_DEFINED__
#define __IBMDSwitcherTalkbackCallback_v6_9_INTERFACE_DEFINED__

/* interface IBMDSwitcherTalkbackCallback_v6_9 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTalkbackCallback_v6_9;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B90E45D-E976-45E1-A8A2-0ED4EF102E46")
    IBMDSwitcherTalkbackCallback_v6_9 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ BMDSwitcherTalkbackEventType eventType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTalkbackCallback_v6_9Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTalkbackCallback_v6_9 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTalkbackCallback_v6_9 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTalkbackCallback_v6_9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IBMDSwitcherTalkbackCallback_v6_9 * This,
            /* [in] */ BMDSwitcherTalkbackEventType eventType);
        
        END_INTERFACE
    } IBMDSwitcherTalkbackCallback_v6_9Vtbl;

    interface IBMDSwitcherTalkbackCallback_v6_9
    {
        CONST_VTBL struct IBMDSwitcherTalkbackCallback_v6_9Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTalkbackCallback_v6_9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTalkbackCallback_v6_9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTalkbackCallback_v6_9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTalkbackCallback_v6_9_Notify(This,eventType)	\
    ( (This)->lpVtbl -> Notify(This,eventType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTalkbackCallback_v6_9_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherTalkback_v6_9_INTERFACE_DEFINED__
#define __IBMDSwitcherTalkback_v6_9_INTERFACE_DEFINED__

/* interface IBMDSwitcherTalkback_v6_9 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherTalkback_v6_9;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43E40D41-ADDC-43D2-871F-7BDB322E9BAA")
    IBMDSwitcherTalkback_v6_9 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMuteSDI( 
            /* [out] */ BOOL *muteSDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetMuteSDI( 
            /* [in] */ BOOL muteSDI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherTalkbackCallback_v6_9 *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherTalkbackCallback_v6_9 *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherTalkback_v6_9Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherTalkback_v6_9 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherTalkback_v6_9 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherTalkback_v6_9 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMuteSDI )( 
            IBMDSwitcherTalkback_v6_9 * This,
            /* [out] */ BOOL *muteSDI);
        
        HRESULT ( STDMETHODCALLTYPE *SetMuteSDI )( 
            IBMDSwitcherTalkback_v6_9 * This,
            /* [in] */ BOOL muteSDI);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherTalkback_v6_9 * This,
            /* [in] */ IBMDSwitcherTalkbackCallback_v6_9 *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherTalkback_v6_9 * This,
            /* [in] */ IBMDSwitcherTalkbackCallback_v6_9 *callback);
        
        END_INTERFACE
    } IBMDSwitcherTalkback_v6_9Vtbl;

    interface IBMDSwitcherTalkback_v6_9
    {
        CONST_VTBL struct IBMDSwitcherTalkback_v6_9Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherTalkback_v6_9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherTalkback_v6_9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherTalkback_v6_9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherTalkback_v6_9_GetMuteSDI(This,muteSDI)	\
    ( (This)->lpVtbl -> GetMuteSDI(This,muteSDI) ) 

#define IBMDSwitcherTalkback_v6_9_SetMuteSDI(This,muteSDI)	\
    ( (This)->lpVtbl -> SetMuteSDI(This,muteSDI) ) 

#define IBMDSwitcherTalkback_v6_9_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherTalkback_v6_9_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherTalkback_v6_9_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherCameraControl_v7_0_3_INTERFACE_DEFINED__
#define __IBMDSwitcherCameraControl_v7_0_3_INTERFACE_DEFINED__

/* interface IBMDSwitcherCameraControl_v7_0_3 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherCameraControl_v7_0_3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("95D7C0B6-9A84-4715-BE27-8A9CCAA9E6A9")
    IBMDSwitcherCameraControl_v7_0_3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPeriodicFlushInterval( 
            /* [out] */ unsigned int *intervalMs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPeriodicFlushInterval( 
            /* [in] */ unsigned int intervalMs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParameterInfo( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BMDSwitcherCameraControlParameterType *type,
            /* [out] */ unsigned int *count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParameterPeriodicFlushEnabled( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BOOL *enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetParameterPeriodicFlushEnabled( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ BOOL enabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const BOOL *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ToggleFlags( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const BOOL *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ BOOL *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetBytes( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const signed char *bytes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetBytes( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const signed char *bytes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBytes( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ signed char *bytes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt16s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const short *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetInt16s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const short *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt16s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ short *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt32s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const int *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetInt32s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const int *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt32s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ int *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInt64s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const long long *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetInt64s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const long long *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt64s( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ long long *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OffsetFloats( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const double *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFloats( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const double *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFloats( 
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ double *values) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherCameraControlCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherCameraControlCallback *callback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherCameraControl_v7_0_3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherCameraControl_v7_0_3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherCameraControl_v7_0_3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPeriodicFlushInterval )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [out] */ unsigned int *intervalMs);
        
        HRESULT ( STDMETHODCALLTYPE *SetPeriodicFlushInterval )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int intervalMs);
        
        HRESULT ( STDMETHODCALLTYPE *GetParameterInfo )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BMDSwitcherCameraControlParameterType *type,
            /* [out] */ unsigned int *count);
        
        HRESULT ( STDMETHODCALLTYPE *GetParameterPeriodicFlushEnabled )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out] */ BOOL *enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetParameterPeriodicFlushEnabled )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ BOOL enabled);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const BOOL *values);
        
        HRESULT ( STDMETHODCALLTYPE *ToggleFlags )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const BOOL *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ BOOL *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetBytes )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const signed char *bytes);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetBytes )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const signed char *bytes);
        
        HRESULT ( STDMETHODCALLTYPE *GetBytes )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ signed char *bytes);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt16s )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const short *values);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetInt16s )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const short *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt16s )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ short *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt32s )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const int *values);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetInt32s )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const int *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt32s )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ int *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetInt64s )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const long long *values);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetInt64s )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const long long *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt64s )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ long long *values);
        
        HRESULT ( STDMETHODCALLTYPE *OffsetFloats )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const double *values);
        
        HRESULT ( STDMETHODCALLTYPE *SetFloats )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [in] */ unsigned int count,
            /* [in] */ const double *values);
        
        HRESULT ( STDMETHODCALLTYPE *GetFloats )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ unsigned int destinationDevice,
            /* [in] */ unsigned int category,
            /* [in] */ unsigned int parameter,
            /* [out][in] */ unsigned int *count,
            /* [out] */ double *values);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ IBMDSwitcherCameraControlCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherCameraControl_v7_0_3 * This,
            /* [in] */ IBMDSwitcherCameraControlCallback *callback);
        
        END_INTERFACE
    } IBMDSwitcherCameraControl_v7_0_3Vtbl;

    interface IBMDSwitcherCameraControl_v7_0_3
    {
        CONST_VTBL struct IBMDSwitcherCameraControl_v7_0_3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherCameraControl_v7_0_3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherCameraControl_v7_0_3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherCameraControl_v7_0_3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherCameraControl_v7_0_3_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#define IBMDSwitcherCameraControl_v7_0_3_GetPeriodicFlushInterval(This,intervalMs)	\
    ( (This)->lpVtbl -> GetPeriodicFlushInterval(This,intervalMs) ) 

#define IBMDSwitcherCameraControl_v7_0_3_SetPeriodicFlushInterval(This,intervalMs)	\
    ( (This)->lpVtbl -> SetPeriodicFlushInterval(This,intervalMs) ) 

#define IBMDSwitcherCameraControl_v7_0_3_GetParameterInfo(This,destinationDevice,category,parameter,type,count)	\
    ( (This)->lpVtbl -> GetParameterInfo(This,destinationDevice,category,parameter,type,count) ) 

#define IBMDSwitcherCameraControl_v7_0_3_GetParameterPeriodicFlushEnabled(This,destinationDevice,category,parameter,enabled)	\
    ( (This)->lpVtbl -> GetParameterPeriodicFlushEnabled(This,destinationDevice,category,parameter,enabled) ) 

#define IBMDSwitcherCameraControl_v7_0_3_SetParameterPeriodicFlushEnabled(This,destinationDevice,category,parameter,enabled)	\
    ( (This)->lpVtbl -> SetParameterPeriodicFlushEnabled(This,destinationDevice,category,parameter,enabled) ) 

#define IBMDSwitcherCameraControl_v7_0_3_SetFlags(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetFlags(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_ToggleFlags(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> ToggleFlags(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_GetFlags(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetFlags(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_SetBytes(This,destinationDevice,category,parameter,count,bytes)	\
    ( (This)->lpVtbl -> SetBytes(This,destinationDevice,category,parameter,count,bytes) ) 

#define IBMDSwitcherCameraControl_v7_0_3_OffsetBytes(This,destinationDevice,category,parameter,count,bytes)	\
    ( (This)->lpVtbl -> OffsetBytes(This,destinationDevice,category,parameter,count,bytes) ) 

#define IBMDSwitcherCameraControl_v7_0_3_GetBytes(This,destinationDevice,category,parameter,count,bytes)	\
    ( (This)->lpVtbl -> GetBytes(This,destinationDevice,category,parameter,count,bytes) ) 

#define IBMDSwitcherCameraControl_v7_0_3_SetInt16s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetInt16s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_OffsetInt16s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> OffsetInt16s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_GetInt16s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetInt16s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_SetInt32s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetInt32s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_OffsetInt32s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> OffsetInt32s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_GetInt32s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetInt32s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_SetInt64s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetInt64s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_OffsetInt64s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> OffsetInt64s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_GetInt64s(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetInt64s(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_OffsetFloats(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> OffsetFloats(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_SetFloats(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> SetFloats(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_GetFloats(This,destinationDevice,category,parameter,count,values)	\
    ( (This)->lpVtbl -> GetFloats(This,destinationDevice,category,parameter,count,values) ) 

#define IBMDSwitcherCameraControl_v7_0_3_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherCameraControl_v7_0_3_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherCameraControl_v7_0_3_INTERFACE_DEFINED__ */


#ifndef __IBMDSwitcherAudioMixer_v7_1_2_INTERFACE_DEFINED__
#define __IBMDSwitcherAudioMixer_v7_1_2_INTERFACE_DEFINED__

/* interface IBMDSwitcherAudioMixer_v7_1_2 */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IBMDSwitcherAudioMixer_v7_1_2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CD3AD708-6F82-41EB-B8B2-64605D4040F2")
    IBMDSwitcherAudioMixer_v7_1_2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutGain( 
            /* [out] */ double *gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutGain( 
            /* [in] */ double gain) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutBalance( 
            /* [out] */ double *balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutBalance( 
            /* [in] */ double balance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgramOutFollowFadeToBlack( 
            /* [out] */ BOOL *follow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgramOutFollowFadeToBlack( 
            /* [in] */ BOOL follow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAllLevelNotificationsEnable( 
            /* [in] */ BOOL enable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetProgramOutLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetAllLevelNotificationPeaks( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCallback( 
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCallback( 
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateIterator( 
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBMDSwitcherAudioMixer_v7_1_2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutGain )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [out] */ double *gain);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutGain )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [in] */ double gain);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutBalance )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [out] */ double *balance);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutBalance )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [in] */ double balance);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgramOutFollowFadeToBlack )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [out] */ BOOL *follow);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgramOutFollowFadeToBlack )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [in] */ BOOL follow);
        
        HRESULT ( STDMETHODCALLTYPE *SetAllLevelNotificationsEnable )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [in] */ BOOL enable);
        
        HRESULT ( STDMETHODCALLTYPE *ResetProgramOutLevelNotificationPeaks )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResetAllLevelNotificationPeaks )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddCallback )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCallback )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [in] */ IBMDSwitcherAudioMixerCallback *callback);
        
        HRESULT ( STDMETHODCALLTYPE *CreateIterator )( 
            IBMDSwitcherAudioMixer_v7_1_2 * This,
            /* [in] */ REFIID iid,
            /* [out] */ LPVOID *ppv);
        
        END_INTERFACE
    } IBMDSwitcherAudioMixer_v7_1_2Vtbl;

    interface IBMDSwitcherAudioMixer_v7_1_2
    {
        CONST_VTBL struct IBMDSwitcherAudioMixer_v7_1_2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBMDSwitcherAudioMixer_v7_1_2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBMDSwitcherAudioMixer_v7_1_2_GetProgramOutGain(This,gain)	\
    ( (This)->lpVtbl -> GetProgramOutGain(This,gain) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_SetProgramOutGain(This,gain)	\
    ( (This)->lpVtbl -> SetProgramOutGain(This,gain) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_GetProgramOutBalance(This,balance)	\
    ( (This)->lpVtbl -> GetProgramOutBalance(This,balance) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_SetProgramOutBalance(This,balance)	\
    ( (This)->lpVtbl -> SetProgramOutBalance(This,balance) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_GetProgramOutFollowFadeToBlack(This,follow)	\
    ( (This)->lpVtbl -> GetProgramOutFollowFadeToBlack(This,follow) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_SetProgramOutFollowFadeToBlack(This,follow)	\
    ( (This)->lpVtbl -> SetProgramOutFollowFadeToBlack(This,follow) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_SetAllLevelNotificationsEnable(This,enable)	\
    ( (This)->lpVtbl -> SetAllLevelNotificationsEnable(This,enable) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_ResetProgramOutLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetProgramOutLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_ResetAllLevelNotificationPeaks(This)	\
    ( (This)->lpVtbl -> ResetAllLevelNotificationPeaks(This) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_AddCallback(This,callback)	\
    ( (This)->lpVtbl -> AddCallback(This,callback) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_RemoveCallback(This,callback)	\
    ( (This)->lpVtbl -> RemoveCallback(This,callback) ) 

#define IBMDSwitcherAudioMixer_v7_1_2_CreateIterator(This,iid,ppv)	\
    ( (This)->lpVtbl -> CreateIterator(This,iid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBMDSwitcherAudioMixer_v7_1_2_INTERFACE_DEFINED__ */

#endif /* __BMDSwitcherAPI_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


