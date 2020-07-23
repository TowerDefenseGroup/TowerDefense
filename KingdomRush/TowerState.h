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
    //����д���麯��,ֻ�ܴ���һ���յĺ��渲�ǣ�����д�ú��ð�,ArrowTower��дһ��MagicTower������������
    //�����ù���������ħ���������������ˣ�д��̫�����˰�
    virtual void Upgrade(Tower& tower, ArrowStateType t){}
    virtual void Upgrade(Tower& tower, MagicStateType t){}

	virtual ~TowerState() {}

private:

};
