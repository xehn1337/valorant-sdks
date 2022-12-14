// BlueprintGeneratedClass BaseController.BaseController_C
// Size: 0xc90 (Inherited: 0xb78)
struct ABaseController_C : AShooterPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb78(0x08)
	struct UAresMovementToolingTuningComponent* MovementToolingTuningComponent; // 0xb80(0x08)
	struct URateLimiterComponent* RPCDisconnectRateLimiter; // 0xb88(0x08)
	struct URateLimiterComponent* VORateLimiter; // 0xb90(0x08)
	struct URateLimiterComponent* PingRateLimiter; // 0xb98(0x08)
	struct UGameModeControllerData* GameModeControllerData; // 0xba0(0x08)
	struct UAresAimToolingTuningComponent* AimToolingTuningComponent; // 0xba8(0x08)
	struct UPlayerNonverbalChatComponent_C* PlayerNonverbalChatComponent; // 0xbb0(0x08)
	struct UThrottledMapPingComponent_C* ThrottledMapPingComponent; // 0xbb8(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0xbc0(0x08)
	struct UAudioComponent* TeamSelectMusicAudioComponent; // 0xbc8(0x08)
	bool AutoHealing; // 0xbd0(0x01)
	char pad_BD1[0x7]; // 0xbd1(0x07)
	struct FTimerHandle AutoHealHandle; // 0xbd8(0x08)
	struct FMulticastInlineDelegate OnControllerRessed; // 0xbe0(0x10)
	float zPressTimeStamp; // 0xbf0(0x04)
	bool zPressed; // 0xbf4(0x01)
	bool lastInfoScreenVisibility; // 0xbf5(0x01)
	bool zHeld; // 0xbf6(0x01)
	bool pressedRecently; // 0xbf7(0x01)
	struct FText controllerPlayerName; // 0xbf8(0x18)
	struct FText controllerCharacterName; // 0xc10(0x18)
	bool combatReportToggledOff; // 0xc28(0x01)
	bool teammatesStillAlive; // 0xc29(0x01)
	char pad_C2A[0x2]; // 0xc2a(0x02)
	float Adjustment; // 0xc2c(0x04)
	struct ATextRenderActor* RangeSensitivityDisplay; // 0xc30(0x08)
	struct FMulticastInlineDelegate On Map Toggle; // 0xc38(0x10)
	struct FMulticastInlineDelegate PlayerCommunicated; // 0xc48(0x10)
	enum class NonVerbalCommTypesEnum CommOptionsEnum; // 0xc58(0x01)
	char pad_C59[0x7]; // 0xc59(0x07)
	struct FText CharacterName; // 0xc60(0x18)
	int32_t ShopButtonAction; // 0xc78(0x04)
	bool LocalIsScoreboardVisible; // 0xc7c(0x01)
	char pad_C7D[0x3]; // 0xc7d(0x03)
	struct FMulticastInlineDelegate OnOptionsScreenToggled; // 0xc80(0x10)
};

