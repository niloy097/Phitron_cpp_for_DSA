#include<bits/stdc++.h>
using namespace std;
int main()

{

    // string s = "Niloy Khan Biswass Naeem Bodsho";
    // cout << s.size() << endl; // returns the string lenght
    // //cout << s.max_size() << endl; // return the maximum str leng storing capacity
    // // suitable for my machine
    // cout << s.capacity() << endl; // return the current capacity of string

    // string x = "Niloy Khan Bahadur";
    // cout << x << endl;
    // x.clear(); // clear the string
    // cout << x << endl;
    // cout << x.size() << endl;

    // string c = "Ganja . com";
    // int d = c.empty(); // return the true false value, if the string is empty
    // // return true otherwise false
    // cout << d << endl;
    // //conditionally checking
    // if(d == true) cout << "Empty" << endl;
    // else cout << "Not Empty" << endl;

    string f;
    cin >> f;
    //f.resize(5); // resize the string
    f.resize(15, 'Y'); // resize the string and fill the all gaps with requsted char
    cout << f.size() << endl;
    cout << f << endl;
    return 0;
}