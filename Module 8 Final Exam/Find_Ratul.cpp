#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s;
    string wrd = "Ratul";
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while(ss >> word)
    {
        if(word == wrd)
        {
            cnt++;
        }
    }
    if(cnt == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}