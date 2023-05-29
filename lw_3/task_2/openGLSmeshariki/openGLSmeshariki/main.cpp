#include <iostream>
#include <glut.h>
#define _USE_MATH_DEFINES
#include <math.h>

#include "Window.h"
#include "Draw.h"

using namespace std; 

int main(int argc, char** argv) {

	Window::SetPreSettings(argc, argv);

	glutDisplayFunc(&Draw::DrawScene);

	glutReshapeFunc(&Window::Resize);

	glutMainLoop();
}