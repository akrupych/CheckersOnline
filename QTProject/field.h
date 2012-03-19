#ifndef FIELD_H
#define FIELD_H
#include "cell.h"
#include <QtGui>                // support QGraphicsScene

class Field
{
    Cell* GameCells[ROW_NUMBER][COLUMN_NUMBER];
    Cell* getTopRight(const Cell* arg)const;
    Cell* getTopLeft(const Cell* arg)const;
    Cell* getBottomRight(const Cell* arg)const;
    Cell* getBottomLeft(const Cell* arg)const;
    bool canBeatTR(const Cell* arg);
    bool canBeatTL(const Cell* arg);
    bool canBeatBR(const Cell* arg);
    bool canBeatBL(const Cell* arg);
    bool qcanBeatTR(const Cell* arg);
    bool qcanBeatTL(const Cell* arg);
    bool qcanBeatBR(const Cell* arg);
    bool qcanBeatBL(const Cell* arg);

public:
    Field();
    bool isEmpty(unsigned char row, unsigned char column)const;
    void showField(QGraphicsScene* scene)const;
    bool canBeat(const Cell* arg);
    bool qcanBeat(const Cell* arg);
    bool canMove(const Cell* arg);
    bool qcanMove(const Cell* arg);
};

#endif // FIELD_H
