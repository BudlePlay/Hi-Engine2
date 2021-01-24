#pragma once
#include <time.h>
#include <random>

#include "../../Engine/include/Object.h"

class EnemySpawner : public Object
{
public:
	EnemySpawner(const FPosition& p, const std::string& name, const std::string& shape, const Area& Area,
		const std::string& Type);

	~EnemySpawner() override;
	void Work() override;
	void OnCollision(Object* other) override;

private:
	int spawntime_ = 5000;
	int uptimer_ = 0;
	int enemy_y_ = 1;

};

