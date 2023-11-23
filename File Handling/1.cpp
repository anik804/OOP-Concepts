///ofstream ==> file write krte use hoi
///ifstream ==> file theke information program e ana
///fstream ==> 2tar kaj e krte pare

#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main()
{
    string data1;

    //open a file to write mode
    ofstream outfile; //varriable creation

    outfile.open("file.txt");

    cout << "writing to the file" << endl;
    cout << "enter your name" << endl;

    getline( cin,data1 );

    ///write inputed data into the file
    outfile << data1 << endl;


    cout << "Enter your age" << endl;
    cin >> data1;
    cin.ignore();

    outfile << data1 << endl;

    outfile.close(); ///closing the file

    //open a file in read mode
    ifstream infile; //varriable create of this class

    infile.open("file.txt");

    cout << "Reading from the file" << endl;
    infile >> data1;

    cout << data1 << endl; //write the data in screen

    infile >> data1; ///again read data from the file
    cout << data1 << endl;

    infile.close();
    ///closing the file

    return 0;
}
