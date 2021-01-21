#include "../include/Input.h"

#include <conio.h>


Input::Input()
{
}

void Input::BindAction(EInputEvent KeyEvent, Object* object, const std::function<void()>& func)
{
	this->object_ = object;
	this->func_ = func;
}

bool Input::operator()() const
{
	if (_kbhit())
	{
		int pressed_key = _getch();

		func_();
		return true;
	}

	return true;
}
