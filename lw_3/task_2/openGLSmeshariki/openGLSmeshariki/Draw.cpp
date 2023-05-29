#include "Draw.h"

#include "Background.h"
#include "Groups.h"
#include "Butterflies.h"

void Draw::DrawScene() {

	glClearColor(0.27f, 0.7f, 0.83f, 1.0f);

	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();

	Background::Sun(0.7f, 0.6f);

	Background::Ground();

	Groups::SunflowerGroup();

	Groups::ChamomileGroup();

	Groups::AsteriskGrassGroup();

	Groups::AsteriskFlowerGroup();

	Groups::PricklyGrassGroup();

	Groups::GrassWithLeavesGroup();

	Groups::CloudGroup();

	Groups::ButterflyGroup();

	glPopMatrix();

	glutSwapBuffers();
}