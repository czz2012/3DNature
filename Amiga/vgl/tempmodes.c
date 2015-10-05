VIDEO_MODE	mode_list[] =
	{
	{ "VGA_640x480@60Hz", 640, 480, 
		/* GDM-9000 */
		{
		0x00560000, 99, 11, 17, 97, 
0, 525, 2, 43, 523, 0, 0x1E4, 
3, 515, 330, 640, 307200,
			{ 0xFFFFFFFF, 0x40, 0x35, 0x7, 0x0, 0x19, 0x84, 0xE7, 0x4, 0x40, 0x0, 0x7, 0xFFFFFFFF, 0x8, 0x0, 0x1 }
		}

	},

	{ "VESA_800x600@60Hz", 800, 600, 
		/* GDM-9000 */
		{
		0x00584000, 131, 15, 26, 126, 
0, 628, 4, 27, 627, 0, 0x1E4, 
3, 515, 330, 800, 480000,
			{ 0xFFFFFFFF, 0x40, 0x35, 0x7, 0x0, 0x18, 0x45, 0xE7, 0x4, 0x40, 0x0, 0x7, 0xFFFFFFFF, 0x8, 0x0, 0x1 }
		}

	},

	{ "VESA_1024x768@60Hz", 1024, 768, 
		/* GDM-9000 */
		{
		0x00600000, 167, 16, 36, 164, 
0, 806, 6, 35, 803, 0, 0x1E4, 
3, 515, 330, 1024, 786432,
			{ 0xFFFFFFFF, 0x40, 0x35, 0x7, 0x0, 0x1A, 0x43, 0xE7, 0x4, 0x40, 0x0, 0x7, 0xFFFFFFFF, 0x8, 0x0, 0x1 }
		}

	},

	{ "NEC_1280x1024@60Hz", 1280, 1024, 
		/* GDM-9000 */
		{
		0x00680000, 207, 12, 42, 202, 
0, 1065, 5, 40, 1064, 0, 0x1E4, 
2, 515, 330, 1280, 1310720,
			{ 0xFFFFFFFF, 0x40, 0x35, 0x7, 0x0, 0x20, 0x5, 0xE6, 0x4, 0x40, 0x0, 0x7, 0xFFFFFFFF, 0x8, 0x0, 0x1 }
		}

	},

	{ "NEC_1600x1200@60Hz", 1600, 1200, 
		/* GDM-9000 */
		{
		0x006A8000, 262, 45, 60, 260, 
0, 1237, 6, 36, 1236, 0, 0x1E4, 
2, 515, 330, 1600, 1920000,
			{ 0xFFFFFFFF, 0x40, 0x35, 0x7, 0x0, 0x32, 0x5, 0xE1, 0x4, 0x40, 0x0, 0x7, 0xFFFFFFFF, 0x8, 0x0, 0x1 }
		}

	},

	};