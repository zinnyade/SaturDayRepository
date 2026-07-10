#pragma once
#include "IGameState.h"
#include "SpeakiManager.h"

class PlayState : public IGameState
{
private:

    SpeakiManager speakiManager;
    int backgroundImage;
public:


    PlayState();

    void Init() override;
    void Update(Game& game, float dt, int mx, int my, bool click) override;

    void Draw(Game& game) override;
};

extern PlayState g_PlayState;