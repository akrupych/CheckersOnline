#include "field.h"
#define FIELD_WIDTH 8
#define FIELD_HEIGHT 8

void Field::showField(QGraphicsScene *scene)const
{
    scene->clear();

    QPen Boundarypen = QPen( Qt::black, 8 );

    scene->addRect( 0, 0, scene->width(), scene->height(), Boundarypen );

    QPen fieldpen = QPen(Qt::black);
    QBrush cellbrush = QBrush(Qt::black);
    QBrush redbrush = QBrush(Qt::red);
    QBrush bluebrush = QBrush(Qt::blue);

    int wigth = scene->width()/8;
    int height = scene->height()/8;

    for( int i = 0; i < 8; i++ )
    {
        for( int j = 0; j < 8; j++ )
        {
            if( ( i%2 != 0 && j%2 != 0 ) || ( i%2 == 0 && j%2 == 0 ) )
            {
                int x = i*wigth;
                int y = j*height;

                scene->addRect( x, y, wigth, height, fieldpen, cellbrush );

                if( GameCells[i][j/2] != NULL )
                {
                    if( GameCells[i][j/2]->getColor() == COLOR_RED )
                    {
                        scene->addEllipse(x, y, wigth, height, fieldpen, redbrush );
                    }

                    if( GameCells[i][j/2]->getColor() == COLOR_BLUE )
                    {
                        scene->addEllipse(x, y, wigth, height, fieldpen, bluebrush );
                    }
                }
            }
        }
    }

}

Field::Field()
{
    for( int i = 0; i < ROW_NUMBER; i++ )
    {
        for( int j = 0; j < COLUMN_NUMBER; j++ )
        {
            GameCells[i][j] = NULL;

            if( i < 3 )
            {
                GameCells[i][j] = new Figure(COLOR_RED);
            }

            if( i > 4 )
            {
                GameCells[i][j] = new Figure(COLOR_BLUE);
            }
        }
    }
}

bool Field::isEmpty(unsigned char row, unsigned char column) const
{
    if(row >= ROW_NUMBER || column >= COLUMN_NUMBER)
    {
        string exep = "ERROR! unexpected argument in isEmpty function (class Field)\n";
        throw exep;
    }

    if( GameCells[row][column] == NULL )
    {
        return false;
    }

    return true;
}

