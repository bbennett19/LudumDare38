#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t1098056643;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DarkenOverTime
struct  DarkenOverTime_t868563228  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color DarkenOverTime::finalColor
	Color_t2020392075  ___finalColor_2;
	// UnityEngine.AnimationCurve DarkenOverTime::rate
	AnimationCurve_t3306541151 * ___rate_3;
	// UnityEngine.SpriteRenderer[] DarkenOverTime::_renderers
	SpriteRendererU5BU5D_t1098056643* ____renderers_4;
	// UnityEngine.Color DarkenOverTime::_initialColor
	Color_t2020392075  ____initialColor_5;

public:
	inline static int32_t get_offset_of_finalColor_2() { return static_cast<int32_t>(offsetof(DarkenOverTime_t868563228, ___finalColor_2)); }
	inline Color_t2020392075  get_finalColor_2() const { return ___finalColor_2; }
	inline Color_t2020392075 * get_address_of_finalColor_2() { return &___finalColor_2; }
	inline void set_finalColor_2(Color_t2020392075  value)
	{
		___finalColor_2 = value;
	}

	inline static int32_t get_offset_of_rate_3() { return static_cast<int32_t>(offsetof(DarkenOverTime_t868563228, ___rate_3)); }
	inline AnimationCurve_t3306541151 * get_rate_3() const { return ___rate_3; }
	inline AnimationCurve_t3306541151 ** get_address_of_rate_3() { return &___rate_3; }
	inline void set_rate_3(AnimationCurve_t3306541151 * value)
	{
		___rate_3 = value;
		Il2CppCodeGenWriteBarrier(&___rate_3, value);
	}

	inline static int32_t get_offset_of__renderers_4() { return static_cast<int32_t>(offsetof(DarkenOverTime_t868563228, ____renderers_4)); }
	inline SpriteRendererU5BU5D_t1098056643* get__renderers_4() const { return ____renderers_4; }
	inline SpriteRendererU5BU5D_t1098056643** get_address_of__renderers_4() { return &____renderers_4; }
	inline void set__renderers_4(SpriteRendererU5BU5D_t1098056643* value)
	{
		____renderers_4 = value;
		Il2CppCodeGenWriteBarrier(&____renderers_4, value);
	}

	inline static int32_t get_offset_of__initialColor_5() { return static_cast<int32_t>(offsetof(DarkenOverTime_t868563228, ____initialColor_5)); }
	inline Color_t2020392075  get__initialColor_5() const { return ____initialColor_5; }
	inline Color_t2020392075 * get_address_of__initialColor_5() { return &____initialColor_5; }
	inline void set__initialColor_5(Color_t2020392075  value)
	{
		____initialColor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
