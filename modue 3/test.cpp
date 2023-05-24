//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        char section;
        int cls;
        char name[100];
    Student(int r, int s, int c, char* n)
    {
        roll = r;
        section =  s;
        cls = c;
        strcpy(name, n);
    }
};
int main()

{
    char name[100] = "Niloy Khan";
    Student Niloy(23, 'A', 9, name);
    
    cout << Niloy.name;

    return 0;
}