#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age = 26;
    void fun()
    {
        cout << "hello rakib nmspace" << endl;
    }
}
namespace Sakib
{
    int age1 = 23;
    void fun1()
    {
        cout << "hello sakib nmspace" << endl;
    }
}
using namespace Rakib;
int main()
{

    // cout << Rakib::age << endl;
    cout << age << endl; // if we use namespace Rakib
    fun();
    cout << Sakib :: age1 << endl;
    Sakib :: fun1();

    return 0;
}