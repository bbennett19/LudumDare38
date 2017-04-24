#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// BeeController
struct BeeController_t1259946816;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NectarMeter
struct  NectarMeter_t3724519274  : public MonoBehaviour_t1158329972
{
public:
	// BeeController NectarMeter::bee
	BeeController_t1259946816 * ___bee_2;
	// System.Single NectarMeter::maxWidth
	float ___maxWidth_3;
	// UnityEngine.UI.Image NectarMeter::_nectarImage
	Image_t2042527209 * ____nectarImage_4;

public:
	inline static int32_t get_offset_of_bee_2() { return static_cast<int32_t>(offsetof(NectarMeter_t3724519274, ___bee_2)); }
	inline BeeController_t1259946816 * get_bee_2() const { return ___bee_2; }
	inline BeeController_t1259946816 ** get_address_of_bee_2() { return &___bee_2; }
	inline void set_bee_2(BeeController_t1259946816 * value)
	{
		___bee_2 = value;
		Il2CppCodeGenWriteBarrier(&___bee_2, value);
	}

	inline static int32_t get_offset_of_maxWidth_3() { return static_cast<int32_t>(offsetof(NectarMeter_t3724519274, ___maxWidth_3)); }
	inline float get_maxWidth_3() const { return ___maxWidth_3; }
	inline float* get_address_of_maxWidth_3() { return &___maxWidth_3; }
	inline void set_maxWidth_3(float value)
	{
		___maxWidth_3 = value;
	}

	inline static int32_t get_offset_of__nectarImage_4() { return static_cast<int32_t>(offsetof(NectarMeter_t3724519274, ____nectarImage_4)); }
	inline Image_t2042527209 * get__nectarImage_4() const { return ____nectarImage_4; }
	inline Image_t2042527209 ** get_address_of__nectarImage_4() { return &____nectarImage_4; }
	inline void set__nectarImage_4(Image_t2042527209 * value)
	{
		____nectarImage_4 = value;
		Il2CppCodeGenWriteBarrier(&____nectarImage_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
