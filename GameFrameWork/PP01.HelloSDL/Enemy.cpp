#include "Enemy.h"

Enemy::Enemy(const LoaderParams* pParams) :
	SDLGameObject(pParams)
{
}
void Enemy::draw()
{
	SDLGameObject::draw(); // we now use SDLGameObject
}

void Enemy::clean()
{
	SDLGameObject::draw();
}
void Enemy::update()
{
}