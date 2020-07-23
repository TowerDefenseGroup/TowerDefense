#include "GameBoard.h"
#include "ui_gameboard.h"

#include <QPainter>

GameBoard::GameBoard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameBoard)
{
    ui->setupUi(this);

    Tower *tower = new ArrowTower ();
    tower->setPosition(QPoint(100,100));
    towerList.push_back(tower);

    Enemy *enemy = new Enemy ();
    enemy->setPosition(QPoint(100,200));
    enemyList.push_back(enemy);

    for (auto it:towerList) {
        if(it->getTargetEnemy()==nullptr)
        {
            it->Detect();
        }
        it->Attack();
    }

}

GameBoard::~GameBoard()
{
    delete ui;
}
void GameBoard::paintEvent(QPaintEvent *e){
   QPainter p(this) ;
   QPixmap img;
   img.load(":/map/map.jpg");
   p.drawPixmap(0,0,this->width(),this->height(),img);
   cout<<"Number of Tower:"<<towerList.size()<<endl;
   for (auto it:towerList){
       if(it!=nullptr){
           cout<<"Painting Tower at"<<it->getPosition().x()<<","<<it->getPosition().y()<<endl;
           p.drawPixmap(it->getPosition().x()-10,it->getPosition().y()-10
                        ,it->getPosition().x()+10,it->getPosition().y()+10,it->getState()->img);
       }
   }

}
