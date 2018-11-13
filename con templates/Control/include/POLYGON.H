#ifndef POLYGON_H
#define POLYGON_H

/*
class Polygon
{
    public:
        Polygon(int widht,int height);
        virtual int area(void)=0;
        void printarea();

    protected:
        int widht,height;
};

#endif // POLYGON_H
*/

template <typename T>
class Polygon
{
    protected:
        T widht;
        T height;

    public:
        Polygon();
        Polygon(T,T);
        //virtual int area(void);
        void printarea();
        void print();

};

#endif // POLYGON_H
