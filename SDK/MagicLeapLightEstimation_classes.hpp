#pragma once

// LEAP (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MagicLeapLightEstimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// 0x0010 (0x00D8 - 0x00C8)
class UMagicLeapLightingTrackingComponent : public UActorComponent
{
public:
	bool                                               UseGlobalAmbience;                                        // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               UseColorTemp;                                             // 0x00C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00CA(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent"));
		return ptr;
	}

};


// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary"));
		return ptr;
	}


	static bool IsTrackerValid();
	static bool GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState);
	static bool GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState);
	static void DestroyTracker();
	static bool CreateTracker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
