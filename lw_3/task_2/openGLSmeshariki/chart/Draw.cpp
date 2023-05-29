#include "Draw.h"
#include "Axis.h"
#include "Chart.h"

void Draw::DrawScene() {

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();

	glLoadIdentity();

	Axis::DrawAxis(0, 1, 0, 0);

	Axis::DrawAxis(90, 0, 1, 0);

	Chart::Draw—hart(-2, 3, 40);

	glPopMatrix();

	glutSwapBuffers();
}