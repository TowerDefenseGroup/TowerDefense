#ifndef TOWER_H
#define TOWER_H

#include <QWidget>
#include "towerattacksystem.h"
//基本逻辑，升级方法，建造（包括按键的功能及布局），拆除，基础逻辑我需要给你的接口，
//士兵塔我需要给你的接口，与熊雷的gameLeaderBoard的接口
//写按键及布局的时候注意用相对位置而非直接坐标
//防御塔塔基的判定及选择
//……
//需要接口和其他类交互时可以先写出来作为测试，然后把逻辑告诉我们来完善

class Tower : public QWidget
{
    Q_OBJECT
public:
    explicit Tower(QWidget *parent = nullptr);
    TowerAttackSystem attack;
signals:

};

#endif // TOWER_H
