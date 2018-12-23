# ofxAtem2
This addon is for Windows.
OF addon to control ATEM Production Switcher from Blackmagic

For macosx user, please use, ofxAtem
https://github.com/hanasaan/ofxAtem

base on telematique's excellent work:
https://github.com/telematique/ofAtem

## Features
- Packaged ofATem to OF addon style so that we can create more complicated switcher control app.
- Auto reconnection feature to avoid unexpected disconnection.

## Tested on
- OF0.9.8 + VS2015 + Windows10 + ATEM SDK 7.5.2

## Include order
- `ofxAtem2.h` must be included above everything else like ofxBlackmagic2
  - https://github.com/elliotwoods/ofxBlackmagic2#include-order

        #pragma once

        #include "ofxAtem2.h"
        #include "ofMain.h"

        ...