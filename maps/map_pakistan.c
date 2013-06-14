#include "../map.h"

struct {
	struct map header;
	struct map_screen screens[7];
} map_pakistan = {
	.header = {
		.maptype = MT_DESERT,
		.screen_count = 7,
		.mission_text = "bla",
		.client_face = 0,
		.mini_pic = 0,
		.map_coords = VEC(0,0),
	},
	.screens = {
		[0] = {
			.scrolldir = MS_UP,
			.bg = {
				{1,1,1,},
				{1,1,1,},
				{1,1,1,},
				{1,1,1,},
				{1,1,1,},
				{1,1,1,},
			},
			.fg = {
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
			},
		},
		[1] = {
			.scrolldir = MS_UP,
			.bg = {
				{0,0,3,},
				{1,0,0,},
				{3,1,2,},
				{0,1,0,},
				{1,1,1,},
				{1,1,1,},
			},
			.fg = {
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,160,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,161, 28, 29, 29,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 28, 29,},
				{  0,  0,  0,  0,153,  0,  0,  0,154,  0,  0,  0,},
				{ 48, 48,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{ 87, 87, 87, 87,204,204,204, 87, 87, 87, 87, 87,},
				{ 84, 84, 84, 84,204,204,204, 84, 84, 84, 84, 84,},
				{ 86, 86, 86, 86,204,204,204, 86, 86, 86, 86, 86,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
			},
		},
		[2] = {
			.scrolldir = MS_UP,
			.bg = {
				{0,1,0,},
				{0,3,0,},
				{0,0,2,},
				{3,0,1,},
				{0,0,0,},
				{0,1,0,},
			},
			.fg = {
				{  0,  0,  0,  0,  0,  0,  0,149,147,147,147,147,},
				{  0,154,  0,  0,  0,  0,  0,  0,  0,  0,154,  0,},
				{  0,  0,  0,  0,  0,161,163,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{ 16, 17,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{ 18, 19,  0,  0, 83, 83, 28, 29, 83, 83,  0,  0,},
				{  0,154,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,154,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{ 29, 29, 29,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,157,  0,  0,  0,154,  0,},
			},
		},
		[3] = {
			.scrolldir = MS_UP,
			.bg = {
				{0,3,0,},
				{2,0,0,},
				{1,0,3,},
				{0,3,3,},
				{0,0,0,},
				{1,0,0,},
			},
			.fg = {
				{  0,148,  0,  0,  0,  0,  0, 16, 23, 23, 23, 17,},
				{  0,148,  0,  0,  0,  0,  0, 20, 24, 24, 24, 21,},
				{  0,148,  0,  0, 25,  0,  0, 20, 24, 24, 24, 21,},
				{  0,148,  0,  0,  0,  0,  0, 20, 24, 24, 24, 21,},
				{  0,148,  0,160,  0,  0,  0, 18, 22, 22, 22, 19,},
				{  0,148,  0,  0,162,  0,  0,  0,  0,  0,154,  0,},
				{  0,148,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,149,147,147,147,147,147,151,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,148,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,148,  0,  0,  0,  0,},
				{ 29, 29, 29, 29, 29,  0,  0,148,  0,157,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,148,  0,  0,  0,  0,},
			},
		},
		[4] = {
			.scrolldir = MS_UP,
			.bg = {
				{1,0,3,},
				{0,3,3,},
				{0,0,0,},
				{1,1,1,},
				{0,0,3,},
				{3,3,0,},
			},
			.fg = {
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,158,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,154,  0,  0,  0,  0,  0,  0,  0,154,  0,},
				{  0,  0,  0,164,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,154,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,157,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{147,151,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
			},
		},
		[5] = {
			.scrolldir = MS_UP,
			.bg = {
				{2,2,2,},
				{2,3,0,},
				{0,3,3,},
				{1,0,0,},
				{0,1,0,},
				{2,0,0,},
			},
			.fg = {
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,157,  0,},
				{  0,  0,158,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,154,  0,  0,  0,  0,},
				{  0,  0,154,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,153,  0,  0,  0,  0,  0,  0,},
				{  0,  0,157,  0,  0,  0,  0,  0,  0,154,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
			},
		},
		[6] = {
			.scrolldir = MS_UP,
			.bg = {
				{2,2,2,},
				{2,2,2,},
				{2,2,2,},
				{2,2,2,},
				{2,2,2,},
				{2,2,2,},
			},
			.fg = {
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
				{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
			},
		},
	},
};