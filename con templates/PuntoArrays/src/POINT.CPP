#include "Point.h"
#include<iostream>
using namespace std;
//implementacione

//constructor
template <typename T1>
Point<T1>::Point(T1 xh,T1 yh)
{
    x=xh;
    y=yh;
    }

template <typename T1>
Point<T1>::Point(){
    x=0;
    y=0;
}
//definir el construvctor copia es decir lo que hara
template <typename T1>
Point<T1>::Point(Point<T1> &o){
    x=o.x;
    y=o.y;}

template <typename T1>
void Point<T1>::offset(T1 nx,T1 ny){
    x+=nx;
    y+=ny;}

template <typename T1>
void Point<T1>::setX(T1 x){
    this->x=x;}

template <typename T1>
void Point<T1>::setY(T1 y){
    this->y=y;}

template <typename T1>
void Point<T1>::print(){

    cout<<"("<<x<<","<<y<<")"<<endl;}

template class Point<int>;
template class Point<float>;
template class Point<double>;
