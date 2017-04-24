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

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// DamageEffect
struct DamageEffect_t456732008;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeeControllerBear
struct  BeeControllerBear_t2721142322  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BeeControllerBear::flyingForce
	float ___flyingForce_2;
	// System.Single BeeControllerBear::diveSpeed
	float ___diveSpeed_3;
	// System.Single BeeControllerBear::diveTime
	float ___diveTime_4;
	// System.Single BeeControllerBear::deathTime
	float ___deathTime_5;
	// UnityEngine.AnimationCurve BeeControllerBear::curve
	AnimationCurve_t3306541151 * ___curve_6;
	// UnityEngine.Transform BeeControllerBear::ground
	Transform_t3275118058 * ___ground_7;
	// UnityEngine.Transform BeeControllerBear::ceiling
	Transform_t3275118058 * ___ceiling_8;
	// System.Single BeeControllerBear::_elapsedDeath
	float ____elapsedDeath_9;
	// System.Single BeeControllerBear::_elapsedDive
	float ____elapsedDive_10;
	// UnityEngine.Rigidbody2D BeeControllerBear::rgdBdy
	Rigidbody2D_t502193897 * ___rgdBdy_11;
	// System.Boolean BeeControllerBear::addForce
	bool ___addForce_12;
	// DamageEffect BeeControllerBear::_dmgEffect
	DamageEffect_t456732008 * ____dmgEffect_14;
	// UnityEngine.Animator BeeControllerBear::_animator
	Animator_t69676727 * ____animator_15;
	// System.Boolean BeeControllerBear::_diveBomb
	bool ____diveBomb_16;
	// System.Boolean BeeControllerBear::_addImpulse
	bool ____addImpulse_17;
	// UnityEngine.Vector2 BeeControllerBear::_impulseForce
	Vector2_t2243707579  ____impulseForce_18;
	// System.Boolean BeeControllerBear::_dying
	bool ____dying_19;
	// System.Boolean BeeControllerBear::_dead
	bool ____dead_20;

public:
	inline static int32_t get_offset_of_flyingForce_2() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ___flyingForce_2)); }
	inline float get_flyingForce_2() const { return ___flyingForce_2; }
	inline float* get_address_of_flyingForce_2() { return &___flyingForce_2; }
	inline void set_flyingForce_2(float value)
	{
		___flyingForce_2 = value;
	}

	inline static int32_t get_offset_of_diveSpeed_3() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ___diveSpeed_3)); }
	inline float get_diveSpeed_3() const { return ___diveSpeed_3; }
	inline float* get_address_of_diveSpeed_3() { return &___diveSpeed_3; }
	inline void set_diveSpeed_3(float value)
	{
		___diveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_diveTime_4() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ___diveTime_4)); }
	inline float get_diveTime_4() const { return ___diveTime_4; }
	inline float* get_address_of_diveTime_4() { return &___diveTime_4; }
	inline void set_diveTime_4(float value)
	{
		___diveTime_4 = value;
	}

	inline static int32_t get_offset_of_deathTime_5() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ___deathTime_5)); }
	inline float get_deathTime_5() const { return ___deathTime_5; }
	inline float* get_address_of_deathTime_5() { return &___deathTime_5; }
	inline void set_deathTime_5(float value)
	{
		___deathTime_5 = value;
	}

	inline static int32_t get_offset_of_curve_6() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ___curve_6)); }
	inline AnimationCurve_t3306541151 * get_curve_6() const { return ___curve_6; }
	inline AnimationCurve_t3306541151 ** get_address_of_curve_6() { return &___curve_6; }
	inline void set_curve_6(AnimationCurve_t3306541151 * value)
	{
		___curve_6 = value;
		Il2CppCodeGenWriteBarrier(&___curve_6, value);
	}

	inline static int32_t get_offset_of_ground_7() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ___ground_7)); }
	inline Transform_t3275118058 * get_ground_7() const { return ___ground_7; }
	inline Transform_t3275118058 ** get_address_of_ground_7() { return &___ground_7; }
	inline void set_ground_7(Transform_t3275118058 * value)
	{
		___ground_7 = value;
		Il2CppCodeGenWriteBarrier(&___ground_7, value);
	}

	inline static int32_t get_offset_of_ceiling_8() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ___ceiling_8)); }
	inline Transform_t3275118058 * get_ceiling_8() const { return ___ceiling_8; }
	inline Transform_t3275118058 ** get_address_of_ceiling_8() { return &___ceiling_8; }
	inline void set_ceiling_8(Transform_t3275118058 * value)
	{
		___ceiling_8 = value;
		Il2CppCodeGenWriteBarrier(&___ceiling_8, value);
	}

	inline static int32_t get_offset_of__elapsedDeath_9() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ____elapsedDeath_9)); }
	inline float get__elapsedDeath_9() const { return ____elapsedDeath_9; }
	inline float* get_address_of__elapsedDeath_9() { return &____elapsedDeath_9; }
	inline void set__elapsedDeath_9(float value)
	{
		____elapsedDeath_9 = value;
	}

	inline static int32_t get_offset_of__elapsedDive_10() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ____elapsedDive_10)); }
	inline float get__elapsedDive_10() const { return ____elapsedDive_10; }
	inline float* get_address_of__elapsedDive_10() { return &____elapsedDive_10; }
	inline void set__elapsedDive_10(float value)
	{
		____elapsedDive_10 = value;
	}

	inline static int32_t get_offset_of_rgdBdy_11() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ___rgdBdy_11)); }
	inline Rigidbody2D_t502193897 * get_rgdBdy_11() const { return ___rgdBdy_11; }
	inline Rigidbody2D_t502193897 ** get_address_of_rgdBdy_11() { return &___rgdBdy_11; }
	inline void set_rgdBdy_11(Rigidbody2D_t502193897 * value)
	{
		___rgdBdy_11 = value;
		Il2CppCodeGenWriteBarrier(&___rgdBdy_11, value);
	}

	inline static int32_t get_offset_of_addForce_12() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ___addForce_12)); }
	inline bool get_addForce_12() const { return ___addForce_12; }
	inline bool* get_address_of_addForce_12() { return &___addForce_12; }
	inline void set_addForce_12(bool value)
	{
		___addForce_12 = value;
	}

	inline static int32_t get_offset_of__dmgEffect_14() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ____dmgEffect_14)); }
	inline DamageEffect_t456732008 * get__dmgEffect_14() const { return ____dmgEffect_14; }
	inline DamageEffect_t456732008 ** get_address_of__dmgEffect_14() { return &____dmgEffect_14; }
	inline void set__dmgEffect_14(DamageEffect_t456732008 * value)
	{
		____dmgEffect_14 = value;
		Il2CppCodeGenWriteBarrier(&____dmgEffect_14, value);
	}

	inline static int32_t get_offset_of__animator_15() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ____animator_15)); }
	inline Animator_t69676727 * get__animator_15() const { return ____animator_15; }
	inline Animator_t69676727 ** get_address_of__animator_15() { return &____animator_15; }
	inline void set__animator_15(Animator_t69676727 * value)
	{
		____animator_15 = value;
		Il2CppCodeGenWriteBarrier(&____animator_15, value);
	}

	inline static int32_t get_offset_of__diveBomb_16() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ____diveBomb_16)); }
	inline bool get__diveBomb_16() const { return ____diveBomb_16; }
	inline bool* get_address_of__diveBomb_16() { return &____diveBomb_16; }
	inline void set__diveBomb_16(bool value)
	{
		____diveBomb_16 = value;
	}

	inline static int32_t get_offset_of__addImpulse_17() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ____addImpulse_17)); }
	inline bool get__addImpulse_17() const { return ____addImpulse_17; }
	inline bool* get_address_of__addImpulse_17() { return &____addImpulse_17; }
	inline void set__addImpulse_17(bool value)
	{
		____addImpulse_17 = value;
	}

	inline static int32_t get_offset_of__impulseForce_18() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ____impulseForce_18)); }
	inline Vector2_t2243707579  get__impulseForce_18() const { return ____impulseForce_18; }
	inline Vector2_t2243707579 * get_address_of__impulseForce_18() { return &____impulseForce_18; }
	inline void set__impulseForce_18(Vector2_t2243707579  value)
	{
		____impulseForce_18 = value;
	}

	inline static int32_t get_offset_of__dying_19() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ____dying_19)); }
	inline bool get__dying_19() const { return ____dying_19; }
	inline bool* get_address_of__dying_19() { return &____dying_19; }
	inline void set__dying_19(bool value)
	{
		____dying_19 = value;
	}

	inline static int32_t get_offset_of__dead_20() { return static_cast<int32_t>(offsetof(BeeControllerBear_t2721142322, ____dead_20)); }
	inline bool get__dead_20() const { return ____dead_20; }
	inline bool* get_address_of__dead_20() { return &____dead_20; }
	inline void set__dead_20(bool value)
	{
		____dead_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
