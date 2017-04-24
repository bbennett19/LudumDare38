#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeOfDayArrow
struct  TimeOfDayArrow_t3149932527  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimeOfDayArrow::startRotation
	float ___startRotation_2;
	// System.Single TimeOfDayArrow::endRotation
	float ___endRotation_3;

public:
	inline static int32_t get_offset_of_startRotation_2() { return static_cast<int32_t>(offsetof(TimeOfDayArrow_t3149932527, ___startRotation_2)); }
	inline float get_startRotation_2() const { return ___startRotation_2; }
	inline float* get_address_of_startRotation_2() { return &___startRotation_2; }
	inline void set_startRotation_2(float value)
	{
		___startRotation_2 = value;
	}

	inline static int32_t get_offset_of_endRotation_3() { return static_cast<int32_t>(offsetof(TimeOfDayArrow_t3149932527, ___endRotation_3)); }
	inline float get_endRotation_3() const { return ___endRotation_3; }
	inline float* get_address_of_endRotation_3() { return &___endRotation_3; }
	inline void set_endRotation_3(float value)
	{
		___endRotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
