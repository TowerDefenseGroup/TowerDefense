#pragma once
#include "Tower.h"
#include "ArrowState.h"
#include <iostream>
using namespace std; 

class ArrowTower :public Tower
{
	friend class ArrowState;
public:
    static int BasicCost;
    static int MiddleCost;
    static int AdvancedCost;
    static int JungleCost;
    static int RoerCost;
    ArrowTower(QPoint point);
    ArrowTower();
    virtual int getDamage();
    virtual int getRange();
    virtual double getInterval() { return state->interval; }
    void Detect();
    void Interval();
    void Upgrade(ArrowStateType t );
    virtual ~ArrowTower();
public slots:
    void Attack();
};




