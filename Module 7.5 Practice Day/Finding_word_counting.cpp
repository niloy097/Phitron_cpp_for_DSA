#include<bits/stdc++.h>
using namespace std;
int main()

{

    string str, x;
    int cnt = 0;
    getline(cin, str);
    cin >> x;
    stringstream ss(str);
    string word;
    while (ss >> word)
    {
        if(word == x)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}