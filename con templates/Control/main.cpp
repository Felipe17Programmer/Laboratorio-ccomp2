#include <iostream>
#include "Polygon.h"
/*#include "Rectagle.h"
#include "Triangle.h"
#include "Polygonarray.h"
*/
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


    Polygon<int> p(3,7);
    Polygon<int> t(5,8);
    Polygon<int> arr[]={p,t};
    int tamanio=sizeof(arr)/sizeof(arr[0]);
    p.print();
    t.print();
    /*PolygonArray<int> pla(arr,tamanio);
    pla.print();*/

    return 0;
}

