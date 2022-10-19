// WidgetBlueprintGeneratedClass PlayerWidgetBase.PlayerWidgetBase_C
// Size: 0x46b (Inherited: 0x2c8)
struct UPlayerWidgetBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct USizeBox* Ability1; // 0x2d0(0x08)
	struct UProgressBar* Ability1_ChargeProgress; // 0x2d8(0x08)
	struct USizeBox* Ability2; // 0x2e0(0x08)
	struct UProgressBar* Ability2_ChargeProgress; // 0x2e8(0x08)
	struct USizeBox* Ability3; // 0x2f0(0x08)
	struct UProgressBar* Ability3_ChargeProgress; // 0x2f8(0x08)
	struct USizeBox* Ability4; // 0x300(0x08)
	struct UProgressBar* Ability4_ChargeProgress; // 0x308(0x08)
	struct USizeBox* Armor; // 0x310(0x08)
	struct USizeBox* Armor1; // 0x318(0x08)
	struct USizeBox* Armor2; // 0x320(0x08)
	struct UImage* BigARmor; // 0x328(0x08)
	struct UImage* Image_139; // 0x330(0x08)
	struct UImage* Image_901; // 0x338(0x08)
	struct UImage* Image_1018; // 0x340(0x08)
	struct UImage* Image_1127; // 0x348(0x08)
	struct UImage* Image_1145; // 0x350(0x08)
	struct UTextBlock* PlayerHealth; // 0x358(0x08)
	struct UTextBlock* PlayerName; // 0x360(0x08)
	struct UImage* PortraitIcon; // 0x368(0x08)
	struct USizeBox* Primary; // 0x370(0x08)
	struct UImage* PrimaryWeaponIcon; // 0x378(0x08)
	struct USizeBox* secondary; // 0x380(0x08)
	struct UImage* SecondaryWeaponIcon; // 0x388(0x08)
	struct UImage* SmallArmor; // 0x390(0x08)
	struct AShooterPlayerState* PlayerState; // 0x398(0x08)
	struct AAresItem* NewVar_1; // 0x3a0(0x08)
	struct FSlateColor AbilityUnchargedColor; // 0x3a8(0x28)
	struct FSlateColor AbilityChargedColor; // 0x3d0(0x28)
	bool Handle Valid; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FMulticastInlineDelegate ExtendedInfoPress; // 0x400(0x10)
	struct UCharacterUIData* UIData; // 0x410(0x08)
	struct FMulticastInlineDelegate ExtendedInfoRelease; // 0x418(0x10)
	struct FMulticastInlineDelegate Update; // 0x428(0x10)
	float TickTimePassed; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FSlateColor AbilityHighlightColor; // 0x440(0x28)
	bool bExtendedInfoHeld; // 0x468(0x01)
	bool bPlayerLoadoutAlwaysVisible; // 0x469(0x01)
	bool bShowLoadoutDueToGamePhase; // 0x46a(0x01)
};

