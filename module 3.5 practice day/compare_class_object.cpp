//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;
    Student(char n[], int r, char s, int m_m, int c)
    {
        strcpy(name, n);
        roll = r;
        section = s;
        math_marks = m_m;
        cls = c;
    }
};
int main()

{
    char str[100] = "Niloy Kumar";
    Student rahim(str, 29, 'A', 1020, 9);

    char str1[100] = "Uttom kumar";
    Student Uttom(str1, 30, 'A', 98, 9);

    char str2[100] = "Vanu kumar";
    Student Vanu(str2, 31, 'A', 188, 9);

    if(rahim.math_marks > Uttom.math_marks && rahim.math_marks > Vanu.math_marks)
    {
        cout<< rahim.name << endl;
    }
    else if(Uttom.math_marks > rahim.math_marks && Uttom.math_marks > Vanu.math_marks)
    {
        cout << Uttom.name << endl;
    }
    else
    {
        cout << Vanu.name << endl;
    }

    return 0;
}