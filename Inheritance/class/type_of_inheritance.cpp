/*
/// Single Inheritance

#include<bits/stdc++.h>
using namespace std;

class A //base class
{
private :

public :

};

//derive class
class B : public A ///inherit kra
{
private :

public :
};

int main()
{

    return 0;
}





/// Multiple Inheritance

#include<bits/stdc++.h>
using namespace std;

class A //base class
{
private :

public :

};

class B //base class
{
private :

public :
};


//derive class
class C : public A , public B ///inherit kra
{
private :

public :
};

int main()
{

    return 0;
}



/// Multilevel Inheritance
#include<bits/stdc++.h>
using namespace std;

class A //base class
{
private :

public :

};

class B : public A
{
private :

public :
};


//derive class
class C : public B ///inherit kra
{
private :

public :
};

int main()
{

    return 0;
}



/// Hierarchical Inheritance
#include<bits/stdc++.h>
using namespace std;

class A //base class
{
private :

public :

};

class B : public A
{
private :

public :
};


//derive class
class C : public A ///inherit kra
{
private :

public :
};

int main()
{

    return 0;
}



/// Hybrid Inheritance
#include<bits/stdc++.h>
using namespace std;

class A //base class
{
private :

public :
    int x;

};

class B : public A
{
private :

public :
};


//derive class
class C : public A ///inherit kra
{
private :

public :
};

class D : public B , public C ///inherit kra
{
private :

public :
};

int main()
{

    return 0;
}
*/


///Extra
#include<bits/stdc++.h>
using namespace std;

class A //base class
{
private :

public :
    int x;

};

class B : public A
{
private :

public :
};


//derive class
class C : private A ///inherit kra
{
private :

public :
};

class D : public B , public C ///inherit kra
{
private :

public :
};

int main()
{
    D ob;
    ob.x = 10;

    cout << ob.x << endl;
    ///kaj krbe nh
    ///b,c 2tai inherited konta access krbe bujtese nh
    ///atai ambiguity
    ///class c te privately krte hbe
    ///class b teo privately kra jaite pare


    return 0;
}
