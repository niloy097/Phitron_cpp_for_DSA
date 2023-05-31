#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student a, Student b)
{
    if(a.marks < b.marks) return true;
    else return false;
}
int main()
{

    Student arr[3];
    for(int i = 0; i < 3; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore();
    }
    /*for(int i = 0; i < 2; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(arr[i].marks < arr[j].marks) //Descending order selection sort
            {
                swap(arr[i], arr[j]); // by comparing roll, other property
                //cmp could be happern
            }
        }
    }*/
    sort(arr, arr+3, cmp); //Ascending order
    for(int i = 0; i < 3; i++)
    {
        
        cout << arr[i].name << " " << arr[i].roll<< " " << arr[i].marks<< endl;
      
    }
    return 0;
}