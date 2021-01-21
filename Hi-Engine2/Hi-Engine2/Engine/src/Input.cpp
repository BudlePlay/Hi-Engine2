#include "../include/Input.h"

#include "../../ProjectSetting.h"
#include <conio.h>


Input::Input()
{
}

void Input::BindAction(std::string name, EInputEvent KeyEvent, Object* object, const std::function<void()>& func)
{
	input_map_.insert(std::make_pair(name, func));
	this->object_ = object;
	this->func_ = func;
}

void Input::operator()() const
{
	if (_kbhit())
	{
		int pressed_key = _getch();
		
		func_();
	}
}
