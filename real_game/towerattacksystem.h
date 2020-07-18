#ifndef TOWERATTACKSYSTEM_H
#define TOWERATTACKSYSTEM_H

#include <QWidget>

class TowerAttackSystem : public QWidget
{
    Q_OBJECT
public:
    explicit TowerAttackSystem(QWidget *parent = nullptr);
    //防御塔的攻击系统和子弹的攻击系统可能要结合一下，我之前没考虑
signals:

};

#endif // TOWERATTACKSYSTEM_H
