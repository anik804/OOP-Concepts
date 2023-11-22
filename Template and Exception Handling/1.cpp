#include<bits/stdc++.h>
using namespace std;

/*int add( int a , int b )
{
    return a+b;
}
double add( int a , double b )
{
    return a+b;
}
*/

template<typename t> /// t is nothing but a template
t sum( t n1 , t n2 )
{
    t rs;

    rs = n1 + n2;

    return rs;
}

///template overloading

template<typename t> /// t is nothing but a template
t sum( t n1 , t n2 , t n3 )
{
    t rs;

    rs = n1 + n2 + n3;

    return rs;
}

///for multiple data type
template<typename t , typename t1> /// t is nothing but a template
t1 sum( t n1 , t1 n2 )
{
    t rs;

    rs = n1 + n2;

    return rs;
}


/// t akhon jekhono data type niye kaj krte parbe
/// without writing different function jokon amra 1ta diye kaj kra feli
/// thawkhon oita ke bole template
/// multiple data type er varriable pass krte parbe
/// but perameter list same hote hbe
/// thawkhon template overload krte hbe

int main()
{
    int a = 4;
    int b = 5;
    int c = sum(a,b);
    cout << c << endl;


    long j = 11;
    long k = 12;
    long e = sum(j,k);
    cout << e << endl;


    ///using template overload
    double m = 2.3;
    double n = 8.5;
    double f = 9.2;
    double o = sum(m,n,f);
    cout << o << endl;


    ///for multiple data type
    char ch = 'a';
    int y = 2;
    int r = sum(y,ch);
    cout << r << endl;

    return 0;
}
