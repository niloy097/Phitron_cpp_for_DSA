#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s;
    //string :: iterator it; //string iterator declaration
    cin >> s;
    /*for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " "; //Normal interating approach
    }*/
    //iterator
    /*s.begin() and s.end()is a pointer which points the first index of the string
    and null index of the string.
    and its a private data. if we want to see the index value we have dereference
    it*/
    cout << *(s.begin()) << endl; 
    cout << *s.end() << endl; //it wil give the null value which is in last index
    //for intereting a string with pointer we need the string iterator
    /*for(it = s.begin(); it < s.end(); it++) 
    {
        cout << *it << endl;
    }*/
    //here we can use auto also it we dont declare iterator
    for(auto it = s.begin(); it < s.end(); it++) //here auto is detect the iterator of string automaticly
    {
        cout << *it << endl;
    }
    return 0;
}