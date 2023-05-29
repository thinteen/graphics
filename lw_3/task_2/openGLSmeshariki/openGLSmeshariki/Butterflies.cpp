#include "Butterflies.h"

#include "Primitives.h"

void Butterflies::ButterflyMorpho(float posX, float posY, float scaleX, float scaleY, float angle) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	glRotatef(angle, 0.0f, 0.0f, 1.0f);

	Primitives::Circle(1.0f, 4.2f, 0.0f, 0.0f, 0.06f, 100, 0.2f, 0.16f, 0.02f);

	Primitives::Circle(1.0f, 1.0f, 0.09f, -0.11f, 0.1f, 100, 0.0f, 0.64f, 1.0f);

	Primitives::Circle(1.0f, 1.0f, -0.09f, -0.11f, 0.1f, 100, 0.0f, 0.64f, 1.0f);

	Primitives::Circle(1.0f, 1.0f, 0.16f, 0.06f, 0.17f, 100, 0.0f, 1.0f, 0.9f);

	Primitives::Circle(1.0f, 1.0f, -0.16f, 0.06f, 0.17f, 100, 0.0f, 1.0f, 0.9f);

	Primitives::Circle(1.0f, 1.0f, 0.0f, 0.2f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(0.3f, 0.3f, -0.17f, 0.0f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(0.3f, 0.3f, -0.17f, 0.1f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(0.3f, 0.3f, 0.17f, 0.0f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(0.3f, 0.3f, 0.17f, 0.1f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Line(0.0f, 0.2f, 30.0f, 0.0f, 0.1f, 0.0f, 0.0f, 1.0f, 0.08f, 0.07f, 0.05f);

	Primitives::Line(0.0f, 0.2f, -30.0f, 0.0f, 0.1f, 0.0f, 0.0f, 1.0f, 0.08f, 0.07f, 0.05f);

	glPopMatrix();
}

void Butterflies::ButterflyLemongrass(float posX, float posY, float scaleX, float scaleY, float angle) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	glRotatef(angle, 0.0f, 0.0f, 1.0f);

	Primitives::Circle(1.0f, 4.2f, 0.0f, 0.0f, 0.06f, 100, 0.2f, 0.16f, 0.02f);

	Primitives::Circle(1.0f, 1.0f, 0.09f, -0.11f, 0.1f, 100, 1.0f, 0.78f, 0.01f);

	Primitives::Circle(1.0f, 1.0f, -0.09f, -0.11f, 0.1f, 100, 1.0f, 0.78f, 0.01f);

	Primitives::Circle(1.0f, 1.0f, 0.16f, 0.06f, 0.17f, 100, 0.84f, 1.0f, 0.0f);

	Primitives::Circle(1.0f, 1.0f, -0.16f, 0.06f, 0.17f, 100, 0.84f, 1.0f, 0.0f);

	Primitives::Circle(1.0f, 1.0f, 0.0f, 0.2f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(0.3f, 0.3f, -0.17f, 0.06f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(0.3f, 0.3f, 0.17f, 0.06f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Line(0.0f, 0.2f, 30.0f, 0.0f, 0.1f, 0.0f, 0.0f, 1.0f, 0.08f, 0.07f, 0.05f);

	Primitives::Line(0.0f, 0.2f, -30.0f, 0.0f, 0.1f, 0.0f, 0.0f, 1.0f, 0.08f, 0.07f, 0.05f);

	glPopMatrix();
}

void Butterflies::RedButterfly(float posX, float posY, float scaleX, float scaleY, float angle) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	glRotatef(angle, 0.0f, 0.0f, 1.0f);

	Primitives::Circle(1.0f, 4.2f, 0.0f, 0.0f, 0.06f, 100, 0.2f, 0.16f, 0.02f);

	Primitives::Circle(1.0f, 1.0f, 0.09f, -0.11f, 0.1f, 100, 0.98f, 0.59f, 0.43f);

	Primitives::Circle(1.0f, 1.0f, -0.09f, -0.11f, 0.1f, 100, 0.98f, 0.59f, 0.43f);

	Primitives::Circle(1.0f, 1.0f, 0.16f, 0.06f, 0.17f, 100, 1.0f, 0.28f, 0.0f);

	Primitives::Circle(1.0f, 1.0f, -0.16f, 0.06f, 0.17f, 100, 1.0f, 0.28f, 0.0f);

	Primitives::Circle(1.0f, 1.0f, 0.0f, 0.2f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(1.6f, 0.4f, -0.17f, 0.06f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(0.4f, 1.6f, -0.17f, 0.06f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(1.6f, 0.4f, 0.17f, 0.06f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Circle(0.4f, 1.6f, 0.17f, 0.06f, 0.06f, 100, 0.08f, 0.07f, 0.05f);

	Primitives::Line(0.0f, 0.2f, 30.0f, 0.0f, 0.1f, 0.0f, 0.0f, 1.0f, 0.08f, 0.07f, 0.05f);

	Primitives::Line(0.0f, 0.2f, -30.0f, 0.0f, 0.1f, 0.0f, 0.0f, 1.0f, 0.08f, 0.07f, 0.05f);

	glPopMatrix();
}