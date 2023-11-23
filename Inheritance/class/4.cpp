#include<bits/stdc++.h>
using namespace std;

class EEE //base class
{
private :
    int office;
public :
    int classroom;
    void chemistry()
    {
        cout << "Chemistry" << endl;
    }

};

//derive class
class CSE : private EEE ///inherit kra
{
private :

public :

};

int main()
{
    CSE ob;

    //ob.office = 2;

    ob.classroom = 10;// not accessable cause its a public property
    //ob.show(2);

    return 0;
}


