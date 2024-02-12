#pragma once

class Enemy {
public:
	enum class State {
		kApproach,
		kFire,
		kLeave
	};

public:
	void Update();

private:
	void Approach();
	void Fire();
	void Leave();

	Phase phase_ = Phase::kApproach;
	static void (Enemy::* funcTable[])();
};