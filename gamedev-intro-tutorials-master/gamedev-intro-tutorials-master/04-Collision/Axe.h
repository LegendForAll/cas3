#pragma once
#include "GameObject.h"
#include "define.h"
#include "CandleSmall.h"
#include "Zombie.h"
#include "Panther.h"

class Axe : public CGameObject
{
	float curX;
	float curY;

	bool isLeft = false;
	bool isStand = true;
	bool isAction = false;
	bool isGround = false;

	int ani = WP_AXE_STAND;

public:

	virtual void LoadResource();
	virtual void GetBoundingBox(float &l, float &t, float &r, float &b);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT> *coObjects, vector<LPGAMEOBJECT> *coObjectStatic, vector<LPGAMEOBJECT> *coObjectEnemy);
	virtual void Render(float xViewport, float yViewport);

	void AxeFly() { this->vx = this->nx*AXE_SPEED_X; this->vy = -AXE_SPEED_Y; }
	void SetCurrentPosSimon(float _xSimon, float _ySimon, int _nx, bool _isStand = true);
	void UpdateLimit(float xViewport, float yViewport);
	void SetState(int state);

	float GetcurX() { return this->curX; }
	float GetcurY() { return this->curY; }
	float GetX() { return this->x; }
};