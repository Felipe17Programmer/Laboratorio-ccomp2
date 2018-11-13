#include "Vector.h"
#include<iostream>
#include<math.h>
using namespace std;

template <typename T2>
Vector<T2>::Vector(){}

template <typename T2>
Vector<T2>::Vector(Point<T2> s,Point<T2> e){
    start=s;
    endd=e;}

template <typename T2>
Vector<T2>::Vector(Vector<T2> &v){
    start=v.start;
    endd=v.endd;}

template <typename T2>
void Vector<T2>::offset(T2 x,T2 y){
    start.offset(x,y);
    endd.offset(x,y);}

template class Vector<int>;
template class Vector<float>;
