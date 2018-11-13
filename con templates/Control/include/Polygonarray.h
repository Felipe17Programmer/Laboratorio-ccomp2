#ifndef POLYGONARRAY_H
#define POLYGONARRAY_H
#include "Polygon.h"
#include<iostream>
using namespace std;

template <class T3>
class PolygonArray{
    public:
        PolygonArray();
        PolygonArray(PolygonArray &o);
        PolygonArray(const Polygon<T3> pts[],const int tamanio);
        ~PolygonArray();

        void print();
        int getSize();
		void clear();
		void push_back(const Polygon<T3> &p);
		void insert(const int, const Polygon<T3> &p);
		void remove(const int);


    private:
        int tamanio;
        Polygon<T3> *points;
        void resize(int);

};

#endif // POLYGONARRAY_H
