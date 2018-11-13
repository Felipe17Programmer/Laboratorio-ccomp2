#ifndef VECTOR_H
#define VECTOR_H

#include"Point.h"
template <typename T2>
class Vector
{
    private:
        Point<T2> start;
        Point<T2> endd;

    public:
        Vector();
        Vector(Point<T2> s,Point<T2> e);
        //constru tor copia
        Vector(Vector<T2> &o);
        void print();
        void offset(T2 ,T2);

};

#endif // VECTOR_H
