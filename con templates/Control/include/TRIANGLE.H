#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
#include<iostream>
using namespace std;

template <typename T2>
class Triangle:public Polygon<int>
{
    private:
        char* color;
    public:
        Triangle( T2 widht,T2 height,char* _color);
        T2 area();
        void nombrar();


};

#endif // TRIANGLE_H


/*
class Triangle:public Polygon
{
    public:
        Triangle(int a,int b,char* _color);
        int area();
        void nombrar();

    protected:
        char* color;
};

#endif // TRIANGLE_H

*/
