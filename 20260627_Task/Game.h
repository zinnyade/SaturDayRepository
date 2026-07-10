#pragma once
#include "IGameState.h"
#include "SoundManager.h"

class Game
{
private:
	IGameState* currentState;
	int score;
	SoundManager sound;
public:
	Game();

	//ƒQ[ƒ€XV
	void Update(float dt, int mx, int my, bool click);
	//ƒQ[ƒ€•`‰æ
	void Draw();

	int GetScore()const;

	void AddScore(int value);

	SoundManager& GetSound();

	void ResetGame();

	//ó‘Ô•ÏX
	void ChangeState(IGameState* newState);

};



