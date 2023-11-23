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
};

int main()
{
    CSE ob;

    ob.office = 2; //it will not work because it's a private property of EEE class

    ob.classroom = 10;

    return 0;
}
