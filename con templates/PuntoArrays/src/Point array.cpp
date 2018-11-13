#include "Point array.h"
#include "Point.h"
#include<iostream>
using namespace std;

template <typename T>
PointArray<T>::PointArray()
{
    this->size=0;
    this->points=new Point<T>[size];
}

template <typename T>
PointArray<T>::PointArray(const Point<T> pts[],const T size){
    this->size=size;
    this->points=new Point<T>[size];
    for (int i=0;i<size;i++){
        points[i]=pts[i];}}

template <typename T>
PointArray<T>::PointArray(PointArray &p){
    this->points=new Point<T>[size];
    this->size=p.size;
    for (int i=0;i<size;i++){
        points[i]=p.points[i];}
    }

template <typename T>
T PointArray<T>::getSize(){
    return size;
}
/*template <typename T>
void PointArray<T>::print(){
 for(int i=0;i<size;i++){
    p.print();
 }
}*/

template <typename T>
PointArray<T>::~PointArray()
{
    delete []points;
}


template class PointArray<int>;
