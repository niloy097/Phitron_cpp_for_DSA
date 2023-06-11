#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int key = n /2;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt_even = 0, cnt_odd = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] % 2 == 0)
            {
                cnt_even++;
            }
            else
            {
                cnt_odd++;
            }
        }
        if(n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else if(cnt_even > cnt_odd)
        {
            cout << abs(key - cnt_even) << endl;
        }
        else if(cnt_even < cnt_odd)
        {
            cout << abs(key - cnt_odd) << endl;
        }
        else //if(cnt_even == cnt_odd)
        {
            cout << 0 << endl;
        }
        
    }

    return 0;
}