#include "Engine/include/EngineManager.h"
#include "Engine/include/BasicScene.h"
#include "User/include/TestScene.h"


int main()
{
	EngineManager* engine_manager = new EngineManager(new TestScene());
}