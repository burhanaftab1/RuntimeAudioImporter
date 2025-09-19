using UnrealBuildTool;

public class RuntimeAudioImporter : ModuleRules
{
    public RuntimeAudioImporter(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "InputCore",
            "AudioMixer", "MetaSound", "SoundUtilities"
        });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        // Add third-party codec libraries here if needed
    }
}