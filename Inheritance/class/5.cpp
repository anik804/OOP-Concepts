///Inheritance ==> aghergeneration theke pawa
/// in programming language
/// jei class ta ke inherit kra hoi seita base class
/// r jeita inherit er por hoi oita derive class



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
class CSE : public EEE ///inherit kra
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

    ob.office = 2; //it will not work because it's a private property of EEE class

    //ob.classroom = 10;
    ob.show(2);
    //amra jodi  khono 1ta derive class onno 1ta base class ke privately inherit kri base class er public property derive class e private hoiye jbe

    return 0;
}

///base class er private is completely private
///it cannot ber access in anyway


