#include "DxLib.h"
#include "Game.h"
#include "Time.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    ChangeWindowMode(TRUE);
    SetGraphMode(800, 600, 32);

    if (DxLib_Init() == -1) return -1;

    SetDrawScreen(DX_SCREEN_BACK);

    Game game;

    Time time;

    static bool prevClick = false;

    while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
    {
        int mx;
        int my;

        GetMousePoint(&mx, &my);


        bool currentClick = (GetMouseInput() & MOUSE_INPUT_LEFT) != 0;

        bool click = currentClick && !prevClick;


        // =====================
        // å≈íËçXêV
        // =====================
        while (time.Update())
        {
            game.Update(Time::FixedDT, mx, my, click);
        }

        prevClick = currentClick;
        // =====================
        // ï`âÊ
        // =====================
        ClearDrawScreen();

        game.Draw();
        //DrawFormatString(10,10,GetColor(255, 255, 255),"Frame : %d",time.frameCount);

        ScreenFlip();
    }

    DxLib_End();

    return 0;
}