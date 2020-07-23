#pragma once
#include "TowerState.h"
#include "GeneralFunc.h"
#include <QObject>
#include <QPoint>
#include <QTimer>
#include <QDebug>
using namespace std;

class Enemy;
enum TowerType
{
	Arrow_Tower,
	Magic_Tower,
	Soldier_Tower,
	Cannon_Tower
};
class Tower:public QObject
{
	friend class TowerState;
protected:
    QPoint pos;
    QTimer *timer;
    Enemy *targetEnemy;
    TowerState *state;
    QString img;
public:
    Tower():targetEnemy(nullptr) { }
	Tower(QPoint p):pos(p){}
	void setPosition(QPoint p) { pos = p; }
	QPoint getPosition() { return pos; }
	virtual ~Tower() { }
    virtual void basicFun(){}
    virtual void Detect()=0;
    virtual void Attack()=0;
    //这里返回了指针的引用。主要用于对状态做出修改
    TowerState *& getState(){return state;}
    Enemy *getTargetEnemy(){return targetEnemy;}
};

