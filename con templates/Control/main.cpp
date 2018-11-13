#include <iostream>
#include "Polygon.h"
#include "Rectagle.h"
#include "Triangle.h"
#include "Polygonarray.h"

using namespace std;

int main()
{
    /*
    Polygon *pPolygon;
    Polygon *pPolygon2;

    Rectagle r1(5,4,"red");
    Triangle t1(6,10,"yellow");
    pPolygon = &r1;
    pPolygon->area();
    pPolygon->printarea();
    r1.nombrar();

    pPolygon2 = &t1;
    pPolygon2->area();
    pPolygon2->printarea();
    t1.nombrar();
    */


    Polygon<float> p(3.3,7);
    Polygon<float> t(5,8.2);
    Polygon<float> r(4.7,1);
    Polygon<float> arr[]={p,t};
    int tamanio=sizeof(arr)/sizeof(arr[0]);
    cout<<"Imprimiendo puntos aparte"<<endl;
    p.print();
    t.print();

    cout<<"\n";
    PolygonArray<float> pla(arr,tamanio);
    pla.print();
    cout<<"\n";
    cout<<"Tamanio del arreglo: "<<pla.getSize()<<endl;
    cout<<"\n";
    pla.push_back(r);
    pla.print();
    cout<<"\n";
    pla.remove(1);
    pla.print();

    return 0;
}

