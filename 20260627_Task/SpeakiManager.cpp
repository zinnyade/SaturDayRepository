#include "Dxlib.h"
#include "SpeakiManager.h"

void SpeakiManager::Init(int count)
{

    speakies.clear();
    speakies.resize(count);
}

void SpeakiManager::Update(float dt)
{
    for (auto& speaki : speakies)
    {
        speaki.Update(dt);
    }
}

void SpeakiManager::Draw()
{
    for (auto& speaki : speakies)
    {
        speaki.Draw();
    }
}

int SpeakiManager::HandleClick(int mx, int my)
{
    for (auto& speaki : speakies)
    {
        int score = speaki.OnClick(mx, my);

        if (score > 0)
        {
            return score;
        }
    }

    return 0;
}