#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TimeOfDayManager
struct TimeOfDayManager_t1756784205;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeOfDayManager
struct  TimeOfDayManager_t1756784205  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimeOfDayManager::timePerDay
	float ___timePerDay_2;
	// System.Single TimeOfDayManager::_elapsedTime
	float ____elapsedTime_3;
	// System.Boolean TimeOfDayManager::_startTimer
	bool ____startTimer_4;

public:
	inline static int32_t get_offset_of_timePerDay_2() { return static_cast<int32_t>(offsetof(TimeOfDayManager_t1756784205, ___timePerDay_2)); }
	inline float get_timePerDay_2() const { return ___timePerDay_2; }
	inline float* get_address_of_timePerDay_2() { return &___timePerDay_2; }
	inline void set_timePerDay_2(float value)
	{
		___timePerDay_2 = value;
	}

	inline static int32_t get_offset_of__elapsedTime_3() { return static_cast<int32_t>(offsetof(TimeOfDayManager_t1756784205, ____elapsedTime_3)); }
	inline float get__elapsedTime_3() const { return ____elapsedTime_3; }
	inline float* get_address_of__elapsedTime_3() { return &____elapsedTime_3; }
	inline void set__elapsedTime_3(float value)
	{
		____elapsedTime_3 = value;
	}

	inline static int32_t get_offset_of__startTimer_4() { return static_cast<int32_t>(offsetof(TimeOfDayManager_t1756784205, ____startTimer_4)); }
	inline bool get__startTimer_4() const { return ____startTimer_4; }
	inline bool* get_address_of__startTimer_4() { return &____startTimer_4; }
	inline void set__startTimer_4(bool value)
	{
		____startTimer_4 = value;
	}
};

struct TimeOfDayManager_t1756784205_StaticFields
{
public:
	// TimeOfDayManager TimeOfDayManager::_instance
	TimeOfDayManager_t1756784205 * ____instance_5;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(TimeOfDayManager_t1756784205_StaticFields, ____instance_5)); }
	inline TimeOfDayManager_t1756784205 * get__instance_5() const { return ____instance_5; }
	inline TimeOfDayManager_t1756784205 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(TimeOfDayManager_t1756784205 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
