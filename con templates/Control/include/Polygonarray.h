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
        PolygonArray(const Polygon<int> pts[],const T3 tamanio);
        ~PolygonArray();

        void print();
        T3 getSize();
		void clear();
		void push_back(const Polygon<int> &p);
		void insert(const T3, const Polygon<int> &p);
		void remove(const T3);


    private:
        T3 tamanio;
        Polygon<T3> *points;
        void resize(T3);
        //int resize1(int newSize);
};

#endif // POLYGONARRAY_H
