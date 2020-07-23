#include "ArrowTower.h"
#include <iostream> //For Debug
using namespace std;
void BasicArrowState::Upgrade(ArrowTower& tower, ArrowStateType t)
{
    delete tower.getState();
    tower.getState() = new MiddleArrowState();
	cout << "the arrowtower upgraded from basic to middle"<<endl;
}

void MiddleArrowState::Upgrade(ArrowTower& tower, ArrowStateType t)
{
    delete tower.getState();
    tower.getState() = new AdvancedArrowState();
	cout << "the arrowtower upgraded from middle to advanced" << endl;
}

void AdvancedArrowState::Upgrade(ArrowTower& tower, ArrowStateType t)
{

	if (t == ArrowStateType::Jungle)
	{
        delete tower.getState();
        tower.getState() = new JungleArrowState();
		cout << "the arrowtower upgraded from advanced to jungle" << endl;
	}
	else if (t == ArrowStateType::Roer)
	{
        delete tower.getState();
        tower.getState()= new RoerArrowState();
		cout << "the arrowtower upgraded from advanced to roer" << endl;
	}


}

void JungleArrowState::Upgrade(ArrowTower& tower, ArrowStateType t)
{
}

void RoerArrowState::Upgrade(ArrowTower& tower, ArrowStateType t)
{
}
