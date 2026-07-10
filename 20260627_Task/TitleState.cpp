#include "TitleState.h"
#include "Game.h"
#include "PlayState.h"
#include "Dxlib.h"

TitleState g_TitleState;

TitleState::TitleState() {}

void TitleState::Init()
{
	titleImg = LoadGraph(TEXT("Image/titleimage.png"));
}

void TitleState::Update(Game& game, float, int, int, bool click)
{
	if (CheckHitKey(KEY_INPUT_SPACE) != 0)
	{
		game.ResetGame();
		game.ChangeState(&g_PlayState);
	}
}

void TitleState::Draw(Game&)
{
	//DrawGraph(0, 0, titleImg, TRUE);
	DrawExtendGraph(0, 0, 800, 600, titleImg, TRUE);
}

