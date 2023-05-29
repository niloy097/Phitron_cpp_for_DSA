#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s;
    getline(cin,s);
    // stringstream ss(s); // taking str s to ss ass a group of word
    //or another way
    stringstream ss;
    ss << s;
    string word;
    int cnt = 0;
    while(ss >> word) // transfer a single word to word from ss
    {
        // cout << word << " "; // str print;
        cnt ++; // word count

    }
    cout << cnt << endl;
    return 0;
}