// WidgetBlueprintGeneratedClass JanusLineWidget.JanusLineWidget_C
// Size: 0x350 (Inherited: 0x2c8)
struct UJanusLineWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UAresTextBlock* AresTextBlock_432; // 0x2d0(0x08)
	struct UAresTextBlock* AresTextBlock_737; // 0x2d8(0x08)
	struct UAresWidgetSwitcher* AresWidgetSwitcher_1751; // 0x2e0(0x08)
	struct UButton* EscapeButton; // 0x2e8(0x08)
	struct UImage* Image; // 0x2f0(0x08)
	struct UImage* Image_3; // 0x2f8(0x08)
	struct UImage* Image_158; // 0x300(0x08)
	struct UButton* PauseButton; // 0x308(0x08)
	struct UImage* PlayIcon; // 0x310(0x08)
	struct UTextBlock* TextBlock_607; // 0x318(0x08)
	struct USlider* ValueSlider; // 0x320(0x08)
	float ScrubToTime; // 0x328(0x04)
	bool bIsScrubbing; // 0x32c(0x01)
	bool bHasCatchUpBegun; // 0x32d(0x01)
	char pad_32E[0x2]; // 0x32e(0x02)
	float ScrubBufferTime; // 0x330(0x04)
	float ReplayCatchUpSpeed; // 0x334(0x04)
	struct ABaseJanusController_C* NewVar_1; // 0x338(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x340(0x10)
};

