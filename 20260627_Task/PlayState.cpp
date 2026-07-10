#include "PlayState.h"
#include "ResultState.h"
#include "Game.h"
#include "DxLib.h"

PlayState g_PlayState;

PlayState::PlayState() {}

void PlayState::Init()
{
	speakiManager.Init(4);
	backgroundImage = LoadGraph(TEXT("image/backgroundimage.jpg"));
}

bool bgmStarted = false;

void PlayState::Update(Game& game, float dt, int mx, int my, bool click)
{
	speakiManager.Update(dt);

	if (!bgmStarted)
	{
		game.GetSound().PlayBGM();
		bgmStarted = true;
	}

	speakiManager.Update(dt);
	if (click)
	{
		game.AddScore(speakiManager.HandleClick(mx, my));
		game.GetSound().PlayHitSe();
	}

	if (game.GetScore() >= 200)
	{
		game.ChangeState(&g_ResultState);
	}

}

void PlayState::Draw(Game& game)
{
	DrawExtendGraph(0, 0, 800 , 600, backgroundImage, TRUE);
	speakiManager.Draw();

	DrawFormatString(10, 10, GetColor(255, 255, 255),
		TEXT("Score : %d"), game.GetScore());

	DrawFormatString(10, 10, GetColor(255, 255, 255), TEXT("Score : %d"), game.GetScore());

}