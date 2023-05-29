#include "Background.h"
#include "Primitives.h"

void Background::Ground() {

	glPushMatrix();

	glTranslatef(-0.8f, -2.7f, 0);

	Primitives::Circle(1.0f, 1.0f, 0.0f, 0.0f, 3.0f, 100, 0.03f, 0.6f, 0.0f);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.57f, -2.0f, 0);

	Primitives::Circle(1.0f, 1.0f, 0.0f, 0.0f, 2.2f, 100, 0.08f, 0.74f, 0.03f);

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.6f, -3.0f, 0);

	Primitives::Circle(1.0f, 1.0f, 0.0f, 0.0f, 3.0f, 100, 0.43f, 0.9f, 0.39f);

	glPopMatrix();
}

void Background::Sun(float posX, float posY) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	Primitives::Circle(1.0f, 1.0f, 0.0f, 0.0f, 0.1f, 50, 1.0f, 0.98f, 0.0f);

	glPopMatrix();
}

void Background::Cloud(float posX, float posY, float scaleX, float scaleY, float angle) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	glRotatef(angle, 0.0f, 0.0f, 1.0f);

	Primitives::Circle(1.0f, 1.0f, -0.07f, 0.1f, 0.1f, 50, 1.0f, 1.0f, 1.0f);

	Primitives::Circle(1.1f, 1.1f, 0.07f, 0.1f, 0.1f, 50, 1.0f, 1.0f, 1.0f);

	Primitives::Circle(1.1f, 1.1f, 0.06f, -0.1f, 0.1f, 50, 1.0f, 1.0f, 1.0f);

	Primitives::Circle(1.4f, 1.4f, -0.1f, -0.04f, 0.1f, 50, 1.0f, 1.0f, 1.0f);

	Primitives::Circle(1.3f, 1.1f, 0.2f, 0.0f, 0.1f, 50, 1.0f, 1.0f, 1.0f);

	glPopMatrix();
}