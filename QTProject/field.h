#ifndef FIELD_H
#define FIELD_H
#define ROW_NUMBER 8
#define COLUMN_NUMBER 4
#include "cell.h"
#include <QtGui>                // support QGraphicsScene

class Field
{
    Cell* GameCells[ROW_NUMBER][COLUMN_NUMBER];
public:
    bool isEmpty(unsigned char row, unsigned char column)const;
    void showField(QGraphicsScene* scene)const;
    Field();
};

#endif // FIELD_H
