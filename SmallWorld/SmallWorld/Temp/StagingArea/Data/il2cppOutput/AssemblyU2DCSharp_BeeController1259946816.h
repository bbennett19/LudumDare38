#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Transform
struct Transform_t3275118058;
// DamageEffect
struct DamageEffect_t456732008;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeeController
struct  BeeController_t1259946816  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BeeController::flyingForce
	float ___flyingForce_2;
	// System.Single BeeController::maxNectar
	float ___maxNectar_3;
	// System.Single BeeController::nectarPerSecond
	float ___nectarPerSecond_4;
	// UnityEngine.GameObject BeeController::pollenParticles
	GameObject_t1756533147 * ___pollenParticles_5;
	// UnityEngine.AudioSource BeeController::flower
	AudioSource_t1135106623 * ___flower_6;
	// UnityEngine.AudioSource BeeController::bird
	AudioSource_t1135106623 * ___bird_7;
	// UnityEngine.Rigidbody2D BeeController::rgdBdy
	Rigidbody2D_t502193897 * ___rgdBdy_8;
	// System.Boolean BeeController::addForce
	bool ___addForce_9;
	// System.Single BeeController::harvestTime
	float ___harvestTime_11;
	// System.Single BeeController::harvestElapsed
	float ___harvestElapsed_12;
	// System.Boolean BeeController::harvesting
	bool ___harvesting_13;
	// System.Boolean BeeController::firstAction
	bool ___firstAction_14;
	// UnityEngine.Collider2D BeeController::harvestingCollider
	Collider2D_t646061738 * ___harvestingCollider_15;
	// System.Boolean BeeController::moveToHive
	bool ___moveToHive_16;
	// UnityEngine.Transform BeeController::hiveLocation
	Transform_t3275118058 * ___hiveLocation_17;
	// System.Single BeeController::_currentNectar
	float ____currentNectar_18;
	// DamageEffect BeeController::_dmgEffect
	DamageEffect_t456732008 * ____dmgEffect_19;
	// System.Boolean BeeController::_justHit
	bool ____justHit_20;
	// UnityEngine.Animator BeeController::_animator
	Animator_t69676727 * ____animator_21;

public:
	inline static int32_t get_offset_of_flyingForce_2() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___flyingForce_2)); }
	inline float get_flyingForce_2() const { return ___flyingForce_2; }
	inline float* get_address_of_flyingForce_2() { return &___flyingForce_2; }
	inline void set_flyingForce_2(float value)
	{
		___flyingForce_2 = value;
	}

	inline static int32_t get_offset_of_maxNectar_3() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___maxNectar_3)); }
	inline float get_maxNectar_3() const { return ___maxNectar_3; }
	inline float* get_address_of_maxNectar_3() { return &___maxNectar_3; }
	inline void set_maxNectar_3(float value)
	{
		___maxNectar_3 = value;
	}

	inline static int32_t get_offset_of_nectarPerSecond_4() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___nectarPerSecond_4)); }
	inline float get_nectarPerSecond_4() const { return ___nectarPerSecond_4; }
	inline float* get_address_of_nectarPerSecond_4() { return &___nectarPerSecond_4; }
	inline void set_nectarPerSecond_4(float value)
	{
		___nectarPerSecond_4 = value;
	}

	inline static int32_t get_offset_of_pollenParticles_5() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___pollenParticles_5)); }
	inline GameObject_t1756533147 * get_pollenParticles_5() const { return ___pollenParticles_5; }
	inline GameObject_t1756533147 ** get_address_of_pollenParticles_5() { return &___pollenParticles_5; }
	inline void set_pollenParticles_5(GameObject_t1756533147 * value)
	{
		___pollenParticles_5 = value;
		Il2CppCodeGenWriteBarrier(&___pollenParticles_5, value);
	}

	inline static int32_t get_offset_of_flower_6() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___flower_6)); }
	inline AudioSource_t1135106623 * get_flower_6() const { return ___flower_6; }
	inline AudioSource_t1135106623 ** get_address_of_flower_6() { return &___flower_6; }
	inline void set_flower_6(AudioSource_t1135106623 * value)
	{
		___flower_6 = value;
		Il2CppCodeGenWriteBarrier(&___flower_6, value);
	}

	inline static int32_t get_offset_of_bird_7() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___bird_7)); }
	inline AudioSource_t1135106623 * get_bird_7() const { return ___bird_7; }
	inline AudioSource_t1135106623 ** get_address_of_bird_7() { return &___bird_7; }
	inline void set_bird_7(AudioSource_t1135106623 * value)
	{
		___bird_7 = value;
		Il2CppCodeGenWriteBarrier(&___bird_7, value);
	}

	inline static int32_t get_offset_of_rgdBdy_8() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___rgdBdy_8)); }
	inline Rigidbody2D_t502193897 * get_rgdBdy_8() const { return ___rgdBdy_8; }
	inline Rigidbody2D_t502193897 ** get_address_of_rgdBdy_8() { return &___rgdBdy_8; }
	inline void set_rgdBdy_8(Rigidbody2D_t502193897 * value)
	{
		___rgdBdy_8 = value;
		Il2CppCodeGenWriteBarrier(&___rgdBdy_8, value);
	}

	inline static int32_t get_offset_of_addForce_9() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___addForce_9)); }
	inline bool get_addForce_9() const { return ___addForce_9; }
	inline bool* get_address_of_addForce_9() { return &___addForce_9; }
	inline void set_addForce_9(bool value)
	{
		___addForce_9 = value;
	}

	inline static int32_t get_offset_of_harvestTime_11() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___harvestTime_11)); }
	inline float get_harvestTime_11() const { return ___harvestTime_11; }
	inline float* get_address_of_harvestTime_11() { return &___harvestTime_11; }
	inline void set_harvestTime_11(float value)
	{
		___harvestTime_11 = value;
	}

	inline static int32_t get_offset_of_harvestElapsed_12() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___harvestElapsed_12)); }
	inline float get_harvestElapsed_12() const { return ___harvestElapsed_12; }
	inline float* get_address_of_harvestElapsed_12() { return &___harvestElapsed_12; }
	inline void set_harvestElapsed_12(float value)
	{
		___harvestElapsed_12 = value;
	}

	inline static int32_t get_offset_of_harvesting_13() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___harvesting_13)); }
	inline bool get_harvesting_13() const { return ___harvesting_13; }
	inline bool* get_address_of_harvesting_13() { return &___harvesting_13; }
	inline void set_harvesting_13(bool value)
	{
		___harvesting_13 = value;
	}

	inline static int32_t get_offset_of_firstAction_14() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___firstAction_14)); }
	inline bool get_firstAction_14() const { return ___firstAction_14; }
	inline bool* get_address_of_firstAction_14() { return &___firstAction_14; }
	inline void set_firstAction_14(bool value)
	{
		___firstAction_14 = value;
	}

	inline static int32_t get_offset_of_harvestingCollider_15() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___harvestingCollider_15)); }
	inline Collider2D_t646061738 * get_harvestingCollider_15() const { return ___harvestingCollider_15; }
	inline Collider2D_t646061738 ** get_address_of_harvestingCollider_15() { return &___harvestingCollider_15; }
	inline void set_harvestingCollider_15(Collider2D_t646061738 * value)
	{
		___harvestingCollider_15 = value;
		Il2CppCodeGenWriteBarrier(&___harvestingCollider_15, value);
	}

	inline static int32_t get_offset_of_moveToHive_16() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___moveToHive_16)); }
	inline bool get_moveToHive_16() const { return ___moveToHive_16; }
	inline bool* get_address_of_moveToHive_16() { return &___moveToHive_16; }
	inline void set_moveToHive_16(bool value)
	{
		___moveToHive_16 = value;
	}

	inline static int32_t get_offset_of_hiveLocation_17() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ___hiveLocation_17)); }
	inline Transform_t3275118058 * get_hiveLocation_17() const { return ___hiveLocation_17; }
	inline Transform_t3275118058 ** get_address_of_hiveLocation_17() { return &___hiveLocation_17; }
	inline void set_hiveLocation_17(Transform_t3275118058 * value)
	{
		___hiveLocation_17 = value;
		Il2CppCodeGenWriteBarrier(&___hiveLocation_17, value);
	}

	inline static int32_t get_offset_of__currentNectar_18() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ____currentNectar_18)); }
	inline float get__currentNectar_18() const { return ____currentNectar_18; }
	inline float* get_address_of__currentNectar_18() { return &____currentNectar_18; }
	inline void set__currentNectar_18(float value)
	{
		____currentNectar_18 = value;
	}

	inline static int32_t get_offset_of__dmgEffect_19() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ____dmgEffect_19)); }
	inline DamageEffect_t456732008 * get__dmgEffect_19() const { return ____dmgEffect_19; }
	inline DamageEffect_t456732008 ** get_address_of__dmgEffect_19() { return &____dmgEffect_19; }
	inline void set__dmgEffect_19(DamageEffect_t456732008 * value)
	{
		____dmgEffect_19 = value;
		Il2CppCodeGenWriteBarrier(&____dmgEffect_19, value);
	}

	inline static int32_t get_offset_of__justHit_20() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ____justHit_20)); }
	inline bool get__justHit_20() const { return ____justHit_20; }
	inline bool* get_address_of__justHit_20() { return &____justHit_20; }
	inline void set__justHit_20(bool value)
	{
		____justHit_20 = value;
	}

	inline static int32_t get_offset_of__animator_21() { return static_cast<int32_t>(offsetof(BeeController_t1259946816, ____animator_21)); }
	inline Animator_t69676727 * get__animator_21() const { return ____animator_21; }
	inline Animator_t69676727 ** get_address_of__animator_21() { return &____animator_21; }
	inline void set__animator_21(Animator_t69676727 * value)
	{
		____animator_21 = value;
		Il2CppCodeGenWriteBarrier(&____animator_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
