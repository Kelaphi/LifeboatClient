#pragma once

#include <vector>
#include "../DrawUtils.h"
#include "../GuiUtils.h"
#include "../Module/ModuleManager.h"

class ClickGui
{
private:
	static void renderCategory(Category category);
	static void getModuleListByCategory(Category category, std::vector<IModule*>* modList);
public:
	static void init();
	static void render();
	static void onMouseClickUpdate(bool isDown);
};