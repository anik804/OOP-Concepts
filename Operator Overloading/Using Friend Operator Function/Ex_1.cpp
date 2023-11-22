/// Overload using a friend function

#include<iostream>
using namespace std;

class Coord
{
private :
    int x,y;
public :
    Coord() // constructor
    {
        x = 0;
        y = 0;
    }
    Coord( int i , int j )
    {
        x = i;
        y = j;
    }
    void show()
    {
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
    friend Coord operator + ( Coord o3 , Coord o4 ) //overload using a friend
    {
        Coord temp;

        temp.x = o3.x + o4.x;
        temp.y = o3.y + o4.y;

        return temp;
    }
};

int main()
{
    Coord o1(2,4),o2(4,5),o5;

    o5 = o1 + o2;

    o5.show();

    return 0;
}

