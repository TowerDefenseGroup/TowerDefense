#include "Bullet.h"
#include "Enemy.h"
Bullet::Bullet()
{

}

void Bullet::move()
{
    double k  = (targetEnemy->getPosition().y() - pos.y()) / (targetEnemy->getPosition().x() - pos.x());
    double b = pos.y() - k*pos.x();
    int direction = targetEnemy->getPosition().x() > pos.x() ? 1:-1;
    pos = QPoint(pos.x()+direction*speed,k*pos.x()+b);
}

void Bullet::hitTarget()
{
    targetEnemy->getAttacked(this->damage);
}
