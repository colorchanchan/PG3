#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>

void (Enemy::* Enemy::funcTable[])() = {
	&Enemy::kApproach,
	&Enemy::kFire,
	&Enemy::kLeave,
};

void Enemy::Update() {
	(this->*funcTable[static_cast<size_t>(phase_)])();
}

void Enemy::Approach() {
	printf("接近\n");
	Sleep(3 * 1000);
	phase_ = Phase::SHOOT;
}

void Enemy::Fire() {
	printf("射撃\n");
	Sleep(3 * 1000);
	phase_ = Phase::LEAVE;
}

void Enemy::Leave() {
	printf("離脱\n");
}