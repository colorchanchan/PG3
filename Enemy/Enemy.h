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

	State state_ = State::kApproach;
	static void (Enemy::* funcTable[])();
};