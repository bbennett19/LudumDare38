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

// DiableAfterTime
struct  DiableAfterTime_t1100361414  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DiableAfterTime::time
	float ___time_2;
	// System.Single DiableAfterTime::elapsed
	float ___elapsed_3;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(DiableAfterTime_t1100361414, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_elapsed_3() { return static_cast<int32_t>(offsetof(DiableAfterTime_t1100361414, ___elapsed_3)); }
	inline float get_elapsed_3() const { return ___elapsed_3; }
	inline float* get_address_of_elapsed_3() { return &___elapsed_3; }
	inline void set_elapsed_3(float value)
	{
		___elapsed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
