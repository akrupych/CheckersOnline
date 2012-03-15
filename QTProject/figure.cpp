#include "figure.h"

Figure::Figure(unsigned char col)
{
    if( col > 2 )
    {
        string exep = "ERROR! unexpected parameter in Figure class constructor\n";
        throw exep;
    }

    this->color = col;
    this->queen = false;
}

void Figure::setQueen()
{
    this->queen = true;
}

bool Figure::isQueen() const
{
    return this->queen;
}

unsigned char Figure::getColor() const
{
    return this->color;
}
