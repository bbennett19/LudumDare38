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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeeStinger
struct  BeeStinger_t3674771762  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BeeStinger::bear
	GameObject_t1756533147 * ___bear_2;
	// UnityEngine.GameObject BeeStinger::bee
	GameObject_t1756533147 * ___bee_3;

public:
	inline static int32_t get_offset_of_bear_2() { return static_cast<int32_t>(offsetof(BeeStinger_t3674771762, ___bear_2)); }
	inline GameObject_t1756533147 * get_bear_2() const { return ___bear_2; }
	inline GameObject_t1756533147 ** get_address_of_bear_2() { return &___bear_2; }
	inline void set_bear_2(GameObject_t1756533147 * value)
	{
		___bear_2 = value;
		Il2CppCodeGenWriteBarrier(&___bear_2, value);
	}

	inline static int32_t get_offset_of_bee_3() { return static_cast<int32_t>(offsetof(BeeStinger_t3674771762, ___bee_3)); }
	inline GameObject_t1756533147 * get_bee_3() const { return ___bee_3; }
	inline GameObject_t1756533147 ** get_address_of_bee_3() { return &___bee_3; }
	inline void set_bee_3(GameObject_t1756533147 * value)
	{
		___bee_3 = value;
		Il2CppCodeGenWriteBarrier(&___bee_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
