#pragma once

#include <cmath>

enum OscillatorWaveform
{
	OscillatorWaveformSine,
	numWaveforms
};

class Oscillator
{
public:
	void SetSampleRate(double sr) { dt = 1.0 / sr; }

	double Next(double frequency, OscillatorWaveform waveform);

private:
	double twoPi = 4 * acos(0.0);

	double dt = 0.0;

	double phase = 0.0;
};

