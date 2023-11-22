/// apply negation

#include<iostream>
using namespace std;

class Coord
{
private :
    int x;
    int y;
public :
    Coord()
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
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    Coord operator - ()
    {
        x = -x;
        y = -y;
    }
};

int main()
{
    Coord o1(2,3);
    Coord o2(3,4);

    o2.show();

    -o2;
    o2.show();

    return 0;
}
