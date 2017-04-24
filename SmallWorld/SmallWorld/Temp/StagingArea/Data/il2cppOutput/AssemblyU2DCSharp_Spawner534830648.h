#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawner
struct  Spawner_t534830648  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] Spawner::objectsToSpawn
	GameObjectU5BU5D_t3057952154* ___objectsToSpawn_2;
	// System.Boolean Spawner::useObjectHeight
	bool ___useObjectHeight_3;
	// System.Boolean Spawner::spawnOnStart
	bool ___spawnOnStart_4;
	// System.Single Spawner::minInterval
	float ___minInterval_5;
	// System.Single Spawner::maxInterval
	float ___maxInterval_6;
	// System.Single Spawner::minHeight
	float ___minHeight_7;
	// System.Single Spawner::maxHeight
	float ___maxHeight_8;
	// System.Single Spawner::_currentInterval
	float ____currentInterval_9;
	// System.Single Spawner::_elapsedTime
	float ____elapsedTime_10;

public:
	inline static int32_t get_offset_of_objectsToSpawn_2() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___objectsToSpawn_2)); }
	inline GameObjectU5BU5D_t3057952154* get_objectsToSpawn_2() const { return ___objectsToSpawn_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objectsToSpawn_2() { return &___objectsToSpawn_2; }
	inline void set_objectsToSpawn_2(GameObjectU5BU5D_t3057952154* value)
	{
		___objectsToSpawn_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToSpawn_2, value);
	}

	inline static int32_t get_offset_of_useObjectHeight_3() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___useObjectHeight_3)); }
	inline bool get_useObjectHeight_3() const { return ___useObjectHeight_3; }
	inline bool* get_address_of_useObjectHeight_3() { return &___useObjectHeight_3; }
	inline void set_useObjectHeight_3(bool value)
	{
		___useObjectHeight_3 = value;
	}

	inline static int32_t get_offset_of_spawnOnStart_4() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___spawnOnStart_4)); }
	inline bool get_spawnOnStart_4() const { return ___spawnOnStart_4; }
	inline bool* get_address_of_spawnOnStart_4() { return &___spawnOnStart_4; }
	inline void set_spawnOnStart_4(bool value)
	{
		___spawnOnStart_4 = value;
	}

	inline static int32_t get_offset_of_minInterval_5() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___minInterval_5)); }
	inline float get_minInterval_5() const { return ___minInterval_5; }
	inline float* get_address_of_minInterval_5() { return &___minInterval_5; }
	inline void set_minInterval_5(float value)
	{
		___minInterval_5 = value;
	}

	inline static int32_t get_offset_of_maxInterval_6() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___maxInterval_6)); }
	inline float get_maxInterval_6() const { return ___maxInterval_6; }
	inline float* get_address_of_maxInterval_6() { return &___maxInterval_6; }
	inline void set_maxInterval_6(float value)
	{
		___maxInterval_6 = value;
	}

	inline static int32_t get_offset_of_minHeight_7() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___minHeight_7)); }
	inline float get_minHeight_7() const { return ___minHeight_7; }
	inline float* get_address_of_minHeight_7() { return &___minHeight_7; }
	inline void set_minHeight_7(float value)
	{
		___minHeight_7 = value;
	}

	inline static int32_t get_offset_of_maxHeight_8() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___maxHeight_8)); }
	inline float get_maxHeight_8() const { return ___maxHeight_8; }
	inline float* get_address_of_maxHeight_8() { return &___maxHeight_8; }
	inline void set_maxHeight_8(float value)
	{
		___maxHeight_8 = value;
	}

	inline static int32_t get_offset_of__currentInterval_9() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ____currentInterval_9)); }
	inline float get__currentInterval_9() const { return ____currentInterval_9; }
	inline float* get_address_of__currentInterval_9() { return &____currentInterval_9; }
	inline void set__currentInterval_9(float value)
	{
		____currentInterval_9 = value;
	}

	inline static int32_t get_offset_of__elapsedTime_10() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ____elapsedTime_10)); }
	inline float get__elapsedTime_10() const { return ____elapsedTime_10; }
	inline float* get_address_of__elapsedTime_10() { return &____elapsedTime_10; }
	inline void set__elapsedTime_10(float value)
	{
		____elapsedTime_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
