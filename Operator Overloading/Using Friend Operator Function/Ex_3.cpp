/// Using Friend Function to ADD flexibility

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

    ///prefix
    friend Coord operator ++ ( Coord &o4 ) //overload using a friend
    {
        o4.x++;
        o4.y++;

        return o4;
    }

    ///postfix
    friend Coord operator ++ ( Coord &o4 , int notused ) //overload using a friend
    {
        o4.x++;
        o4.y++;

        return o4;
    }
};

int main()
{
    Coord o1(2,4),o2(4,5),o5;
    ++o1;
    o1.show();

    return 0;
}

