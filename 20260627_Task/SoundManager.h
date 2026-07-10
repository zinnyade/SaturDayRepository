#pragma once
class SoundManager
{
private:
	int spawnSE;
	int hitSE;
	int bgm;
public:

	void Load();
	void PlayHitSe();
	void PlayBGM();
	void StopBGM();
};
