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

bool Cell::isEmpty() const
{
    if( this->figure == NULL )
    {
        return true;
    }
    return false;
}

Figure* Cell::CellFigure()
{
    return figure;
}

void Cell::beat()
{
    delete figure;
    figure = NULL;
}

void Cell::setCanMove(bool arg)
{
    canMoveTo = arg;
}

