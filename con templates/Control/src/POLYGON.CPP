#include "Polygon.h"
#include<iostream>
using namespace std;


/*
Polygon::Polygon(int widht,int height){
    this->widht=widht;
    this->height=height;
}
void Polygon::printarea(){
    cout<<this->area()<<"\n";
}
*/


template <typename T>
Polygon<T>::Polygon(T _widht,T _height){
    widht= _widht;
    height= _height;
}

template <typename T>
Polygon<T>::Polygon(){
    widht=0;
    height=0;
}

/*void Polygon::printarea(){
    cout<<this->area()<<"\n";
}
*/
template <typename T>
void Polygon<T>::print(){
    cout << "(" << widht<< ", " << height << ")" << endl;
}


template class Polygon<int>;
template class Polygon<float>;
