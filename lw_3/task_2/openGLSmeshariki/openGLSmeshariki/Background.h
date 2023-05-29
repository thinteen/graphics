#pragma once

#include <glut.h>

class Background
{
public:

	void static Ground();

	void static Sun(float posX, float posY);

	void static Cloud(float posX, float posY, float scaleX, float scaleY, float angle);
};