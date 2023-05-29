#include "Flowers.h"

#include "PlantParts.h"
#include "Primitives.h"

void Flowers::Sunflower(float posX, float posY, float scaleX, float scaleY) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	Primitives::Line(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.5f, 2.5, 0.06f, 0.52f, 0.055f);

	Primitives::Circle(1.0f, 1.0f, 0.0f, 0.0f, 0.1f, 50, 0.9f, 0.84f, 0.19f);
	Primitives::Circle(1.0f, 1.0f, 0.0f, 0.0f, 0.07f, 50, 0.15f, 0.15f, 0.15f);

	PlantParts::Leaf(-0.105f, -0.25f, 0.12f, 0.0f, -30, 0.05f, 40, 0.06f, 0.52f, 0.055f);

	glPopMatrix();
}

void Flowers::Chamomile(float posX, float posY, float scaleX, float scaleY) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	Primitives::Line(0.0f, 0.0f, 0.0f, 0.105f, 0.0f, 0.105f, -0.4f, 3, 0.047f, 0.54f, 0.039f);

	PlantParts::HalfPetalsChamomile(0.0f, 0.0f, 0.0f);

	PlantParts::HalfPetalsChamomile(0.21f, -0.123f, 180.0f);

	Primitives::Circle(1.0f, 1.0f, 0.107f, -0.056f, 0.07f, 50, 0.67f, 0.78f, 0.0f);

	glPopMatrix();
}

void Flowers::AsteriskFlower(float posX, float posY, float scaleX, float scaleY) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	Primitives::Line(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.35f, 2.0f, 0.06f, 0.52f, 0.055f);

	PlantParts::Cross(2.0f, 0.0f, 0.0f, 0.0f, 0.9f, 0.15f, 0.15f);

	PlantParts::Cross(2.0f, -0.096f, -0.077f, 75.0f, 0.98f, 0.46f, 0.46f);

	PlantParts::Cross(2.0f, -0.069f, -0.026f, 45.0f, 1.0f, 0.17f, 0.0f);

	PlantParts::Cross(2.0f, -0.087f, -0.05f, 60.0f, 0.96f, 0.47f, 0.01f);

	PlantParts::Cross(2.0f, -0.05f, -0.015f, 30.0f, 0.90f, 0.74f, 0.17f);

	PlantParts::Cross(2.0f, -0.024f, -0.007f, 15.0f, 1.0f, 0.33f, 0.0f);

	glPopMatrix();
}