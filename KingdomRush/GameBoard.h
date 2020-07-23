#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include "Bullet.h"
#include "ArrowTower.h"
#include "ArrowState.h"
#include "Enemy.h"
#include <QWidget>
#include <QtDebug>
#include <vector>
QT_BEGIN_NAMESPACE
namespace Ui { class GameBoard; }
QT_END_NAMESPACE
using namespace std;
class GameBoard : public QWidget
{
    Q_OBJECT

public:
    GameBoard(QWidget *parent = nullptr);

    ~GameBoard();

private:
    Ui::GameBoard *ui;
    vector<Enemy*> enemyList;
    vector<Tower*> towerList;
    vector<Bullet*> bulletList;
    int healthBar;
    int playerGold;
    void paintEvent(QPaintEvent *e);
};
#endif // GAMEBOARD_H
