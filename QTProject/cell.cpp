#include "cell.h"

Cell::Cell()
{
    figure = NULL;
    canMoveTo = false;
}


Cell::Cell(unsigned char fcolor)
{
    figure = new Figure(fcolor);
    canMoveTo = false;
}
