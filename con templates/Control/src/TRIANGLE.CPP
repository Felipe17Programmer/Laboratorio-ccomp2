#include "Triangle.h"
#include<iostream>
using namespace std;

template <typename T2>
Triangle<T2>::Triangle(T2 widht,T2 height,char  *_color):Polygon<int>(widht,height)
{
    color = _color;
}

template <typename T2>
T2 Triangle<T2>::area(){
    return (widht*height)/2;
}

template <typename T2>
void Triangle<T2>::nombrar(){
    cout<<"Su color es: "<<color<<endl;
}


/*
Triangle::Triangle(int widht,int height,char  *_color):Polygon(widht,height)
{
    color = _color;
}
int Triangle::area(){
    return (widht*height)/2;
}
void Triangle::nombrar(){
    cout<<"Su color es: "<<color<<endl;
}

*/

template class Triangle<int>;
template class Triangle<float>;
