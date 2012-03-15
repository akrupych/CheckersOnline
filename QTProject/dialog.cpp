#include "dialog.h"
#include "ui_dialog.h"
#include "field.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    scene = new QGraphicsScene();

    ui->graphicsView->setScene(scene);

    scene->setSceneRect(0, 0, 500, 500);

    Field val;

    val.showField(scene);
}

Dialog::~Dialog()
{
    delete ui;
}
