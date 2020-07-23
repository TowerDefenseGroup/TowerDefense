#pragma once
#include "TowerState.h"


class ArrowTower;
enum class ArrowStateType
{
	Default,
	Basic,
	Middle,
	Advanced,
	Jungle,
	Roer

};
class ArrowState:public TowerState
{
public:

	ArrowState()
	{
		damage = 0;
		range = 0;
		interval = 100;
	}
    void Upgrade(ArrowTower& tower, ArrowStateType t){}
	virtual ~ArrowState() {}
};
class BasicArrowState :public ArrowState
{
public:
	BasicArrowState() 
	{
		damage = 10;
		range = 100;
		interval = 1.2;
        img = ":/enemys/firedragon bitmaps ground/attack e0000.bmp";
	}
	void Upgrade(ArrowTower& tower, ArrowStateType t);
	~BasicArrowState() {}
};
class MiddleArrowState :public ArrowState
{
public:
	MiddleArrowState() 
	{
		damage = 20;
		range = 150;
		interval = 1.0;
	}
	void Upgrade(ArrowTower& tower, ArrowStateType t);
	~MiddleArrowState() {}
};
class AdvancedArrowState :public ArrowState
{
public:
	AdvancedArrowState() 
	{
		damage = 30;
		range = 200;
		interval = 0.8;
	}
	void Upgrade(ArrowTower& tower, ArrowStateType t);
	~AdvancedArrowState() {}

};

/*-----------------------------不知道写啥特效还没写,就jungle改了范围，roer改了攻击力---------------*/
class JungleArrowState :public ArrowState
{
public:
	JungleArrowState() 
	{
		damage = 30;
		range = 300;
		interval = 0.8;
	}
	void Upgrade(ArrowTower& tower, ArrowStateType t);
	~JungleArrowState() {}
};
class RoerArrowState :public ArrowState
{
public:
	RoerArrowState() 
	{
		damage = 50;
		range = 200;
		interval = 0.8;
	}
	void Upgrade(ArrowTower& tower, ArrowStateType t);
	~RoerArrowState() {}
};


