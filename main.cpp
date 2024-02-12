#include <stdio.h>

#include <Windows.h>
#include <time.h>
#include "Enemy.h"
#include <memory>

int main() {

	std::unique_ptr<Enemy> enemy_;
	enemy_ = std::make_unique<Enemy>();

	int i = 0;

	while (i < 3) {
		enemy_->Update();
		i++;
	}

	return 0;
}