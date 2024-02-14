#include <iostream>
#include <vector>
#include <limits>
using namespace std;

void reverse(string &s, int &start, int &end)
{
    if (start >= end)
    {
        return;
    }
    swap(s[start], s[end]);

    reverse(s, ++start, --end);
}

int main(int argc, char const *argv[])
{
    string s = "rajat";
    int start = 0;
    int end = s.size() - 1;
    cout << s << endl;
    reverse(s, start, end);
    cout << s << endl;

    return 0;
}
