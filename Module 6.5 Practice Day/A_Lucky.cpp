#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while (t--)
    {
        
        char str[52];
        cin >> str;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i < 3; i++)
        {
            int x = str[i] - '0';
            cnt1+=x;
        }
        for(int i = 3; i < strlen(str); i++)
        {
            int x = str[i] - '0';
            cnt2+=x;
        }

        if(cnt1 == cnt2)
        {
            
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}