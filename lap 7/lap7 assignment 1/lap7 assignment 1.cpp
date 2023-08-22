#include<iostream>
#include<string.h>
using namespace std;


class Shape
{
protected:
    int dim1, dim2;
public:
    Shape ()
    {
        dim1=dim2=0;
    }
    Shape(int m)
    {
        dim1=dim2=m;
    }
    Shape(int m, int n)
    {
        dim1 = m;
        dim2 = n;
    }
    void SetDim1 (int x)
    {
        dim1 = x;
    }
    void SetDim2 (int x)
    {
        dim2 = x;
    }
    int GetDim1()
    {
        return dim1;
    }
    int GetDim2()
    {
        return dim2;
    }
    virtual float Area() = 0;

};

class Circle:public Shape
{
public:
    Circle(){};
    Circle(int l):Shape(l){};
    float Area()
    {
        return (3.14 * dim1 * dim2);
    }
};
class Regtangle:public Shape
{
    public:
    Regtangle(){};
    Regtangle(int l, int w):Shape(l,w){};
    float Area()
    {
        return (1.0 * dim1 * dim2);
    }
};
class Triangle:public Shape
{
    public:
    Triangle(){};
    Triangle(int b, int h):Shape(b,h){};
    float Area()
    {
        return (0.5 * dim1 * dim2);
    }
};

class Square:public Regtangle
{
    public:
    Square(){};
    Square(int b):Regtangle(b,b){};

};

class GeoShape
{
    Shape *ps1;
    Shape *ps2;
    Shape *ps3;
    Shape *ps4;

public:
    GeoShape(Shape *p1, Shape *p2, Shape *p3, Shape *p4)
    {
        ps1 = p1;
        ps2 = p2;
        ps3 = p3;
        ps4 = p4;
    }
    float TotalArea()
    {
        float Total;
        Total = ps1 -> Area()+ ps2 -> Area() + ps3 -> Area() + ps4 -> Area();
        return Total;
    }
};

int main()
{

    Circle C(7);
    Regtangle R(20,5);
    Triangle T(10,20);
    Square S(6);

    GeoShape G(&C,&R,&T,&S);

    cout<<"Total Areas is : "<<G.TotalArea()<<endl;

    return 0;
}
