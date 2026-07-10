#include "ResultState.h"
#include "TitleState.h"
#include "Game.h"
#include "DxLib.h"

ResultState g_ResultState;

ResultState::ResultState() {}

void ResultState::Init()
{
    resultImage = LoadGraph(TEXT("image/resultimage.png"));
}

void ResultState::Update(Game& game, float, int, int, bool click)
{
    if (CheckHitKey(KEY_INPUT_SPACE) != 0)
    {
        game.ChangeState(&g_TitleState);
    }
}

void ResultState::Draw(Game& game)
{
    DrawExtendGraph(0, 0, 800, 600, resultImage, TRUE);
}