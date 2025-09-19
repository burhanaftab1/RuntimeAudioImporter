#pragma once

#include "UObject/ObjectMacros.h"
#include "MetaSoundAssetFactory.generated.h"

UCLASS()
class RUNTIMEAUDIOIMPORTER_API UMetaSoundAssetFactory : public UObject
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "MetaSound|Import")
    UObject* CreateMetaSoundFromWave(UObject* WorldContext, USoundWave* SourceWave);
};