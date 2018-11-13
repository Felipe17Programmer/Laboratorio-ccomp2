#include "Rectagle.h"
#include "Polygon.h"
#include<iostream>
using namespace std;

template <typename T>
Rectagle<T>::Rectagle(T widht,T height,char  *_color):Polygon<int>(widht,height)
{
    color = _color;
}

template <typename T>
T Rectagle<T>::area(){
    return widht*height;
}

template <typename T>
void Rectagle<T>::nombrar(){
    cout<<"Su color es: "<<color<<endl;
}


/*
Rectagle::Rectagle(int widht,int height,char  *_color):Polygon(widht,height)
{
    color = _color;
}
int Rectagle::area(){
    return widht*height;
}

void Rectagle::nombrar(){
    cout<<"Su color es: "<<color<<endl;
}

*/

template class Rectagle<int>;
template class Rectagle<float>;
