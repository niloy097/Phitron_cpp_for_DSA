//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{

    int a, b, c;
    char s, e;
    cin >> a >> s >> b >> e >> c;
    switch(s)
    {
        case '+':
        {
            (a + b == c)?cout<<"Yes"<<endl:cout<<a+b<<endl;
            break;
        }
        case '-':
        {
            (a - b == c)?cout<<"Yes"<<endl:cout<<a-b<<endl;
            break;
        }
        default:
        {
            (a * b == c)?cout<<"Yes"<<endl:cout<<a*b<<endl;
        }
    }

    return 0;
}