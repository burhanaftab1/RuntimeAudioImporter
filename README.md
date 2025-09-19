# RuntimeAudioImporter

Advanced Unreal Engine 5.6 plugin for runtime audio import and conversion.

## Features

- Import WAV, MP3, FLAC, OGG, RAW audio at runtime (Windows, Linux, Mac, Android, iOS)
- Async import with Blueprint node support
- MetaSound asset creation from imported audio
- Editor integration: drag & drop, context menu, asset factory
- Platform-specific codec stubs for optimized decoding
- MIT Licensed, extensible source

## Getting Started

1. Copy the `RuntimeAudioImporter` plugin folder into `Plugins` in your UE5 project.
2. Regenerate project files and build.
3. Use Blueprint nodes or C++ API to import audio files at runtime.

## Example Blueprint Nodes

- `ImportAudioFileAsync`
- `CreateMetaSoundFromWave`

## Extending

- Add new codecs to `Source/RuntimeAudioImporter/Private/Codecs`
- Expand editor asset factories
- Implement MetaSound creation logic

## License

MIT
