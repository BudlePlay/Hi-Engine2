#include "../include/WorldOutliner.h"

#include "../include/Object.h"

void WorldOutliner::AddObject(Object* o)
{
	o->BeginPlay();
	objects.push_back(o);
}

Object* WorldOutliner::FindObject(std::string name)
{
	for (auto& o : objects)
	{
		if (name.compare(o->GetName()) == 0)
		{
			return o;
		}
	}

	std::cout << "ERROR : Not found  " << name << std::endl;
	return nullptr;
}

void WorldOutliner::AllDestroy()
{
	auto iter = objects.begin();

	for (iter; iter != objects.end();)
	{
		iter = objects.erase(iter);
	}
}

void WorldOutliner::Destroy(Object* object)
{
	auto iter = objects.begin();

	for (iter; iter != objects.end();)
	{
		if (*iter == object)
		{
			iter = objects.erase(iter);
			return;
		}
		else
		{
			iter++;
		}
	}
	delete object;
}

std::vector<Object*> WorldOutliner::GetObjects()
{
	return objects;
}

std::vector<Object*> WorldOutliner::objects;