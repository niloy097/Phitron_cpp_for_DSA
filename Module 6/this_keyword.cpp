#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
        //    (*this).name = name; // here this is a pointer of current class objects
                this->name = name;
        //    (*this).age = age;
                this->age = age;
        }
        void dispaly()
        {
            cout << "Hello I am inside cnstr" << endl;
        }
};
int main()

{
    
    Person Niloy("Niloy Khan", 22);
    cout << Niloy.name << " " << Niloy.age << endl;
    Niloy.dispaly();
   
    

    return 0;
}