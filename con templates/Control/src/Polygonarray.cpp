#include "PolygonArray.h"
#include<iostream>
using namespace std;

template <class T3>
PolygonArray<T3>::PolygonArray()
{
    tamanio=0;
    points = new Polygon<T3>[tamanio];
}

template <class T3>
PolygonArray<T3>::PolygonArray(const Polygon<int> pts[], const T3 tamanio) {
    this->tamanio = tamanio;
    this->points = new Polygon<int> [tamanio];
    for(int i = 0; i < tamanio; i++)
        points[i] = pts[i];
}

template <class T3>
PolygonArray<T3>::PolygonArray(PolygonArray &o){
    this->tamanio = o.tamanio;
    this->points = new Polygon<int> [tamanio];
    for(int i = 0; i < tamanio; i++)
        points[i] = o.points[i];
}

template <class T3>
void PolygonArray<T3>::resize(T3 newSize) {
	Polygon<int> *pts = new Polygon<int> [newSize];
	T3 minsize = (newSize > tamanio) ? tamanio : newSize;
    for(int i = 0; i < minsize; i++)
        pts[i] = points[i];
	delete[] points;
	tamanio = newSize;
	points = pts;
}

template <class T3>
void PolygonArray<T3>::print() {
	for(int i = 0; i < tamanio; i++)
		points[i].print();
}

template <class T3>
void PolygonArray<T3>::push_back(const Polygon<int> &p){
	resize(tamanio+1);
	points[tamanio-1] = p;
}
template <class T3>
void PolygonArray<T3>::insert(const T3 pos, const Polygon<int> &p) {
	resize(tamanio+1);
    for(int i = tamanio-1; i < pos; i--)
        points[i] = points[i-1];
	points[pos] = p;
}

template <class T3>
void PolygonArray<T3>::remove(const T3 pos) {

            for(int i=0;i<tamanio;i++)
                if(i==pos){
                	while(i<tamanio){
                		points[i]=points[i+1];
                		i++;
					}
					break;
				}
			tamanio=tamanio-1;

}

template <class T3>
void PolygonArray<T3>::clear() {
	resize(0);
}

template <class T3>
T3 PolygonArray<T3>::getSize(){
    return tamanio;
}

template <class T3>
PolygonArray<T3>::~PolygonArray()
{
    delete[] points;
}

template class PolygonArray<int>;
//template class PolygonArray<float>;
