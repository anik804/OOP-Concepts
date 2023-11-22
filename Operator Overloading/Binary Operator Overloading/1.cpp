/// Operator Overloading ==>
/// operator ==> ++,--,+,-
/// operand ==> 2,3,4
/// 2ta operand niye hole binary operator
/// 1ta niye hole unary operator
///

#include<bits/stdc++.h>
using namespace std;

class Coord
{
    int x,y;
public :
    Coord()
    {
        x = 0;
        y = 0;
    }
    Coord( int a , int b )
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << x << endl;
        cout << y << endl;
    }

    /// Operator Overloading
    Coord operator + ( Coord o4 ) //operator 1ta pataile hbe perameter e
    {
        Coord temp;
               //o1 o2
        temp.x = x + o4.x; ///akhane x er aghe 1ta hidden this pointer boshe jai
                           /// r ei pointer o1 ke point kra r amra perameter diye o2 ta patai
        temp.y = y + o4.y;

        return temp;
    }
};

int main()
{
    Coord o1(1,2),o2(3,4),o3;

    o3 = o1 + o2;

    o3.show();

    return 0;
}

