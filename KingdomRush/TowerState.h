#include <QString>

#pragma once
class Tower;
enum class ArrowStateType;
enum class MagicStateType;
enum class StateType
{
	Default,
	Basic,
	Middle,
    Advanced
};
class TowerState
{
public:
	int damage;
	int range;
    double interval;
    QString img;
public:
	TowerState() :damage(0), range(0), interval(100) {}
    //不能写成虚函数,只能创建一个空的后面覆盖，这里写得好烂啊,ArrowTower重写一个MagicTower的升级函数，
    //就能让弓箭塔访问魔法塔的升级函数了，写得太垃圾了啊
    virtual void Upgrade(Tower& tower, ArrowStateType t){}
    virtual void Upgrade(Tower& tower, MagicStateType t){}

	virtual ~TowerState() {}

private:

};
