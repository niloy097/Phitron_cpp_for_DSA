#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char section;
        int id;
        int math_marks;
        int english_marks;
};
bool cmp(Student a, Student b)
{
    if(a.math_marks+a.english_marks == b.math_marks+b.english_marks)
    {
        return a.id < b.id;
    }
    return (a.math_marks+a.english_marks) > (b.math_marks+b.english_marks);
}
int main()
{

    int n;
    cin >> n;
    cin.ignore();
    Student arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> 
        arr[i].id >> arr[i].math_marks >> arr[i].english_marks;
    }
    sort(arr, arr+n, cmp);
    for(int i = 0; i < n; i++)
    {
        cout<< arr[i].name<<" " << arr[i].cls<<" " << arr[i].section<<" " <<
        arr[i].id << " " <<arr[i].math_marks<<" " << 
        arr[i].english_marks<< endl;
    }
    return 0;
}