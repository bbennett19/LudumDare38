#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DamageEffect
struct  DamageEffect_t456732008  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DamageEffect::invincibleTime
	float ___invincibleTime_2;
	// System.Single DamageEffect::blinkInterval
	float ___blinkInterval_3;
	// System.Boolean DamageEffect::_invincible
	bool ____invincible_4;
	// System.Single DamageEffect::_invincibleElapsed
	float ____invincibleElapsed_5;
	// System.Single DamageEffect::_blinkTimer
	float ____blinkTimer_6;
	// UnityEngine.Renderer DamageEffect::_renderer
	Renderer_t257310565 * ____renderer_7;

public:
	inline static int32_t get_offset_of_invincibleTime_2() { return static_cast<int32_t>(offsetof(DamageEffect_t456732008, ___invincibleTime_2)); }
	inline float get_invincibleTime_2() const { return ___invincibleTime_2; }
	inline float* get_address_of_invincibleTime_2() { return &___invincibleTime_2; }
	inline void set_invincibleTime_2(float value)
	{
		___invincibleTime_2 = value;
	}

	inline static int32_t get_offset_of_blinkInterval_3() { return static_cast<int32_t>(offsetof(DamageEffect_t456732008, ___blinkInterval_3)); }
	inline float get_blinkInterval_3() const { return ___blinkInterval_3; }
	inline float* get_address_of_blinkInterval_3() { return &___blinkInterval_3; }
	inline void set_blinkInterval_3(float value)
	{
		___blinkInterval_3 = value;
	}

	inline static int32_t get_offset_of__invincible_4() { return static_cast<int32_t>(offsetof(DamageEffect_t456732008, ____invincible_4)); }
	inline bool get__invincible_4() const { return ____invincible_4; }
	inline bool* get_address_of__invincible_4() { return &____invincible_4; }
	inline void set__invincible_4(bool value)
	{
		____invincible_4 = value;
	}

	inline static int32_t get_offset_of__invincibleElapsed_5() { return static_cast<int32_t>(offsetof(DamageEffect_t456732008, ____invincibleElapsed_5)); }
	inline float get__invincibleElapsed_5() const { return ____invincibleElapsed_5; }
	inline float* get_address_of__invincibleElapsed_5() { return &____invincibleElapsed_5; }
	inline void set__invincibleElapsed_5(float value)
	{
		____invincibleElapsed_5 = value;
	}

	inline static int32_t get_offset_of__blinkTimer_6() { return static_cast<int32_t>(offsetof(DamageEffect_t456732008, ____blinkTimer_6)); }
	inline float get__blinkTimer_6() const { return ____blinkTimer_6; }
	inline float* get_address_of__blinkTimer_6() { return &____blinkTimer_6; }
	inline void set__blinkTimer_6(float value)
	{
		____blinkTimer_6 = value;
	}

	inline static int32_t get_offset_of__renderer_7() { return static_cast<int32_t>(offsetof(DamageEffect_t456732008, ____renderer_7)); }
	inline Renderer_t257310565 * get__renderer_7() const { return ____renderer_7; }
	inline Renderer_t257310565 ** get_address_of__renderer_7() { return &____renderer_7; }
	inline void set__renderer_7(Renderer_t257310565 * value)
	{
		____renderer_7 = value;
		Il2CppCodeGenWriteBarrier(&____renderer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
