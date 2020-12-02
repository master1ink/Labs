#include <bits/stdc++.h>

using namespace std;

void removeDupWord(string str)
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
        removeDupWord(str);
        cout << endl;
    }
    return 0;
}