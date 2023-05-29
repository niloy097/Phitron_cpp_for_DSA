#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s;
    cin >> s;
    sort(s.begin(), s.end()); //first char can't be uppercase
    cout << s << endl;

    return 0;
}