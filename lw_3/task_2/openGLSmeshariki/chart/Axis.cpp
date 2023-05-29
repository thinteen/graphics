#include "Axis.h"
#include <iostream>

void Axis::DrawAxis(float alfa, float R, float G, float B) {

	glPushMatrix();

	glLineWidth(1);
	glColor3f(R, G, B);

	int countOfMarks = round(1 / 0.1);

	float sizeOfMark = 0.01;
	float sizeOfArrow = 0.02;

	glRotatef(alfa, 0, 0, 1);

	glBegin(GL_LINES);

	glVertex2d(-1, 0);
	glVertex2d(1, 0);

	glVertex2d(1, 0);
	glVertex2d(1 - (sizeOfArrow * 2), sizeOfArrow);
	glVertex2d(1, 0);
	glVertex2d(1 - (sizeOfArrow * 2), -sizeOfArrow);

	for (int i = -countOfMarks; i < countOfMarks; i++)
	{
		float x = i * 0.1;
		glVertex2d(x, sizeOfMark);
		glVertex2d(x, -sizeOfMark);
	}

	glEnd();

	glPopMatrix();
}