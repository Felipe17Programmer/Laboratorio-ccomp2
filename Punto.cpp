#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

class Point{
	
	private:
		double x,y;
	public:
		Point(){
			x=0;
			y=0;
		}
		Point(int xh,int yh){ 
			x=xh;
			y=yh;
		}
		Point(Point &o){  //PPara constructor copia
			x=o.x;
			y=o.y;
		}
		void offset(int nx,int ny){
			x += nx;
			y += ny;
		}
		void print(){
			cout<<"("<<x<<" ,"<<y<<")"<<endl;
		}
		
		void setX(double x){
		    this->x=x;
		}
		
		setY(double y){
		    this->y=y;
		}
};

void sawp(Point &x,Point &y){  //Se llama al constructor copia
		Point temp=x;
		x= y;
		y=temp;
}

void swap2(Point *x,Point *y){
		Point temp=*x;
		*x=*y;
		*y=temp;
}


class Vector{
	private:
		Point star, end;
	public:
		Vector(){
		}
		Vector(Point s, Point r){
			star=s;
			end=r;
		}
		Vector(Vector &v){
			star=v.star;
			end=v.end;
			
		}
		void offset(int x,int y){
			star.offset(x,y);
			end.offset(x,y);
		}
		void print(){
			star.print();
			end.print();
		}
		/*void modulo(Point p,Point q){
			cout<<sqrt((pow(2,star)+pow(2,end)),2)<<endl;
		}*/
		/*void setX(double x){
		    this->x=x;
		}
		void setY(double y){
		    this->y=y;
		}*/
		
		
	
};


class PointArray
{
    public:
        PointArray(){
		    this -> size=0;
		    this -> points= new Point[size];
		}

        PointArray(const Point pts[],const int size){
		    this -> size=size;
		    this -> points= new Point[size];
		    for(int i=0;i<size;i++){
		        points[i]=pts[i];
		    }
		}
		
        ~PointArray(){
		    delete[] points;
		}
		
        PointArray(PointArray &o){
		    this ->points= new Point[size];
		    this ->size=o.size;
		    for(int i=0;i<size;i++){
		        points[i]=o.points[i];
		    }
		
		}
		
        /*void PointArray::print(){
		    for(int i=0;i<size;i++){
		        std::cout<<points[i]<<std::endl;
		    }
		}*/
		
        int getSize(){
		    return size;
		}

    private:
        int size;
        Point *points;
};

int main(){
	
	/*Point p(5,4);
	Point q(6,7);
	*/
	//p.print();
	/*Point q=p;
	q.offset(2,2);
	q.print();
	*/
	//constructor:metodo q se crea cunaod se cerea una instancia
	/*Point *ptr=&p;
	Point *ptr2=&q;
	*/
	//ptr->print();
	
	/*p.print();
	q.print();
	cout<<"\n";
	*/
	//ptr->swap2(p,q);
	
	/*p.print();
	q.print();
	cout<<"\n";
	*/
	//ptr->swap2(&p,&q);
	
	/*p.print();
	q.print();
	*/
	/*Point *easy=new Point;
	cout<<"\n";
	easy->offset(10,10);
	easy->print();
	delete easy;
	cout<<"\n";
	Vector v;
	v.print();
	cout<<"\n";
	modulo(p,q);
	*/
	
	Point p(3,4);
    Point q(1,3);
    Point r(2,1);
    Point arr[]={p,q,r};
    int size=sizeof(arr)/sizeof(arr[0]);
    PointArray pa;
    PointArray pa2(arr,size);
    cout<<pa2.getSize();
    PointArray pa3=pa;
	cout<<"\n";
	system("pause");
	return 0;
}

//mañana control sorpresa del capitulo 3 del libro c++
