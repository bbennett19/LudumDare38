#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeeHiveDrop
struct  BeeHiveDrop_t3315136159  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform BeeHiveDrop::dropLocation
	Transform_t3275118058 * ___dropLocation_2;
	// System.Single BeeHiveDrop::speed
	float ___speed_3;
	// System.Boolean BeeHiveDrop::_active
	bool ____active_4;

public:
	inline static int32_t get_offset_of_dropLocation_2() { return static_cast<int32_t>(offsetof(BeeHiveDrop_t3315136159, ___dropLocation_2)); }
	inline Transform_t3275118058 * get_dropLocation_2() const { return ___dropLocation_2; }
	inline Transform_t3275118058 ** get_address_of_dropLocation_2() { return &___dropLocation_2; }
	inline void set_dropLocation_2(Transform_t3275118058 * value)
	{
		___dropLocation_2 = value;
		Il2CppCodeGenWriteBarrier(&___dropLocation_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BeeHiveDrop_t3315136159, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of__active_4() { return static_cast<int32_t>(offsetof(BeeHiveDrop_t3315136159, ____active_4)); }
	inline bool get__active_4() const { return ____active_4; }
	inline bool* get_address_of__active_4() { return &____active_4; }
	inline void set__active_4(bool value)
	{
		____active_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
