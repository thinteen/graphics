#pragma once

#include <glut.h>

class Primitives
{
public:

	void static Line(float posX, float posY, float angle, float x1, float y1, float x2, float y2, float width, float red, float green, float blue);

	void static Circle(float scaleX, float scaleY, float posX, float posY, float lenght, int amountOfPoints, float red, float green, float blue);
};