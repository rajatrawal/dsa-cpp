#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int compare(string a, string b)
{
    if (a.length() != b.length())
    {
        for (int i = 0; i < a.length() && i < b.length(); i++)
        {
            char a_char = (char)a[i];
            char b_char = (char)b[i];
            if (a_char > b_char)
            {
                return 1;
            }
            else if (b_char > a_char)
            {
                return -1;
            }
        }
        return a.length() > b.length() ? 1 : -1;
    }

    for (int i = 0; i < a.length(); i++)
    {
        char a_char = (char)a[i];
        char b_char = (char)b[i];
        if (a_char > b_char)
        {
            return 1;
        }
        else if (b_char > a_char)
        {
            return -1;
        }
    }
    return 0;
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
    // cout << "push back : " << name << endl;

    // pop back function
    name.pop_back();
    // cout << "pop back : " << name << endl;

    // substr
    // cout << "substr : " << name.substr(3, 5) << endl;

    // compare

    // cout << "comparision of  first and last is : " << firstName.compare(lastName) << endl;
    // cout << "comparision of  first and last is : " << firstName.compare("Rajata") << endl;
    // cout << "comparision of  first and last is : " << firstName.compare("Rajat") << endl;
    // cout << "comparision of  first and last is : " << name.compare("rajat rawal") << endl;
    // cout << "comparision of  first and last is : " << compare(firstName, "Rajax") << endl;

    // find
    // cout << "find at : " << firstName.find("at");

    //replace
    name.replace(3,3,lastName);
    cout << name << endl;
    name.erase(4, 5);
    cout << name << endl;
    

    return 0;
}
