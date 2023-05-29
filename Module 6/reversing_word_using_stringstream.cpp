//1. Simple word printing 

/*#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word << endl; // word printing wiht str stream
    }

    

    return 0;
}*/

//2. Simple word printing with recursion
/*#include<bits/stdc++.h>
using namespace std;
void print(stringstream &ss)
{
    string word;
    if(ss >> word)
    {
        cout << word << endl;
        print(ss);
    }
}
int main()

{

    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);

    return 0;
}*/

//3. Reverse word printing with recursion
#include<bits/stdc++.h>
using namespace std;
void print(stringstream &ss)
{
    string word;
    if(ss >> word)
    {
        print(ss);
        cout << word << endl;
    }
}
int main()

{

    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);

    return 0;
}