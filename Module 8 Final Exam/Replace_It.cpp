#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while(t--)
    {
        string s, word;
        cin >> s >> word;
        while(s.find(word) != -1)
        {
            s.replace(s.find(word), word.size(), "$");
        }
        cout << s << endl;
    }
    return 0;
}