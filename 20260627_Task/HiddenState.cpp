#include "HiddenState.h"
#include "VisibleState.h"
#include "Speaki.h"
#include "DxLib.h"

HiddenState g_HiddenState;

void HiddenState::Update(Speaki& speaki, float dt)
{

    speaki.timer += dt;

    // 2•bŒo‰ß‚ÅoŒ»
    if (speaki.timer >= 2.0f)
    {

        speaki.timer = 0.0f;

        speaki.x = (float)GetRand(700);
        speaki.y = (float)GetRand(500);

        speaki.ChangeState(&g_VisibleState);
    }
}

void HiddenState::Draw(Speaki&)
{
    // ”ñ•\¦
}

int HiddenState::OnClick(Speaki&, int, int)
{
    return 0;
}
