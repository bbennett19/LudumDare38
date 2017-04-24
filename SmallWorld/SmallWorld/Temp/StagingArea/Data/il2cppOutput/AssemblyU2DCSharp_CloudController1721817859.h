#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloudController
struct  CloudController_t1721817859  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CloudController::minSpeed
	float ___minSpeed_2;
	// System.Single CloudController::maxSpeed
	float ___maxSpeed_3;
	// UnityEngine.Vector2 CloudController::_position
	Vector2_t2243707579  ____position_4;
	// System.Single CloudController::_speed
	float ____speed_5;

public:
	inline static int32_t get_offset_of_minSpeed_2() { return static_cast<int32_t>(offsetof(CloudController_t1721817859, ___minSpeed_2)); }
	inline float get_minSpeed_2() const { return ___minSpeed_2; }
	inline float* get_address_of_minSpeed_2() { return &___minSpeed_2; }
	inline void set_minSpeed_2(float value)
	{
		___minSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_3() { return static_cast<int32_t>(offsetof(CloudController_t1721817859, ___maxSpeed_3)); }
	inline float get_maxSpeed_3() const { return ___maxSpeed_3; }
	inline float* get_address_of_maxSpeed_3() { return &___maxSpeed_3; }
	inline void set_maxSpeed_3(float value)
	{
		___maxSpeed_3 = value;
	}

	inline static int32_t get_offset_of__position_4() { return static_cast<int32_t>(offsetof(CloudController_t1721817859, ____position_4)); }
	inline Vector2_t2243707579  get__position_4() const { return ____position_4; }
	inline Vector2_t2243707579 * get_address_of__position_4() { return &____position_4; }
	inline void set__position_4(Vector2_t2243707579  value)
	{
		____position_4 = value;
	}

	inline static int32_t get_offset_of__speed_5() { return static_cast<int32_t>(offsetof(CloudController_t1721817859, ____speed_5)); }
	inline float get__speed_5() const { return ____speed_5; }
	inline float* get_address_of__speed_5() { return &____speed_5; }
	inline void set__speed_5(float value)
	{
		____speed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
