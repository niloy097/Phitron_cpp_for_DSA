#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char section;
        int math_marks;
        int english_marks;
};
int main()
{

    int n;
    cin >> n;
    cin.ignore();
    Student arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >>
         arr[i].math_marks >> arr[i].english_marks;
    }
    reverse(arr, arr+n);
    for(int i = 0; i < n; i++)
    {
        cout<< arr[i].name<<" " << arr[i].cls<<" " << arr[i].section<<" " <<
         arr[i].math_marks<<" " << arr[i].english_marks<< endl;
    }
    return 0;
}