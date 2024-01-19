#include <iostream>
#include <string>
using namespace std;

int find(string s, string part)
{
    int part_index = 0;
    int part_size = part.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == part[part_index])
        {
            part_index++;
        }
        
        else
        {
            part_index = 0;
        }

        if (part_index == part_size )
        {

            return i - (part_size-1);
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
   
    return 0;
}
