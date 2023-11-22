/// The following version of the preceding program overloads the +, -
/// and the = operators relative to the coord class.

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
    Coord operator - ( Coord o4 )
    {
        Coord temp;

        temp.x = x - o4.x;
        temp.y = y - o4.y;

        return temp;
    }
    Coord operator = ( Coord o4 )
    {
        x = o4.x;
        y = o4.y;
    }
};

int main()
{
    Coord o1(5,9),o2(2,4),o3;

    o3 = o1 + o2;
    o3.show();

    o3 = o1 - o2;
    o3.show();

    o3 = o1;
    o3.show();

    return 0;
}
