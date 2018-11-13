#include <iostream>
#include <stdlib.h>

#include "Point.h"
#include "Vector.h"
#include "Point array.h"

using namespace std;

/*
void Swap(Point &x,Point &y){
        Point tmp=x;
        x=y;
        y=tmp;}

void Swap2(Point *x,Point *y){
    Point tmp=*x;
    *x=*y;
    *y=tmp;
    }
*/

//constructor:metodo que se invoca para una instancia

int main()
{
    /*Point p(5,4);
    Point q(6,7);
    Point *a=&p;
    Point *b=&q;

    Point *easy=new Point;
    easy->offset(10,10);
    easy->print();*/

    //delete easy;
    /*Point q=p;
    q.offset(2,2);
    q.print();*/

    //& ,**,
    //Point *ptr=&p;
    //(*ptr).print(); esto equivale a lo de abajo
    //ptr->print();

    //implementar el modulo del vector

    Point<int> p(3,5);
    Point<int> q(3,3);
    Point<int> r(3,1);

    Point<int> arr[]={p,q,r};
    int size=sizeof(arr)/sizeof(arr[0]);
    PointArray<int> pa2(arr,size);

    cout << pa2.getSize();

    return 0;

}
