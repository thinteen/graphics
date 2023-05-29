#include "PlantParts.h"
#include "Primitives.h"

#define _USE_MATH_DEFINES
#include <math.h>

void PlantParts::Leaf(float posX, float posY, float lenX, float lenY, float angle, float lenght, int amountOfPoints, float red, float green, float blue) {

	float x, y;
	float a = M_PI * 2 / amountOfPoints;

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glRotatef(angle, 0, 0, 1.0);

	glBegin(GL_TRIANGLE_FAN);

	glColor3f(red, green, blue);
	glVertex2f(lenX, lenY);

	for (int i = -1; i < amountOfPoints; i++)
	{
		x = sin(a * i) * lenght;
		y = cos(a * i) * lenght;
		glVertex2f(x, y);
	}

	glEnd();

	glPopMatrix();
}

void PlantParts::HalfPetalsChamomile(float posX, float posY, float angle) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glRotatef(angle, 0, 0, 1.0);

	Leaf(0.0f, 0.0f, 0.12f, 0.0f, -30, 0.05f, 40, 0.98f, 1.0f, 0.85f);

	Leaf(0.105f, 0.06f, 0.12f, 0.0f, -90, 0.05f, 40, 0.98f, 1.0f, 0.85f);

	Leaf(0.21f, 0.0f, 0.12f, 0.0f, -150, 0.05f, 40, 0.98f, 1.0f, 0.85f);

	glPopMatrix();
}

void PlantParts::Cross(float width, float posX, float posY, float angle, float red, float green, float blue) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glRotatef(angle, 0.0f, 0.0f, 1.0f);

	Primitives::Line(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.2f, width, red, green, blue);

	Primitives::Line(-0.1f, -0.1f, 90.0f, 0.0f, 0.0f, 0.0f, -0.2f, width, red, green, blue);

	glPopMatrix();
}