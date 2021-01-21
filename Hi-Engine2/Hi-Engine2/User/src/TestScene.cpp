#include "../include/TestScene.h"


#include "../include/Player.h"
#include "../include/Wall.h"

TestScene::TestScene(): SceneManager()
{
	X_SIZE = 32;		//21 ÀÓ°è°ª
	Y_SIZE = 16;		//16 
	mapPointer = new Map(X_SIZE, Y_SIZE);
}

void TestScene::Create()
{
	Map_Make();

	worldOutliner.AddObject(new Player({ 1,1 }, "Player", "aa", { 1,1 },
		"", "Actor"));
}

void TestScene::Render(float dt)
{
	
}

void TestScene::Resize(int x, int y)
{
}

void TestScene::Input(float dt)
{
}

void TestScene::Pause()
{
}

TestScene::~TestScene()
{
}

void TestScene::Map_Make()
{
	worldOutliner.AddObject(new Wall(FPosition({0, 0}), "Wall_Top", "¡á", Area({X_SIZE, 1}), "Wall"));
	worldOutliner.AddObject(new Wall(FPosition({ 0, float(Y_SIZE) - 1 }), "Wall_Bottom", "¡á", Area({ X_SIZE, 1 }), "Wall"));
	
	worldOutliner.AddObject(new Wall(FPosition({0, 0}), "Wall_Left", "¡á", Area({1, Y_SIZE}), "Wall"));
	worldOutliner.AddObject(new Wall(FPosition({float(X_SIZE) - 1, 0}), "Wall_Right", "¡á", Area({1, Y_SIZE}), "Wall"));	
	
}

std::string TestScene::getW()
{
	return worldOutliner.FindObject("Player")->GetShape();
}
