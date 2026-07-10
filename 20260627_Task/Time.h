#pragma once
class Time
{
private:

    int prevTime;

    float accumulator;

public:

    static constexpr float FixedDT = 1.0f / 60.0f;

    int frameCount;

public:

    Time();

    bool Update();

    float GetAlpha() const;
};
