#pragma once

#include "Factories/Factory.h"
#include "ImportedSoundWaveFactory.generated.h"

UCLASS()
class RUNTIMEAUDIOIMPORTER_API UImportedSoundWaveFactory : public UFactory
{
    GENERATED_BODY()
public:
    UImportedSoundWaveFactory();

    // Override factory import logic for custom SoundWave creation
};