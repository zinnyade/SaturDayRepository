#pragma once

class Speaki;

class ISpeakiState
{
public:

    virtual void Update(Speaki& Speaki, float dt) = 0;

    virtual void Draw(Speaki& Speaki) = 0;

    virtual int OnClick(Speaki& Speaki, int mx, int my) = 0;
};