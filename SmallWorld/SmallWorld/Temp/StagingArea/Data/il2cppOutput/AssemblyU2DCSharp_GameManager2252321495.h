#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// GameManager
struct GameManager_t2252321495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GameManager::transferRate
	float ___transferRate_2;
	// System.Single GameManager::maxHoney
	float ___maxHoney_3;
	// System.Single GameManager::maxNectar
	float ___maxNectar_4;
	// System.Single GameManager::timeToMainScene
	float ___timeToMainScene_5;
	// UnityEngine.AudioClip GameManager::bearAudio
	AudioClip_t1932558630 * ___bearAudio_6;
	// System.Single GameManager::_elapsed
	float ____elapsed_7;
	// System.Single GameManager::_honey
	float ____honey_8;
	// System.Single GameManager::_nectar
	float ____nectar_9;
	// System.Int32 GameManager::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_10;
	// System.Boolean GameManager::<Pause>k__BackingField
	bool ___U3CPauseU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_transferRate_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___transferRate_2)); }
	inline float get_transferRate_2() const { return ___transferRate_2; }
	inline float* get_address_of_transferRate_2() { return &___transferRate_2; }
	inline void set_transferRate_2(float value)
	{
		___transferRate_2 = value;
	}

	inline static int32_t get_offset_of_maxHoney_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___maxHoney_3)); }
	inline float get_maxHoney_3() const { return ___maxHoney_3; }
	inline float* get_address_of_maxHoney_3() { return &___maxHoney_3; }
	inline void set_maxHoney_3(float value)
	{
		___maxHoney_3 = value;
	}

	inline static int32_t get_offset_of_maxNectar_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___maxNectar_4)); }
	inline float get_maxNectar_4() const { return ___maxNectar_4; }
	inline float* get_address_of_maxNectar_4() { return &___maxNectar_4; }
	inline void set_maxNectar_4(float value)
	{
		___maxNectar_4 = value;
	}

	inline static int32_t get_offset_of_timeToMainScene_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___timeToMainScene_5)); }
	inline float get_timeToMainScene_5() const { return ___timeToMainScene_5; }
	inline float* get_address_of_timeToMainScene_5() { return &___timeToMainScene_5; }
	inline void set_timeToMainScene_5(float value)
	{
		___timeToMainScene_5 = value;
	}

	inline static int32_t get_offset_of_bearAudio_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___bearAudio_6)); }
	inline AudioClip_t1932558630 * get_bearAudio_6() const { return ___bearAudio_6; }
	inline AudioClip_t1932558630 ** get_address_of_bearAudio_6() { return &___bearAudio_6; }
	inline void set_bearAudio_6(AudioClip_t1932558630 * value)
	{
		___bearAudio_6 = value;
		Il2CppCodeGenWriteBarrier(&___bearAudio_6, value);
	}

	inline static int32_t get_offset_of__elapsed_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ____elapsed_7)); }
	inline float get__elapsed_7() const { return ____elapsed_7; }
	inline float* get_address_of__elapsed_7() { return &____elapsed_7; }
	inline void set__elapsed_7(float value)
	{
		____elapsed_7 = value;
	}

	inline static int32_t get_offset_of__honey_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ____honey_8)); }
	inline float get__honey_8() const { return ____honey_8; }
	inline float* get_address_of__honey_8() { return &____honey_8; }
	inline void set__honey_8(float value)
	{
		____honey_8 = value;
	}

	inline static int32_t get_offset_of__nectar_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ____nectar_9)); }
	inline float get__nectar_9() const { return ____nectar_9; }
	inline float* get_address_of__nectar_9() { return &____nectar_9; }
	inline void set__nectar_9(float value)
	{
		____nectar_9 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___U3CStateU3Ek__BackingField_10)); }
	inline int32_t get_U3CStateU3Ek__BackingField_10() const { return ___U3CStateU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_10() { return &___U3CStateU3Ek__BackingField_10; }
	inline void set_U3CStateU3Ek__BackingField_10(int32_t value)
	{
		___U3CStateU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPauseU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___U3CPauseU3Ek__BackingField_12)); }
	inline bool get_U3CPauseU3Ek__BackingField_12() const { return ___U3CPauseU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CPauseU3Ek__BackingField_12() { return &___U3CPauseU3Ek__BackingField_12; }
	inline void set_U3CPauseU3Ek__BackingField_12(bool value)
	{
		___U3CPauseU3Ek__BackingField_12 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::_instance
	GameManager_t2252321495 * ____instance_11;

public:
	inline static int32_t get_offset_of__instance_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ____instance_11)); }
	inline GameManager_t2252321495 * get__instance_11() const { return ____instance_11; }
	inline GameManager_t2252321495 ** get_address_of__instance_11() { return &____instance_11; }
	inline void set__instance_11(GameManager_t2252321495 * value)
	{
		____instance_11 = value;
		Il2CppCodeGenWriteBarrier(&____instance_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
