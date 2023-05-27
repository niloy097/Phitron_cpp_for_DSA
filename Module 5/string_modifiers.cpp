#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s = "Hello";
    string s1 = "World";
    string b = "A";
    // s += s1; // concat or append the string;
    // s.append(s1); // concat or append the string;
    // cout << s << endl << s1 << endl;
    

    //Push a char to back--->
    // s = "HelloA"; // works
   // s = s + b; //works;
//    s = s + "A"; // works
    // s[6] = 'A'; // didn't works
    // s.push_back('A'); // works(funtional proccess)
    // cout << s << endl;

    //Pop a char from back--->
    // s.pop_back();
    // s.pop_back();
    // cout << s << endl; 


    //String assign
    // b = "Ami";
    // b.assign("Ami"); //String assign functional
    // cout << b << endl;

    //String Index deletation-->
    // s.erase(1,2); //syntax =  erase(index, how much char we want to delete)
    //if we dont use 2nd parameter here func will delete all char after selected index
    // cout << s << endl;

    //String replace in certain part of string
    // string p = "Niloy_Biswass";
    // p.replace(2,3, "IOI"); 
    //(index, how many char we want to replace, which string we want to put);
    //replace =  erase + replace
    // cout << p << endl;


    //Inserting a portion to specific position
    string x = "NiloyKhan";
    x.insert(5, "Iam"); // (which Position, the string);
    cout << x << endl;
    return 0;
}