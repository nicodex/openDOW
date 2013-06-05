#ifndef WAVESOUNDS_H
#define WAVESOUNDS_H

#include "../c-flod/backends/wave_format.h"

enum __attribute__((__packed__)) wavesound_id {
	WS_NONE = 0,
	WS_PISTOL,
	WS_GUN,
	WS_MACHINEGUN,
	WS_FLAMETHROWER,
};

extern const WAVE_HEADER_COMPLETE* wavesounds[];
//RcB: DEP "wavesounds.c"
#endif