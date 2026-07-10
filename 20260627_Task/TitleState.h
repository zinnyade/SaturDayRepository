#pragma once
#include "IGameState.h"

class TitleState : public IGameState
{
private:
    int titleImg = -1;
public:
    TitleState();
    void Init() override;
    void Update(Game& game, float, int, int, bool click) override;

    void Draw(Game& game) override;
};

extern TitleState g_TitleState;
