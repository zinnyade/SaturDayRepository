#include "VisibleState.h"
#include "HitState.h"
#include "HiddenState.h"
#include "Speaki.h"
#include "DxLib.h"

VisibleState g_VisibleState;

void VisibleState::Update(Speaki& speaki, float dt)
{
    speaki.timer += dt;

    // 2•b•ú’u‚ÅÁ‚¦‚é

    if (speaki.timer >= 2.0f)
    {

        speaki.ChangeState(&g_HiddenState);
    }
}

void VisibleState::Draw(Speaki& speaki)
{
    DrawExtendGraph((int)speaki.x, (int)speaki.y, (int)speaki.x + 75, (int)speaki.y + 75, speaki.normalImag, TRUE);

}

int VisibleState::OnClick(Speaki& speaki, int mx, int my)
{
    if (mx >= speaki.x && mx <= speaki.x + 75 && my >= speaki.y && my <= speaki.y + 75)
    {
        speaki.ChangeState(&g_HitState);
        return 5;
    }

    return 0;
}