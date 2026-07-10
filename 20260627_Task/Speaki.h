#pragma once
#include "Dxlib.h"
class ISpeakiState;

class Speaki
{

public:

    float x;
    float y;

    float timer;

    int normalImag;
    int hitImag;
    ISpeakiState* state;

public:

    Speaki();

    void Update(float dt);

    void Draw();

    int OnClick(int mx, int my);

    void ChangeState(ISpeakiState* newState);
};
