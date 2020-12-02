#include <bits/stdc++.h>

using namespace std;

void removeDubWord(string str)
{
    istringstream ist(str);
    unordered_set<string> hsh;

    do
    {
        string word;
        ist >> word;
        while (hsh.find(word) == hsh.end()) {
            cout << word << " ";
            hsh.insert(word);
        }
    } while (ist);
}

int main()
{
    string str = " ";
    while ( cout << "String:" && getline(cin, str) && ! str.empty() ) {
        cout << "Result: ";
        removeDubWord(str);
        cout << endl;
    }
    return 0;
}