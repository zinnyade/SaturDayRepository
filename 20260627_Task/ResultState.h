#pragma once

#include "IGameState.h"

class ResultState : public IGameState
{
private:
    int resultImage = -1;
public:

    ResultState();
    void Init() override;

    void Update(Game& game, float, int, int, bool click) override;

    void Draw(Game& game) override;
};

extern ResultState g_ResultState;

