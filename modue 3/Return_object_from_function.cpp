#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int cls;
        int roll;
        char section;
    Student(char *n, int c, int r, char s)
    {
        strcpy(name, n);
        cls = c;
        roll  = r;
        section = s;
    }
};
Student fun()
{
    char name[100] = "Niloy Khan";
    Student r(name, 9, 29, 'A');
    return r; // return wiith rvo technique (return value optimaization)
}
int main()

{
    Student Rahim = fun();
    cout << Rahim.name<<endl;
    

    return 0;
}