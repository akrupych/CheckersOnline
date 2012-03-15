#ifndef CELL_H
#define CELL_H
#include "figure.h"

class Cell
{
    Figure* figure;
    bool canMoveTo;
public:
    Cell(unsigned char fcolor);
    Cell();
    bool isEmpty()const;
    Figure* CellFigure();
    void beat();
};

#endif // CELL_H
