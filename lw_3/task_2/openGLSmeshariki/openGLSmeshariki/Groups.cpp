#include "Groups.h"

#include "Flowers.h"
#include "Grass.h"
#include "Background.h"
#include "Butterflies.h"

void Groups::GrassWithLeavesGroup() {

	Grass::GrassWithLeaves(-0.4f, 0.0f, 0.4f, 0.4f);

	Grass::GrassWithLeaves(0.7f, -0.2f, 0.3f, 0.3f);

	Grass::GrassWithLeaves(0.6f, -0.5f, 0.3f, 0.3f);

	Grass::GrassWithLeaves(0.4f, 0.2f, 0.2f, 0.2f);

	Grass::GrassWithLeaves(-0.8f, 0.25f, 0.1f, 0.1f);
}

void Groups::ChamomileGroup() {

	Flowers::Chamomile(-0.3f, 0.0f, 0.3f, 0.3f);

	Flowers::Chamomile(-0.4f, -0.3f, 0.4f, 0.4f);

	Flowers::Chamomile(-0.6f, -0.4f, 0.45f, 0.45f);

	Flowers::Chamomile(-0.2f, -0.5f, 0.5f, 0.5f);

	Flowers::Chamomile(0.4f, -0.2f, 0.3f, 0.3f);

	Flowers::Chamomile(0.6f, 0.12f, 0.2f, 0.2f);

	Flowers::Chamomile(0.3f, 0.06f, 0.2f, 0.2f);

	Flowers::Chamomile(0.9f, 0.08f, 0.2f, 0.2f);

	Flowers::Chamomile(0.6f, -0.1f, 0.2f, 0.2f);

	Flowers::Chamomile(-0.6f, 0.1f, 0.1f, 0.1f);

	Flowers::Chamomile(-0.8f, 0.15f, 0.1f, 0.1f);

	Flowers::Chamomile(-0.4f, 0.2f, 0.1f, 0.1f);
}

void Groups::SunflowerGroup() {

	Flowers::Sunflower(-0.6f, 0.3f, 0.1f, 0.1f);

	Flowers::Sunflower(-0.3f, 0.2f, 0.17f, 0.17f);

	Flowers::Sunflower(0.5f, 0.1f, 0.3f, 0.3f);

	Flowers::Sunflower(-0.6f, -0.1f, 0.6f, 0.6f);

	Flowers::Sunflower(0.4f, -0.5f, 0.9f, 0.9f);
}

void Groups::AsteriskFlowerGroup() {

	Flowers::AsteriskFlower(0.0f, 0.0f, 0.8f, 0.8f);

	Flowers::AsteriskFlower(-0.9f, 0.12f, 0.9f, 0.9f);

	Flowers::AsteriskFlower(0.2f, -0.3f, 0.7f, 0.7f);

	Flowers::AsteriskFlower(0.8f, -0.45f, 0.8f, 0.8f);

	Flowers::AsteriskFlower(0.8f, 0.15f, 0.4f, 0.4f);

	Flowers::AsteriskFlower(0.1f, 0.07f, 0.3f, 0.3f);

	Flowers::AsteriskFlower(0.22f, 0.24f, 0.3f, 0.3f);

	Flowers::AsteriskFlower(-0.5f, 0.24f, 0.3f, 0.3f);

	Flowers::AsteriskFlower(-0.7f, 0.35f, 0.2f, 0.2f);

	Flowers::AsteriskFlower(-0.9f, 0.28f, 0.2f, 0.2f);
}

void Groups::AsteriskGrassGroup() {

	Grass::AsteriskGrass(-0.9f, -0.7f, 0.7f, 0.7f);

	Grass::AsteriskGrass(-0.7f, -0.4f, 0.4f, 0.4f);

	Grass::AsteriskGrass(-0.2f, -0.7f, 0.5f, 0.5f);

	Grass::AsteriskGrass(0.2f, -0.1f, 0.37f, 0.37f);

	Grass::AsteriskGrass(0.3f, 0.15f, 0.2f, 0.2f);

	Grass::AsteriskGrass(0.9f, -0.05f, 0.3f, 0.3f);

	Grass::AsteriskGrass(-0.9f, 0.1f, 0.18f, 0.18f);

	Grass::AsteriskGrass(-0.7f, 0.13f, 0.18f, 0.18f);

	Grass::AsteriskGrass(-0.4f, 0.14f, 0.18f, 0.18f);
}

void Groups::PricklyGrassGroup() {

	Grass::PricklyGrass(-0.9f, -0.2f, 0.4f, 0.4f);

	Grass::PricklyGrass(-0.1f, -0.3f, 0.3f, 0.3f);

	Grass::PricklyGrass(0.1f, -0.6f, 0.45f, 0.45f);

	Grass::PricklyGrass(0.7f, -0.8f, 0.35f, 0.35f);

	Grass::PricklyGrass(0.7f, 0.01f, 0.25f, 0.25f);

	Grass::PricklyGrass(0.9f, -0.3f, 0.4f, 0.4f);

	Grass::PricklyGrass(-0.9f, 0.15f, 0.2f, 0.2f);

	Grass::PricklyGrass(-0.6f, 0.17f, 0.2f, 0.2f);
}

void Groups::CloudGroup() {

	Background::Cloud(-0.5f, 0.7f, 0.6f, 0.6f, 0.0f);

	Background::Cloud(0.5f, 0.8f, 0.4f, 0.4f, 15.0f);
}

void Groups::ButterflyGroup() {

	Butterflies::ButterflyLemongrass(-0.35f, -0.2f, 0.15f, 0.15f, -30.0f);

	Butterflies::ButterflyMorpho(0.2f, 0.1f, 0.15f, 0.15f, 30.0f);

	Butterflies::RedButterfly(-0.7f, 0.1f, 0.15f, 0.15f, -60.0f);
}