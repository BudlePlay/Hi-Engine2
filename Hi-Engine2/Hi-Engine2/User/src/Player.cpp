#include "../include/Player.h"


#include "../../Engine/include/IORaspberryPi.h"
#include "../../Engine/include/Unit.h"

#include <conio.h>

Player::Player(const FPosition& p, const std::string& name, const std::string& shape, const Area& Area,
               const std::string& direction, const std::string& Type): Object(p, name, shape, Area, direction, Type)
{
	input_ = new Input();
	
	is_input_ = false;

	prev_position_ = p;

	
	input_->BindAction(EInputEvent::IE_Pressed, this, [=]() {
		this->attack();
	});

	attack_cnt_ = 0;
}

void Player::Work()
{
	(*input_)();
	int data = IORaspberryPi::get_joy();
	int pressed_key;

}

void Player::OnCollision(Object* other)
{
	position = prev_position_;
}

void Player::control(PLAYER_INPUT player_input_)
{
	prev_position_ = position;
	
	if (player_input_ == UP)
	{
		Translate({ 0,-1 });
	}
	else if (player_input_ == DOWN)
	{
		Translate({ 0,1 });
	}
	else if (player_input_ == LEFT)
	{
		Translate({ -1,0 });
	}
	else if (player_input_ == RIGHT)
	{
		Translate({ 1,0 });
	}
}

void Player::move()
{
	
}

void Player::jump(int i)
{
	return;
}

void Player::attack()
{
	attack_cnt_++;

	control(RIGHT);
}
