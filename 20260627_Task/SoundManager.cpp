#include "Dxlib.h"
#include "SoundManager.h"

void SoundManager::Load()
{
	spawnSE = LoadSoundMem(TEXT("Sound/spawn_speaki.wav"));
	hitSE = LoadSoundMem(TEXT("Sound/hit_speaki.wav"));
	bgm = LoadSoundMem(TEXT("Sound/speakibgm.mp3"));
}
void SoundManager::PlayHitSe()
{
	PlaySoundMem(hitSE, DX_PLAYTYPE_BACK);
}
void SoundManager::PlayBGM()
{
	ChangeVolumeSoundMem(128, bgm);   // âπó Çê›íË
	PlaySoundMem(bgm, DX_PLAYTYPE_LOOP);
}
void SoundManager::StopBGM()
{
	StopSoundMem(bgm);
}