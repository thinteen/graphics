#include "Animation.h"
#include "Background.h"

void Animation::SunRotation() {

	float alfa = 0;

	alfa -= 2;

	glPushMatrix();

	//glTranslatef(0.0f, -1.0f, 0.0f);

	glRotatef(alfa, 0.0f, 0.0f, 1.0f);

	glTranslatef(0.7f, 0.0f, 0.0f);

	Background::Sun(0.7f, 0.6f);

	glPopMatrix();
}