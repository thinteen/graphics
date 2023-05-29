#pragma once

#include <glut.h>

class Window
{
public:

	void static Resize(int width, int height);

	void static SetPreSettings(int argc, char** argv);
};