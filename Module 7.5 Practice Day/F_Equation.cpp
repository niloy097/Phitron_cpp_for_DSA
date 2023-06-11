#include<bits/stdc++.h>
using namespace std;
long long int fun_sum(int x, int n)
{
    long long int sum  = 0;
    sum = sum + (pow(x, 0) - 1);
    for(int i = 2; i <= n; i = i + 2)
    {
        sum = sum + pow(x , i);
    }
    return sum;
}
int main()

{

    int x, n;
    cin >> x >> n;
    cout << fun_sum(x, n) << endl;
    return 0;
}