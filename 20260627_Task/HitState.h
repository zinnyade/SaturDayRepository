#pragma once

#include "ISpeakiState.h"

class HitState : public ISpeakiState
{
public:

    void Update(Speaki& speaki, float dt) override;

    void Draw(Speaki& speaki) override;

    int OnClick(Speaki& speaki, int mx, int my) override;
};

extern HitState g_HitState;

