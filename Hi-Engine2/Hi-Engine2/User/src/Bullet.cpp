#include "../include/Bullet.h"

#include "../../Engine/include/WorldOutliner.h"

Bullet::Bullet(const FPosition& p, const std::string& name, const std::string& shape, const Area& Area,
               const std::string& direction, const std::string& Type, const FPosition forward): Object(p, name, shape, Area, direction, Type)
{
	this->forward_ = forward;
}

Bullet::~Bullet()
{
}

void Bullet::Work()
{
	Translate(forward_);
}

void Bullet::OnCollision(Object* other)
{
	WorldOutliner::Destroy(this);
}
