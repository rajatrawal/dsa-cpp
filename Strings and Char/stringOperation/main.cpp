#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool compare(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }

    for (int i = 0; i < a.length(); i++)
    {
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    string name = "Rajat Rawal";
    string firstName = "Rajat";
    string lastName = "Rawal";
    // cout << "Enter your name ";
    // getline(cin,name);
    // cout << endl;
    cout << "Your name is : " << name << endl;

    // Diffrace Between Sting And Char Array
    // char arr[100];
    // arr[0] ='r';
    // arr[1] ='\0';
    // arr[2] ='j';
    // arr[3] ='\0';
    // arr[4] ='t';
    // cout << "Char arry is " << arr << endl;
    // string str="r\0j\0t";
    // cout << "string is " << str << endl;

    // length function
    // cout << "length is : " << name.length() << endl;

    // size function
    // cout << "length is : " << size.length() << endl;

    // empty function
    // cout << "is empty : " << name.empty() << endl;

    // push back function
    name.push_back('a');
    cout << "push back : " << name << endl;

    // pop back function
    name.pop_back();
    cout << "pop back : " << name << endl;

    // substr
    cout << "substr : " << name.substr(3, 5) << endl;

    // compare

    cout << "comparision of  first and last is : " << firstName.compare(lastName) << endl;
    cout << "comparision of  first and last is : " << firstName.compare("Rajata") << endl;
    cout << "comparision of  first and last is : " << firstName.compare("Rajat") << endl;
    cout << "comparision of  first and last is : " << name.compare("rajat rawal") << endl;

    return 0;
}
