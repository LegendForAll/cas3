#pragma once
#include "GameState.h"

class StateTwo :public CGameState
{
	BossBat *boss;
	UI *uigame;
	RECT r1;
	RECT r2;
	RECT r3;

public:

	StateTwo();
	~StateTwo();

	virtual void InitState(LPDIRECT3DDEVICE9 dv, LPDIRECT3DSURFACE9 bb);
	virtual void LoadState(int AS);
	virtual void UpdateState(DWORD dt);
	virtual void RenderState(LPDIRECT3DDEVICE9 d3ddv, LPDIRECT3DSURFACE9 bb, LPD3DXSPRITE spriteHandler);
};