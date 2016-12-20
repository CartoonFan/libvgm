#ifndef __RF5CINTF_H__
#define __RF5CINTF_H__

#include "../EmuStructs.h"

// undefine one of the variables to disable the cores
#define EC_RF5C68_MAME		// enable RF5C68 core from MAME
#define EC_RF5C68_GENS		// enable RF5C164 core from Gens/GS


extern const DEV_DEF* devDefList_RF5C68[];

#endif	// __RF5CINTF_H__
