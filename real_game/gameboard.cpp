#include "gameboard.h"
#include <QPainter>
GameBoard::GameBoard(QWidget *parent) : QWidget(parent)
{
    //startTimer(30);   //帧数控制
}

void GameBoard::paintEvent(QPaintEvent *event)
{
    QPainter p;
    p.begin(this);
    //绘图逻辑
    p.end;
}

void GameBoard::timerEvent(QTimerEvent *e)
{
    //CheckAttack()
    //DoMove()   子弹类及人物类的移动
    //UpdataLeaderBoard()   计分板等

    update();   //重绘
}

void GameBoard::CheckAttack()
{
    for(int  i = 0 ; i < towers.size() ; i++)
    {
        //迭代器也行，但没感觉出在这个项目中的显著优点
        //执行防御塔的战斗判断逻辑
    }
    //子弹类相同
}

void GameBoard::DoMove()
{
    for(int  i = 0 ; i < bullets.size() ; i++)
    {
        //绘制子弹类的移动
    }
}
