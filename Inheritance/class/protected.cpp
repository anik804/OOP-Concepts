#include<bits/stdc++.h>
using namespace std;

class EEE //base class
{
private :
    int lab;
protected :
    int office;
public :
    int classroom;
    void chemistry()
    {
        cout << "Chemistry" << endl;
    }

};

//derive class
class CSE : protected EEE ///inherit kra
{
private :

public :
    void show( int a )
    {
        office = 10;
        classroom = a;
        cout << office << " " << classroom << endl;

    }
};

int main()
{
    CSE ob;

    //ob.classroom = 10;
    //ob.office = 2;
    ob.show(2);

    /*EEE ob1;
    ob1.office = 5;//not work protected property
    */

    return 0;
}

///protected e use krle private er mto act krbe
///but derive class access krte parbe
/// and derive class er o private property



