#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QWidget>
#include <vector>
#include "tower.h"
#include "people.h"
#include "bullet.h"
using namespace std;
class GameBoard : public QWidget
{
    Q_OBJECT
public:
    explicit GameBoard(QWidget *parent = nullptr);

protected:
    void timerEvent(QTimerEvent *e);
    void paintEvent(QPaintEvent *event);
    void CheckAttack();
    void DoMove();

private:
    vector<Tower*> towers;
    vector<People*> monsters;
    vector<Bullet*> bullets;
signals:

};

#endif // GAMEBOARD_H
