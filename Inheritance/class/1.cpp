///Inheritance ==> agher generation theke pawa
/// in programming language
/// jei class ta ke inherit kra hoi seita base class
/// r jeita inherit er por hoi oita derive class



#include<bits/stdc++.h>
using namespace std;

class EEE //base class
{
public :
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

    ob.chemistry();

    return 0;
}
