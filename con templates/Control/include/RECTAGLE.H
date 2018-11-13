#ifndef RECTAGLE_H
#define RECTAGLE_H
#include "Polygon.h"
#include<iostream>
using namespace std;

template <typename T>
class Rectagle: public Polygon<int>
{
    private:
        char* color;
    public:
        Rectagle(T widht,T height,char* _color);
        T area();
        void nombrar();


};

#endif // RECTAGLE_H


/*
class Rectagle:public Polygon
{
    public:
        Rectagle(int widht,int height,char* _color);
        int area();
        void nombrar();

    protected:
        char* color;
};

#endif // RECTAGLE_H
*/
