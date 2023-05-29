#include "Chart.h"
#include <iostream>


float Chart::ChartFunction(float x) {

	return 2 * pow(x, 2) - 3 * x - 8;
}

void Chart::Draw—hart(float min, float max, int count)
{
	glPushMatrix();

	glLineWidth(1);
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_LINE_STRIP);

	float step = (max - min) / count;

	for (int i = 0; i <= count; i++)
	{
		float x = min * 0.1;
		float y = ChartFunction(min) * 0.1;
		glVertex2d(x, y);
		min += step;
	}

	glEnd();
	glPopMatrix();
}