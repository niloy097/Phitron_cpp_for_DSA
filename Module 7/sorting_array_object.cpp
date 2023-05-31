#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{

    Student arr[3];
    for(int i = 0; i < 3; i++)
    {
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore();
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(arr[i].marks < arr[j].marks) //Descending order selection sort
            {
                swap(arr[i], arr[j]); // by comparing roll, other property
                //cmp could be happern
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        
        cout << arr[i].name << " " << arr[i].roll<< " " << arr[i].marks<< endl;
      
    }
    return 0;
}