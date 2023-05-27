#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s = "Niloy";
    cout << s[3] << endl; // access the i'th index of the string (general way)
    cout << s.at(3) << endl; // access the i'th index of the string (functional way)
    cout << s.front() << endl; // return the first index val of string
    cout << s.back() << endl; // return the last index val of string
    cout << s[s.size() - 1] << endl; // last index value
    // here s.[i]  and s.back is important
    return 0;
}