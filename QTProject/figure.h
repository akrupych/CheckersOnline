#ifndef FIGURE_H
#define FIGURE_H
#define COLOR_RED 1
#define COLOR_BLUE 2
#include <string>

using namespace std;

class Figure
{
    unsigned char color;
    bool queen;
public:
    Figure(unsigned char col);
    void setQueen();
    bool isQueen()const;
    unsigned char getColor()const;
};

#endif // FIGURE_H
