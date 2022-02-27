#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    cout << "name: " << name << endl;

    string myName("Abu Bakar");
    cout << "myName: " << myName << endl;

    string yourName(myName);
    cout << "yourName: " << yourName << endl;

    string aName(myName,5);
    cout << "aName: " << aName << endl;

    string newName(myName,0,3);
    cout << "newName: " << newName << endl;

    string repeat(30, '*');
    cout << "repeat: " << repeat << endl;

    system("pause");
    return 0;
}
