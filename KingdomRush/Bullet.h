#ifndef BULLET_H
#define BULLET_H

#include<QObject>
#include<QPoint>
#include<QString>
class Enemy;
class GameBoard;
class Tower;
class Bullet:public QObject
{
    Q_OBJECT
private:
    QPoint pos;
    QString img;
    int speed;
    int damage;
    Enemy *targetEnemy;
    QWidget *gameBoard;
public:
    Bullet();
    void setSpeed(int k){speed=k;}
    void setPosition(QPoint p){pos=p;}
    void move();
    QPoint getPosition(){return pos;}
private slots:
    void hitTarget();
};

#endif // BULLET_H
