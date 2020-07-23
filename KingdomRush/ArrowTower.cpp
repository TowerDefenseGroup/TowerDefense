#include "ArrowTower.h"
//设定各个等级的防御塔
int ArrowTower::BasicCost = 60;
int ArrowTower::MiddleCost = 80;
int ArrowTower::AdvancedCost = 100;
int ArrowTower::JungleCost = 120;
int ArrowTower::RoerCost = 120;
ArrowTower::ArrowTower(QPoint point):Tower(point)
{
    state = new BasicArrowState();
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&ArrowTower::Attack);
    timer->start(state->interval*ONE_SECOND);
    cout << "ArrowTower Constructed with Basic State!" << endl;
}
ArrowTower::ArrowTower()
{
	state = new BasicArrowState();
	timer = new QTimer(this);
	connect(timer, &QTimer::timeout, this, &ArrowTower::Attack);
	timer->start(state->interval * ONE_SECOND);
	cout << "ArrowTower Constructed with Basic State!" << endl;
}
ArrowTower::~ArrowTower() {
    cout << "ArrowTower Destructed!" << endl;
}

void ArrowTower::Attack()
{
    std::cout << "Attack!  damage:" << getDamage() << std::endl;
}

int ArrowTower::getDamage() { return state->damage; }

int ArrowTower::getRange() { return state->range; }

void ArrowTower::Detect()
{
    std::cout << "Detect! range:" << getRange() << std::endl;
}

void ArrowTower::Interval()
{
    std::cout << "Interval:" << getInterval() << std::endl;
}

void ArrowTower::Upgrade(ArrowStateType t)
{
    state->Upgrade(*this, t);
}
