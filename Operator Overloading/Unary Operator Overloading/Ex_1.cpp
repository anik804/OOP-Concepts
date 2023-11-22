/// The following program overloads the pre increment
/// & pre decrement.

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
    Coord operator ++ ()
    {
        x++;
        y++;
    }
    Coord operator -- ()
    {
        x--;
        y--;
    }
};

int main()
{
    Coord o1(2,3);
    Coord o2(3,4);



    cout << "before change o1" << endl;
    o1.show();

    ++o1;//pre increment
    cout << "after change o1" << endl;
    o1.show();






    cout << "before change o2" << endl;
    o2.show();

    --o2;//pre decrement
    cout << "after change o2" << endl;
    o2.show();

    return 0;
}
