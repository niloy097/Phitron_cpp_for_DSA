//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()

{

    Student Rahim;
    strcpy(Rahim.name, "Rahim Uddin");
    Rahim.roll = 15;
    Rahim.cls = 9;
    Rahim.section = 'A';

    Student Karim;
    strcpy(Karim.name, "Karim Uddin");
    Karim.roll = 12;
    Karim.cls = 1;
    Karim.section = 'B';

    cout << "Details of Rahim---->" << endl;
    cout << Rahim.name << endl << Rahim.roll << endl << Rahim.cls << endl << Rahim.section << endl;
    cout << "\nDetails of Karim--->" << endl;
    cout << Karim.name << endl << Karim.roll << endl << Karim.cls << endl << Karim.section << endl;

    return 0;
}