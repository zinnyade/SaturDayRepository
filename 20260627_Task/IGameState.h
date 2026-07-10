#pragma once
#include "Dxlib.h"
class Game;

class IGameState
{
public:
	virtual void Init() = 0;
	virtual void Update(Game& game, float dt, int mx, int my, bool click) = 0;
	virtual void Draw(Game& game) = 0;
	virtual ~IGameState() {}
};