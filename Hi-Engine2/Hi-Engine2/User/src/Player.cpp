#include "../include/Player.h"


#include "../../Engine/include/IORaspberryPi.h"
#include "../../Engine/include/Unit.h"

#include <conio.h>

Player::Player(const FPosition& p, const std::string& name, const std::string& shape, const Area& Area,
               const std::string& direction, const std::string& Type): Object(p, name, shape, Area, direction, Type)
{
	is_input_ = false;

	prev_position_ = p;

}

void Player::Work()
{
	int data = IORaspberryPi::get_joy();
	int pressed_key;


	if (_kbhit())
	{
		pressed_key = _getch();
		PLAYER_INPUT pi ={};
		if (pressed_key == 'w')
		{
			pi = UP;
		}

		if (pressed_key == 's' )
		{
			pi = DOWN;
		}
		
		if (pressed_key == 'a' )
		{
			pi = LEFT;
		}


		if (pressed_key == 'd')
		{
			pi = RIGHT;
		}
		control(pi);
	}
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
