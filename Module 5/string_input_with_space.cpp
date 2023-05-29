#include<bits/stdc++.h>
using namespace std;
int main()

{

    //string s;
    // cin >> s; // wont work
    // cout << s; // won't give the output after the space
    // cin.getline(s); // this will not work here, cz this is for char array
    //the vaid syntax for space str input is
    /*getline(cin,s); // it will work
    cout << s << endl;
    cout << s.size() << endl;*/ //count the strlen without 'enter' char

    /*A bugs of getlin*/
    /*int x;
    cin >> x;
    string s;
    getline(cin,s); // here getline will input space as a string
    cout << x << endl;
    cout << s << endl;*/
    //Bug solution-->
    int x;
    cin >> x;
    // cin.ignore(); //1'st way
    getchar(); //2'nd way
    string s;
    getline(cin,s); 
    cout << x << " " << s << endl;
    return 0;
    

    return 0;
}