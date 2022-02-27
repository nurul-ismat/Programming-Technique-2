#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1 = "UTM Skudai";
    int len = str1.length();
    cout << "len: " << len <<endl;

    str1 = "UTM ";
    string str2 = "Skudai ";

    str1.append(str2);
    cout << "str1: " << str1 << endl;

    str2.append(str1);
    cout << "str2: " << str2 << endl;

    string str3 = "Skudai ";
    string str4("UTM JOHOR"); // str4 has “UTM Johor”
    // insert str3 into str4 starting at position 4
    str4.insert(4, str3); // str4 becomes “UTM Skudai Johor”
    cout << "str4: " << str4 << endl;

    string name = "objects";
    string sub = name.substr(2,3);
    cout << "sub: " << sub << endl;

    sub = name.substr(3,15);
    cout << "sub: " << sub << endl;

    system("pause");
    return 0;
}
