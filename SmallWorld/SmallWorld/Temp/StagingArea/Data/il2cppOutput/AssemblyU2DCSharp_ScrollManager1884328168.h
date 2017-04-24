#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ScrollManager
struct ScrollManager_t1884328168;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollManager
struct  ScrollManager_t1884328168  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ScrollManager::scrollAcceleration
	float ___scrollAcceleration_3;
	// System.Single ScrollManager::_currentScrollSpeed
	float ____currentScrollSpeed_4;
	// System.Single ScrollManager::_scrollSpeed
	float ____scrollSpeed_5;
	// System.Boolean ScrollManager::_stopScroll
	bool ____stopScroll_6;
	// System.Boolean ScrollManager::_lerpScroll
	bool ____lerpScroll_7;
	// System.Single ScrollManager::_lerpTime
	float ____lerpTime_8;
	// System.Single ScrollManager::_lerpElapsed
	float ____lerpElapsed_9;
	// UnityEngine.AnimationCurve ScrollManager::_lerpCurve
	AnimationCurve_t3306541151 * ____lerpCurve_10;

public:
	inline static int32_t get_offset_of_scrollAcceleration_3() { return static_cast<int32_t>(offsetof(ScrollManager_t1884328168, ___scrollAcceleration_3)); }
	inline float get_scrollAcceleration_3() const { return ___scrollAcceleration_3; }
	inline float* get_address_of_scrollAcceleration_3() { return &___scrollAcceleration_3; }
	inline void set_scrollAcceleration_3(float value)
	{
		___scrollAcceleration_3 = value;
	}

	inline static int32_t get_offset_of__currentScrollSpeed_4() { return static_cast<int32_t>(offsetof(ScrollManager_t1884328168, ____currentScrollSpeed_4)); }
	inline float get__currentScrollSpeed_4() const { return ____currentScrollSpeed_4; }
	inline float* get_address_of__currentScrollSpeed_4() { return &____currentScrollSpeed_4; }
	inline void set__currentScrollSpeed_4(float value)
	{
		____currentScrollSpeed_4 = value;
	}

	inline static int32_t get_offset_of__scrollSpeed_5() { return static_cast<int32_t>(offsetof(ScrollManager_t1884328168, ____scrollSpeed_5)); }
	inline float get__scrollSpeed_5() const { return ____scrollSpeed_5; }
	inline float* get_address_of__scrollSpeed_5() { return &____scrollSpeed_5; }
	inline void set__scrollSpeed_5(float value)
	{
		____scrollSpeed_5 = value;
	}

	inline static int32_t get_offset_of__stopScroll_6() { return static_cast<int32_t>(offsetof(ScrollManager_t1884328168, ____stopScroll_6)); }
	inline bool get__stopScroll_6() const { return ____stopScroll_6; }
	inline bool* get_address_of__stopScroll_6() { return &____stopScroll_6; }
	inline void set__stopScroll_6(bool value)
	{
		____stopScroll_6 = value;
	}

	inline static int32_t get_offset_of__lerpScroll_7() { return static_cast<int32_t>(offsetof(ScrollManager_t1884328168, ____lerpScroll_7)); }
	inline bool get__lerpScroll_7() const { return ____lerpScroll_7; }
	inline bool* get_address_of__lerpScroll_7() { return &____lerpScroll_7; }
	inline void set__lerpScroll_7(bool value)
	{
		____lerpScroll_7 = value;
	}

	inline static int32_t get_offset_of__lerpTime_8() { return static_cast<int32_t>(offsetof(ScrollManager_t1884328168, ____lerpTime_8)); }
	inline float get__lerpTime_8() const { return ____lerpTime_8; }
	inline float* get_address_of__lerpTime_8() { return &____lerpTime_8; }
	inline void set__lerpTime_8(float value)
	{
		____lerpTime_8 = value;
	}

	inline static int32_t get_offset_of__lerpElapsed_9() { return static_cast<int32_t>(offsetof(ScrollManager_t1884328168, ____lerpElapsed_9)); }
	inline float get__lerpElapsed_9() const { return ____lerpElapsed_9; }
	inline float* get_address_of__lerpElapsed_9() { return &____lerpElapsed_9; }
	inline void set__lerpElapsed_9(float value)
	{
		____lerpElapsed_9 = value;
	}

	inline static int32_t get_offset_of__lerpCurve_10() { return static_cast<int32_t>(offsetof(ScrollManager_t1884328168, ____lerpCurve_10)); }
	inline AnimationCurve_t3306541151 * get__lerpCurve_10() const { return ____lerpCurve_10; }
	inline AnimationCurve_t3306541151 ** get_address_of__lerpCurve_10() { return &____lerpCurve_10; }
	inline void set__lerpCurve_10(AnimationCurve_t3306541151 * value)
	{
		____lerpCurve_10 = value;
		Il2CppCodeGenWriteBarrier(&____lerpCurve_10, value);
	}
};

struct ScrollManager_t1884328168_StaticFields
{
public:
	// ScrollManager ScrollManager::_instance
	ScrollManager_t1884328168 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(ScrollManager_t1884328168_StaticFields, ____instance_2)); }
	inline ScrollManager_t1884328168 * get__instance_2() const { return ____instance_2; }
	inline ScrollManager_t1884328168 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(ScrollManager_t1884328168 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
