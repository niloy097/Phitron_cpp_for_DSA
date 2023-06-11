#include<bits/stdc++.h>
using namespace std;
void print_char(int n, char c)
{
    if(n == 0) return;
    if(n == 1)
    { 
        cout << c << endl;
    }
    else
    {
        cout << c << " ";
        print_char(n - 1, c);
    }
}
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        int n; char c;
        cin >> n >> c;
        print_char(n, c);
    }
    return 0;
}