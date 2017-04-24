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

// TreeSpawner
struct  TreeSpawner_t2910422356  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TreeSpawner::tree
	GameObject_t1756533147 * ___tree_2;
	// System.Boolean TreeSpawner::_spawnOnce
	bool ____spawnOnce_3;

public:
	inline static int32_t get_offset_of_tree_2() { return static_cast<int32_t>(offsetof(TreeSpawner_t2910422356, ___tree_2)); }
	inline GameObject_t1756533147 * get_tree_2() const { return ___tree_2; }
	inline GameObject_t1756533147 ** get_address_of_tree_2() { return &___tree_2; }
	inline void set_tree_2(GameObject_t1756533147 * value)
	{
		___tree_2 = value;
		Il2CppCodeGenWriteBarrier(&___tree_2, value);
	}

	inline static int32_t get_offset_of__spawnOnce_3() { return static_cast<int32_t>(offsetof(TreeSpawner_t2910422356, ____spawnOnce_3)); }
	inline bool get__spawnOnce_3() const { return ____spawnOnce_3; }
	inline bool* get_address_of__spawnOnce_3() { return &____spawnOnce_3; }
	inline void set__spawnOnce_3(bool value)
	{
		____spawnOnce_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
