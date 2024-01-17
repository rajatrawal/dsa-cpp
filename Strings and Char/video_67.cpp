#include <iostream>
#include <string>
using namespace std;
int main()
{
    // taking entier char group as input

    // char arr[10];
    // cout << "Enter your name : ";
    // cin >> arr;
    // cout << endl << "Your name is : " << arr[4] <<endl;
    // int nullChar = arr[5];
    // cout << endl << "null char is : " << nullChar <<endl;

    // taking single element as input
    // char name[100];
    // name[0] = 'a';
    // name[1] = 'b';

    // cout << "Enter any char : ";
    // cin >> name[2];

    // cout <<endl << name[0] << name[1] << name[2] << endl;

    // task
    // char fullName[10];
    // cout << "Enter your  Full name : ";
    // cin >> fullName;
    // cin.getline(fullName, 50);
    // cout << endl
    //      << fullName;

    // taks2

    char name2[50];
    name2[2] = 'y';
    name2[49] = 'z';

    cout << "Enter your name ";
    cin >> name2;
    cout << endl;
    cout << name2 << endl;

    return 0;
}
