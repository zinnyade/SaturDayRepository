#include "Time.h"
#include "Dxlib.h"

Time::Time()
{
	prevTime = GetNowCount();
	accumulator = 0.0f;
	frameCount = 0;
}

bool Time::Update()
{
	int nowTime = GetNowCount();

	float frameTime = (nowTime - prevTime) / 1000.0f;

	prevTime = nowTime;

	// –\‘––hŽ~
	if (frameTime > 0.25f)
	{
		frameTime = 0.25f;
	}

	accumulator += frameTime;

	if (accumulator >= FixedDT)
	{
		accumulator -= FixedDT;

		frameCount++;

		return true;
	}

	return false;
}

float Time::GetAlpha() const
{
	return accumulator / FixedDT;
}