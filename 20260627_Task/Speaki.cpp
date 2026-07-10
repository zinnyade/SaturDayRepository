#include"Speaki.h"
#include"HiddenState.h"

Speaki::Speaki()
{

	x = 0, y = 0;
	timer = 0.0f;
	normalImag = LoadGraph(TEXT("image/speaki.png"));
	hitImag = LoadGraph(TEXT("image/speaki_hit.png"));
	state = &g_HiddenState;
}

void Speaki::Update(float dt)
{

	state->Update(*this, dt);
}
void Speaki::Draw()
{
	state->Draw(*this);
}

int Speaki::OnClick(int mx, int my)
{
	return state->OnClick(*this, mx, my);
}

void Speaki::ChangeState(ISpeakiState* newState)
{

	if (state != newState)
	{
		timer = 0.0f;
		state = newState;
	}
}

