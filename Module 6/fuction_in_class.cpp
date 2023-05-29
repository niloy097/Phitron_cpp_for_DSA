//1. Constructor Function

/*#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string nm, int ag)
        {
            name = nm;
            age =  ag;
        }
};
int main()

{

    Person rakib("Rakib Hasan", 22);
    cout<<rakib.name << " " << rakib.age << endl;
    

    return 0;
}*/

//2. extra function inside the class
#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string nm, int ag, int m1, int m2)
        {
            name = nm;
            age =  ag;
            marks1 = m1;
            marks2 = m2;
        }
        void dispaly()
        {
            cout << "Hello I am inside cnstr" << endl;
        }
        void print_details()
        {
            cout << name << " " << age << endl;
        }
        int add_marks()
        {
            return marks1 + marks2;
        }
};
int main()

{

    Person rakib("Rakib Hasan", 22, 89, 33);
    // cout<<rakib.name << " " << rakib.age << endl;
    rakib.dispaly();
    rakib.print_details();
    cout << rakib.add_marks() << endl;
    

    return 0;
}