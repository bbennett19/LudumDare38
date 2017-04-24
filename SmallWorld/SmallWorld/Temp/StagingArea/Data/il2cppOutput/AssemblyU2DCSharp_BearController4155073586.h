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

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BearController
struct  BearController_t4155073586  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform BearController::hivePos
	Transform_t3275118058 * ___hivePos_2;
	// UnityEngine.GameObject BearController::beeHive
	GameObject_t1756533147 * ___beeHive_3;
	// UnityEngine.GameObject BearController::bee
	GameObject_t1756533147 * ___bee_4;
	// UnityEngine.GameObject BearController::thing
	GameObject_t1756533147 * ___thing_5;
	// UnityEngine.Vector2 BearController::_position
	Vector2_t2243707579  ____position_6;
	// System.Single BearController::_speed
	float ____speed_7;
	// System.Single BearController::_frequency
	float ____frequency_8;
	// System.Single BearController::_magnitude
	float ____magnitude_9;
	// System.Boolean BearController::_moveToHive
	bool ____moveToHive_10;
	// System.Boolean BearController::_walkingAway
	bool ____walkingAway_11;
	// UnityEngine.Animator BearController::_anim
	Animator_t69676727 * ____anim_12;
	// System.Boolean BearController::_pausing
	bool ____pausing_13;
	// System.Boolean BearController::_interactable
	bool ____interactable_14;
	// System.Int32 BearController::_hitCount
	int32_t ____hitCount_15;

public:
	inline static int32_t get_offset_of_hivePos_2() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ___hivePos_2)); }
	inline Transform_t3275118058 * get_hivePos_2() const { return ___hivePos_2; }
	inline Transform_t3275118058 ** get_address_of_hivePos_2() { return &___hivePos_2; }
	inline void set_hivePos_2(Transform_t3275118058 * value)
	{
		___hivePos_2 = value;
		Il2CppCodeGenWriteBarrier(&___hivePos_2, value);
	}

	inline static int32_t get_offset_of_beeHive_3() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ___beeHive_3)); }
	inline GameObject_t1756533147 * get_beeHive_3() const { return ___beeHive_3; }
	inline GameObject_t1756533147 ** get_address_of_beeHive_3() { return &___beeHive_3; }
	inline void set_beeHive_3(GameObject_t1756533147 * value)
	{
		___beeHive_3 = value;
		Il2CppCodeGenWriteBarrier(&___beeHive_3, value);
	}

	inline static int32_t get_offset_of_bee_4() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ___bee_4)); }
	inline GameObject_t1756533147 * get_bee_4() const { return ___bee_4; }
	inline GameObject_t1756533147 ** get_address_of_bee_4() { return &___bee_4; }
	inline void set_bee_4(GameObject_t1756533147 * value)
	{
		___bee_4 = value;
		Il2CppCodeGenWriteBarrier(&___bee_4, value);
	}

	inline static int32_t get_offset_of_thing_5() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ___thing_5)); }
	inline GameObject_t1756533147 * get_thing_5() const { return ___thing_5; }
	inline GameObject_t1756533147 ** get_address_of_thing_5() { return &___thing_5; }
	inline void set_thing_5(GameObject_t1756533147 * value)
	{
		___thing_5 = value;
		Il2CppCodeGenWriteBarrier(&___thing_5, value);
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____position_6)); }
	inline Vector2_t2243707579  get__position_6() const { return ____position_6; }
	inline Vector2_t2243707579 * get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(Vector2_t2243707579  value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__speed_7() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____speed_7)); }
	inline float get__speed_7() const { return ____speed_7; }
	inline float* get_address_of__speed_7() { return &____speed_7; }
	inline void set__speed_7(float value)
	{
		____speed_7 = value;
	}

	inline static int32_t get_offset_of__frequency_8() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____frequency_8)); }
	inline float get__frequency_8() const { return ____frequency_8; }
	inline float* get_address_of__frequency_8() { return &____frequency_8; }
	inline void set__frequency_8(float value)
	{
		____frequency_8 = value;
	}

	inline static int32_t get_offset_of__magnitude_9() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____magnitude_9)); }
	inline float get__magnitude_9() const { return ____magnitude_9; }
	inline float* get_address_of__magnitude_9() { return &____magnitude_9; }
	inline void set__magnitude_9(float value)
	{
		____magnitude_9 = value;
	}

	inline static int32_t get_offset_of__moveToHive_10() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____moveToHive_10)); }
	inline bool get__moveToHive_10() const { return ____moveToHive_10; }
	inline bool* get_address_of__moveToHive_10() { return &____moveToHive_10; }
	inline void set__moveToHive_10(bool value)
	{
		____moveToHive_10 = value;
	}

	inline static int32_t get_offset_of__walkingAway_11() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____walkingAway_11)); }
	inline bool get__walkingAway_11() const { return ____walkingAway_11; }
	inline bool* get_address_of__walkingAway_11() { return &____walkingAway_11; }
	inline void set__walkingAway_11(bool value)
	{
		____walkingAway_11 = value;
	}

	inline static int32_t get_offset_of__anim_12() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____anim_12)); }
	inline Animator_t69676727 * get__anim_12() const { return ____anim_12; }
	inline Animator_t69676727 ** get_address_of__anim_12() { return &____anim_12; }
	inline void set__anim_12(Animator_t69676727 * value)
	{
		____anim_12 = value;
		Il2CppCodeGenWriteBarrier(&____anim_12, value);
	}

	inline static int32_t get_offset_of__pausing_13() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____pausing_13)); }
	inline bool get__pausing_13() const { return ____pausing_13; }
	inline bool* get_address_of__pausing_13() { return &____pausing_13; }
	inline void set__pausing_13(bool value)
	{
		____pausing_13 = value;
	}

	inline static int32_t get_offset_of__interactable_14() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____interactable_14)); }
	inline bool get__interactable_14() const { return ____interactable_14; }
	inline bool* get_address_of__interactable_14() { return &____interactable_14; }
	inline void set__interactable_14(bool value)
	{
		____interactable_14 = value;
	}

	inline static int32_t get_offset_of__hitCount_15() { return static_cast<int32_t>(offsetof(BearController_t4155073586, ____hitCount_15)); }
	inline int32_t get__hitCount_15() const { return ____hitCount_15; }
	inline int32_t* get_address_of__hitCount_15() { return &____hitCount_15; }
	inline void set__hitCount_15(int32_t value)
	{
		____hitCount_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
