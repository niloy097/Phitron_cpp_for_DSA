#include<bits/stdc++.h>
using namespace std;
void update_str(string &s) // & ==  reference in string class data type
{
    s = "Khan";
}
int main()

{

    string s = "NIloy";
    update_str(s);
    cout << s << endl;

    return 0;
}