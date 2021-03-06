#pragma once
#pragma pack(push, 1)
#include <stdint.h>

struct ObjectID		// 0x40  ==  IDs
{
	uint8_t objectID[16];
	uint8_t birthVolumeID[16];
	uint8_t birthObjectID[16];
	uint8_t domainID[16];
};

#pragma pack(pop)