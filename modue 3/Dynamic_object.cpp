#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
    
    Student(char nm[], int r, int c, char sec)
    {
        strcpy(name, nm);
        roll = r;
        cls =  c;
        section = sec;
    }
};
int main()

{
    char name[100] = "Niloy Khan";
    //Student Rahim(name, 29, 9, 'A') //Normal object creating
    //Student *Rahim = new Student; // Dynamic object creating for no constructor
    Student *Rahim = new Student(name, 16, 9, 'A');
    // (*Rahim).roll = 15; //Updating val
    //Accessing Dynamic Object value-->
    cout << (*Rahim).name << endl;
    cout << (*Rahim).roll << endl;
    cout << (*Rahim).cls << endl;
    cout << (*Rahim).section << endl;
    //Shortcut way to access Dynamic pointer object val-->
    // (*Rahim). == Rahim ->

    cout << endl << endl;
    cout <<  Rahim ->name << endl;
    cout <<  Rahim ->roll << endl;
    cout <<  Rahim ->cls << endl;
    cout <<  Rahim ->section << endl;

    //Deleting an object
    delete Rahim;
    cout << endl << endl;
    cout <<  Rahim ->name << endl;
    cout <<  Rahim ->roll << endl;
    cout <<  Rahim ->cls << endl;
    cout <<  Rahim ->section << endl;
    return 0;
}