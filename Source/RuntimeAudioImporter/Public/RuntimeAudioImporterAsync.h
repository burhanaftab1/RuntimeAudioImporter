#pragma once

#include "Kismet/BlueprintAsyncActionBase.h"
#include "RuntimeAudioImporterAsync.generated.h"

UCLASS()
class RUNTIMEAUDIOIMPORTER_API URuntimeAudioImporterAsync : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "Audio|Import")
    static URuntimeAudioImporterAsync* ImportAudioFileAsync(const FString& FilePath);

    // Delegate signatures for completion, error, progress, etc.

protected:
    virtual void Activate() override;

private:
    FString PendingFilePath;
};