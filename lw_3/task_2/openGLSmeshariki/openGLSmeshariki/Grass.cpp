#include "Grass.h"

#include "PlantParts.h"
#include "Primitives.h"

void Grass::GrassWithLeaves(float posX, float posY, float scaleX, float scaleY) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	Primitives::Line(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -0.5f, 1.5, 0.06f, 0.52f, 0.055f);

	PlantParts::Leaf(-0.105f, -0.25f, 0.12f, 0.0f, -30, 0.05f, 40, 0.06f, 0.52f, 0.055f);

	PlantParts::Leaf(0.105f, -0.25f, 0.12f, 0.0f, -150, 0.05f, 40, 0.06f, 0.52f, 0.055f);

	PlantParts::Leaf(-0.08f, -0.1f, 0.09f, 0.0f, -30, 0.035f, 40, 0.06f, 0.52f, 0.055f);

	PlantParts::Leaf(0.08f, -0.1f, 0.09f, 0.0f, -150, 0.035f, 40, 0.06f, 0.52f, 0.055f);

	PlantParts::Leaf(0.0f, 0.035f, 0.09f, 0.0f, -90, 0.02f, 40, 0.06f, 0.52f, 0.055f);

	glPopMatrix();
}

void Grass::AsteriskGrass(float posX, float posY, float scaleX, float scaleY) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	PlantParts::Cross(1.0f, 0.0f, 0.0f, 0.0f, 0.72f, 0.94f, 0.49f);

	PlantParts::Cross(1.0f, -0.096f, -0.077f, 75.0f, 0.33f, 0.58f, 0.06f);

	PlantParts::Cross(1.0f, -0.069f, -0.026f, 45.0f, 0.06f, 0.7f, 0.13f);

	PlantParts::Cross(1.0f, -0.087f, -0.05f, 60.0f, 0.02f, 0.45f, 0.06f);

	PlantParts::Cross(1.0f, -0.05f, -0.015f, 30.0f, 0.44f, 0.86f, 0.0f);

	PlantParts::Cross(1.0f, -0.024f, -0.007f, 15.0f, 0.24f, 0.52f, 0.25f);

	glPopMatrix();
}

void Grass::PricklyGrass(float posX, float posY, float scaleX, float scaleY) {

	glPushMatrix();

	glTranslatef(posX, posY, 0);

	glScalef(scaleX, scaleY, 0);

	for (float angle = 0.0f; angle <= 180.0f; angle += 30.0f)
	{
		PlantParts::Leaf(0.0f, 0.0f, 0.2f, 0.0f, angle, 0.05f, 40, 0.12f, 0.68f, 0.06f);
	}

	glPopMatrix();
}