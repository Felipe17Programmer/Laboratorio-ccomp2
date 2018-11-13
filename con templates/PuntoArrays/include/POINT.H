#ifndef POINT_H
#define POINT_H

#include <math.h>

//protoripos a la clase
template <typename T1>
class Point
{
    private:
        T1 x;
        T1 y;

    public:
        Point();
        Point(T1 xh ,T1 yh);
        //constru tor copia
        Point(Point<T1> &o);
        void print();
        void offset(T1 nx,T1 ny);
        void setX(T1 x);
        void setY(T1 y);

};


#endif // POINT_H
