#include "HitState.h"
#include "HiddenState.h"
#include "Speaki.h"
#include "DxLib.h"

HitState g_HitState;

void HitState::Update(Speaki& speaki, float dt)
{

    speaki.timer += dt;

    if (speaki.timer >= 1.0f)
    {

        speaki.ChangeState(&g_HiddenState);
    }
}

void HitState::Draw(Speaki& speaki)
{

    DrawExtendGraph((int)speaki.x, (int)speaki.y, (int)speaki.x + 75, (int)speaki.y + 75, speaki.hitImag, TRUE);
}

int HitState::OnClick(Speaki&, int, int)
{
    // ˜A‘Å–h~
    return 0;
}