#include "Window.h"

void Window::Resize(int width, int height)
{
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	if (width > height)
	{
		if (height == 0)
		{
			return;
		}

		float ratio = ((float)width / height);
		gluOrtho2D(-ratio, ratio, -1, 1);
	}
	else
	{
		if (width == 0)
		{
			return;
		}

		float ratio = ((float)height / width);
		gluOrtho2D(-1, 1, -ratio, ratio);
	}

	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();
}

void Window::SetPreSettings(int argc, char** argv) {

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE);

	glutInitWindowSize(900, 900);

	glutInitWindowPosition(400, 50);

	glutCreateWindow("Chart");
}