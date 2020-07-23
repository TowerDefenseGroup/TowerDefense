#ifndef ENEMY_H
#define ENEMY_H

#include<vector>
#include<QPoint>
#include<Bullet.h>
using namespace std;
class Tower;
class Enemy
{
private:
    vector<Tower*> attackerTowerList;
    QPoint pos;
    int healthBar;
    QString img;
public:
    Enemy();
    void move();
    QPoint getPosition(){return pos;}
    QString getImg(){return img;}
    int getHealthBar(){return healthBar;}
    void setPosition(QPoint p){pos=p;}
    void getAttacked(int damage){
        healthBar -= damage;
    }
};

#endif // ENEMY_H
