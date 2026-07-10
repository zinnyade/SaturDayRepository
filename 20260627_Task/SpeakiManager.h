#pragma once
#include <vector>
#include "Speaki.h"

class SpeakiManager
{
private:

    std::vector<Speaki> speakies;

public:

    void Init(int count);

    void Update(float dt);

    void Draw();

    int HandleClick(int mx, int my);
};
