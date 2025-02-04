#pragma once
#include "DxLib.h"

class Collision
{
public:
	Collision();
	virtual ~Collision();

	void Init();

	// 描画
	void DrawMain(unsigned int color, bool isFill);
	void DrawAttack(unsigned int color, bool isFill);

	void UpdateCol(VECTOR pos,VECTOR upPos, VECTOR attackRange, float colRadius, float attackColRadius);	// 当たり判定の更新

	bool IsAttackCollision(const Collision& col);		// 当たり判定
	bool IsBodyCollision(const Collision& col);		// 体の当たり判定

private:
	float m_attackColRadius;
	float m_colRadius;

	VECTOR m_pos;
	VECTOR m_vertexPos;
	VECTOR m_attackRange;
};