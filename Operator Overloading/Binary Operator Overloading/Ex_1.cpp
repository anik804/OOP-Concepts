/// The following program overloads the "+" operator relative to the "coord" class.
/// This class is used to maintain X,Y co-ordinates.

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
    Coord operator + ( Coord o4 )
    {
        Coord temp;

        temp.x = x + o4.x;
        temp.y = y + o4.y;

        return temp;
    }
};

int main()
{
    Coord o1(2,4),o2(4,5),o3;

    o3 = o1 + o2;

    o3.show();

    return 0;
}
