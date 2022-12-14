// BlueprintGeneratedClass Weapon_Chroma_Base.Weapon_Chroma_Base_C
// Size: 0x261 (Inherited: 0x150)
struct UWeapon_Chroma_Base_C : UChromaSkinOverride {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x158(0x10)
	struct TArray<struct UMaterialInterface*> 1pMagazine MaterialOverrides; // 0x168(0x10)
	struct TArray<struct UMaterialInterface*> 3p Material Overrides; // 0x178(0x10)
	struct TArray<struct UMaterialInterface*> 3pMagazineMaterial Overrides; // 0x188(0x10)
	struct AProjectile_Gun_C* Projectile; // 0x198(0x08)
	struct FLinearColor KillBannerChromaColor; // 0x1a0(0x10)
	struct AEffectContainer* FXC Kill Effect; // 0x1b0(0x08)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectContainerOverrides; // 0x1b8(0x50)
	struct AEffectContainer* FXC Victim Finisher; // 0x208(0x08)
	struct AEffectContainer* FXC Killer Finisher; // 0x210(0x08)
	struct UMaterialInterface* Bullet Material; // 0x218(0x08)
	struct UMaterialInterface* BuddyMountMaterial; // 0x220(0x08)
	struct UMaterialInterface* Shell Casing Material 1P; // 0x228(0x08)
	struct UMaterialInterface* Shell Casing Material 3P; // 0x230(0x08)
	struct TArray<struct UMaterialInterface*> VFX Spawned Mesh Material Override; // 0x238(0x10)
	struct UKillBannerData* KillBannerData; // 0x248(0x08)
	struct UBaseGunSkinVOComponent_C* NewVar_1; // 0x250(0x08)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x258(0x08)
	enum class Variant_Color_Enum Variant Color; // 0x260(0x01)
};

