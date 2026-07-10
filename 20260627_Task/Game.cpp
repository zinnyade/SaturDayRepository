#include "Game.h"
#include "TitleState.h"

Game::Game()
{
	currentState = &g_TitleState;
	g_TitleState.Init();
	sound.Load();
}

void Game::Update(float dt, int mx, int my, bool click)
{
	currentState->Update(*this, dt, mx, my, click);
}

void Game::Draw()
{
	currentState->Draw(*this);

}

int Game::GetScore() const
{
	return score;
}

void Game::AddScore(int value)
{
	score += value;
}

SoundManager& Game::GetSound()
{
	return sound;
}

void Game::ResetGame()
{
	score = 0;
}

void Game::ChangeState(IGameState* newState)
{
	currentState = newState;
	currentState->Init();
}