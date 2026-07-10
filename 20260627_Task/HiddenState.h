#pragma once
#include "ISpeakiState.h"

class HiddenState : public ISpeakiState
{
public:

    void Update(Speaki& speaki, float dt) override;

    void Draw(Speaki& speaki) override;

    int OnClick(Speaki& speaki, int mx, int my) override;
};

extern HiddenState g_HiddenState;