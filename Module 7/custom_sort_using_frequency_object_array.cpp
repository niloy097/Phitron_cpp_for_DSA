/*
Sample Input:
30
pxpzqzzqqpzqpqqppqpqqzpzqzpqzp
Sample Output:
xzzzzzzzzppppppppppqqqqqqqqqqq
xzzzzzzzzppppppppppqqqqqqqqqqq
*/
#include<bits/stdc++.h>
using namespace std;
class CustomSort
{
    public:
    char ch;
    int cnt;
};
bool cmp(CustomSort a, CustomSort b)
{
    if(a.cnt < b.cnt) return true;
    else return false;
}
int main()

{
    int n;
    cin  >> n;
    CustomSort arr[26];
    for(int i = 0; i < 26; i++)
    {
        arr[i].ch = i + 'a';
        arr[i].cnt = 0;
    }
    /*for(int i = 0; i < 26; i++)
    {
        cout << arr[i].ch << " " << arr[i].cnt << endl;
    }*/
    for(int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        arr[c-97].cnt++;
    }
    sort(arr, arr+26,cmp);
    for(int i = 0; i < 26; i++)
    {
        if(arr[i].cnt > 0)
        {
            // cout << arr[i].ch << " " << arr[i].cnt << endl;
            for(int j = 0; j < arr[i].cnt; j++)
            {
                cout << arr[i].ch;
            }
        }
    }
    return 0;
}