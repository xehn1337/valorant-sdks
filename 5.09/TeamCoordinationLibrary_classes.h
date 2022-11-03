// BlueprintGeneratedClass TeamCoordinationLibrary.TeamCoordinationLibrary_C
// Size: 0x30 (Inherited: 0x30)
struct UTeamCoordinationLibrary_C : UBlueprintFunctionLibrary {

	struct TArray<struct AActor*> GetActorsWithinDistance(struct AActor* Source, struct TArray<struct AActor*>& Targets, float CutoffDistance, struct UObject* __WorldContext); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetActorsWithinDistance // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetAverageNearestTargetActorsPathfinding(struct TArray<struct AActor*>& Sources, struct TArray<struct AActor*>& Targets, float DistanceFromNearestCutoff, struct UObject* __WorldContext, struct TArray<int32_t>& ArrayIndices); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetAverageNearestTargetActorsPathfinding // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetNearestTargetActorsPathfinding(struct AActor* Source, struct TArray<struct AActor*>& Targets, float DistanceFromNearestCutoff, struct UObject* __WorldContext, struct TArray<int32_t>& ArrayIndices); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetNearestTargetActorsPathfinding // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetNearestTargetActorPathfinding(struct AActor* Source, struct TArray<struct AActor*>& Targets, struct UObject* __WorldContext, int32_t& ArrayIndex); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetNearestTargetActorPathfinding // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetNearestTargetActorSimpleDistance(struct AActor* Source, struct TArray<struct AActor*>& Targets, struct UObject* __WorldContext, int32_t& ArrayIndex); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetNearestTargetActorSimpleDistance // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetAverageNearestTargetActorSimpleDistance(struct TArray<struct AActor*>& Sources, struct TArray<struct AActor*>& Targets, struct UObject* __WorldContext, int32_t& ArrayIndex); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetAverageNearestTargetActorSimpleDistance // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetBotPlayerStates(struct TArray<struct AShooterPlayerState*>& PlayerStates, bool AliveOnly, struct UObject* __WorldContext, struct TArray<struct AShooterPlayerState*>& BotPlayerStates); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetBotPlayerStates // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetHumanPlayerStates(struct TArray<struct AShooterPlayerState*>& PlayerStates, bool AliveOnly, struct UObject* __WorldContext, struct TArray<struct AShooterPlayerState*>& HumanPlayerStates); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetHumanPlayerStates // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetBotCharacters(struct TArray<struct AShooterPlayerState*>& PlayerStates, bool AliveOnly, struct UObject* __WorldContext, struct TArray<struct AShooterCharacter*>& BotCharacters); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetBotCharacters // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetHumanCharacters(struct TArray<struct AShooterPlayerState*>& PlayerStates, bool AliveOnly, struct UObject* __WorldContext, struct TArray<struct AShooterCharacter*>& HumanCharacters); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetHumanCharacters // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetShooterCharacters(struct TArray<struct AShooterPlayerState*>& PlayerStates, bool AliveOnly, struct UObject* __WorldContext, struct TArray<struct AShooterCharacter*>& AlliedCharacters); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetShooterCharacters // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetEnemyPlayerStates(struct UBaseTeamComponent* TeamComponent, struct UObject* __WorldContext, struct TArray<struct AShooterPlayerState*>& ShooterPlayerStates); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetEnemyPlayerStates // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
	void GetAlliedPlayerStates(struct UBaseTeamComponent* TeamComponent, struct UObject* __WorldContext, struct TArray<struct AShooterPlayerState*>& ShooterPlayerStates); // Function TeamCoordinationLibrary.TeamCoordinationLibrary_C.GetAlliedPlayerStates // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x32f73d0
};

