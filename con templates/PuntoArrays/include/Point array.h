#ifndef POINT ARRAY_H
#define POINT ARRAY_H

#include "Point.h"

template <typename T>
class PointArray
{
    private:
        T size;
        Point<T> *points;

    public:
        PointArray();

        PointArray(const Point<T> pts[],const T size);
         ~PointArray();
         PointArray(PointArray &p);
         T getSize();
         void print();

};

#endif // POINT ARRAY_H
