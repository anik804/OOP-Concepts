/// Use of Pure Virtual Funtion
/// Now that get_area() is pure..it ensures that each derived class will override it

#include<iostream>
using namespace std;

class Area
{
private :
    double Dim1,Dim2;
public :
    void set_area( double d1,double d2 )
    {
        Dim1 = d1;
        Dim2 = d2;
    }
    void Get_dim( double &d1,double &d2 )
    {
        d1 = Dim1;
        d2 = Dim2;
    }
    virtual double get_area() = 0; //pure virtual function
};

class Rectangle : public Area
{
public :
    double get_area()
    {
        double d1,d2;
        Get_dim(d1,d2);
        return d1 * d2;
    }
};

class Triangle : public Area
{
public :
    double get_area()
    {
        double d1,d2;
        Get_dim(d1,d2);
        return 0.5 * d1 * d2;
    }
};

int main()
{
    Area *p;
    Rectangle r;
    Triangle t;

    r.set_area(3.3,4.5);
    t.set_area(2,5);

    p = &r;
    cout << "RECTANGLE Area : " << p ->get_area() << endl;

    p = &t;
    cout << "TRIANGLE Area : " << p ->get_area() << endl;

    return 0;
}
