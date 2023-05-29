#include "Primitives.h"

#define _USE_MATH_DEFINES
#include <math.h>

void Primitives::Line(float posX, float posY, float angle, float x1, float y1, float x2, float y2, float width, float red, float green, float blue) {

	glLineWidth(width);

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glRotatef(angle, 0, 0, 1.0);

	glBegin(GL_LINES);

	glColor3f(red, green, blue);

	glVertex2f(x1, y1);
	glVertex2f(x2, y2);

	glEnd();

	glPopMatrix();
}

void Primitives::Circle(float scaleX, float scaleY, float posX, float posY, float lenght, int amountOfPoints, float red, float green, float blue) {

	float x, y;
	float a = M_PI * 2 / amountOfPoints;

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	glBegin(GL_TRIANGLE_FAN);

	glColor3f(red, green, blue);
	glVertex2f(0.0f, 0.0f);

	for (int i = -1; i < amountOfPoints; i++)
	{
		x = sin(a * i) * lenght;
		y = cos(a * i) * lenght;
		glVertex2f(x, y);
	}

	glEnd();

	glPopMatrix();
}