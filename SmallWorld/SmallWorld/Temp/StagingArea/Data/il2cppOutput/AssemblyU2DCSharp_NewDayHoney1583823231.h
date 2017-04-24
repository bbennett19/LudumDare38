#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewDayHoney
struct  NewDayHoney_t1583823231  : public MonoBehaviour_t1158329972
{
public:
	// System.Single NewDayHoney::maxWidth
	float ___maxWidth_2;
	// UnityEngine.UI.Image NewDayHoney::_honeyImage
	Image_t2042527209 * ____honeyImage_3;

public:
	inline static int32_t get_offset_of_maxWidth_2() { return static_cast<int32_t>(offsetof(NewDayHoney_t1583823231, ___maxWidth_2)); }
	inline float get_maxWidth_2() const { return ___maxWidth_2; }
	inline float* get_address_of_maxWidth_2() { return &___maxWidth_2; }
	inline void set_maxWidth_2(float value)
	{
		___maxWidth_2 = value;
	}

	inline static int32_t get_offset_of__honeyImage_3() { return static_cast<int32_t>(offsetof(NewDayHoney_t1583823231, ____honeyImage_3)); }
	inline Image_t2042527209 * get__honeyImage_3() const { return ____honeyImage_3; }
	inline Image_t2042527209 ** get_address_of__honeyImage_3() { return &____honeyImage_3; }
	inline void set__honeyImage_3(Image_t2042527209 * value)
	{
		____honeyImage_3 = value;
		Il2CppCodeGenWriteBarrier(&____honeyImage_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
