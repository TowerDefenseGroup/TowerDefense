#include "widget.h"
#include "ui_widget.h"

GameBoard::GameBoard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

GameBoard::~GameBoard()
{
    delete ui;
}

