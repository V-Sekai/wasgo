/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Vector2.h"
#include "AudioEffectInstance.h"
class AudioEffectSpectrumAnalyzerInstance : public AudioEffectInstance{
public: AudioEffectSpectrumAnalyzerInstance();
enum MagnitudeMode{
MAGNITUDE_AVERAGE: 0,
};
Vector2  get_magnitude_for_frequency_range(float from_hz, float to_hz, int mode = 1);
};