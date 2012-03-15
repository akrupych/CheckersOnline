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




//    scene->addLine(0,0, scene->height(), scene->width() );



//  scene->addText("Hello, world!");



//  ui->graphicsView->setRenderHint(QPainter::Antialiasing);

/*

    QPen mypen = QPen(Qt::red);

    QBrush myy = QBrush(Qt::green);

    QLineF TopLine(scene->sceneRect().topLeft(), scene->sceneRect().topRight());
    QLineF LeftLine(scene->sceneRect().topLeft(), scene->sceneRect().bottomLeft());
    QLineF RightLine(scene->sceneRect().topRight(), scene->sceneRect().bottomRight());
    QLineF BottomLine(scene->sceneRect().bottomLeft(), scene->sceneRect().bottomRight());

    scene->addLine(TopLine, mypen);
    scene->addLine(LeftLine, mypen);
    scene->addLine(RightLine, mypen);
    scene->addLine(BottomLine, mypen);
*/

}

Dialog::~Dialog()
{
    delete ui;
}
