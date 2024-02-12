#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(string &s, int &size, int i, string newS,vector<string>& ans)
{
    if (i >= size)
    {
        ans.push_back(newS);
        return;
    }
    printSubsequence(s, size, i+1, newS + s[i],ans);
    printSubsequence(s, size, i+1, newS,ans);
}

int main(int argc, char const *argv[])
{
    string s = "rajat";
    int size = s.size();
    int index = 0;
    vector<string> ans{};
    printSubsequence(s, size, index, "",ans);
    for(auto i : ans){
        cout << i << " ";
    }
    return 0;
}
