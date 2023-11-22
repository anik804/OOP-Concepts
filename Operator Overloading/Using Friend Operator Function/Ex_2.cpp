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
    friend Coord operator + ( int i , Coord o4 ) //overload using a friend
    {
        Coord temp;

        temp.x = i + o4.x;
        temp.y = i + o4.y;

        return temp;
    }
    friend Coord operator + ( Coord o4 , int i ) //overload using a friend
    {
        Coord temp;

        temp.x = o4.x + i;
        temp.y = o4.y + i;

        return temp;
    }
};

int main()
{
    Coord o1(2,4),o2(4,5),o5;


    /// integer + object
    o5 = 10 + o2;
    o5.show();


    /// object + integer
    o5 = o2 + 5;
    o5.show();

    return 0;
}
