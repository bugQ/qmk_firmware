
#pragma once

// set the time between press and release of an automated modtap keypress to
// no less than 1/50Hz = 20ms to allow retro PAL and NTSC games to detect it
#undef TAP_CODE_DELAY
#define TAP_CODE_DELAY (20)
