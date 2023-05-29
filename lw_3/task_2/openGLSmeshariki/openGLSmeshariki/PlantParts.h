#pragma once

#include <glut.h>

class PlantParts
{
public:

	void static Leaf(float posX, float posY, float lenX, float lenY, float angle, float lenght, int amountOfPoints, float red, float green, float blue);

	void static Cross(float width, float posX, float posY, float angle, float red, float green, float blue);

	void static HalfPetalsChamomile(float posX, float posY, float angle);
};