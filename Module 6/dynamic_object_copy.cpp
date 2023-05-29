#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this -> name = name;
            this -> age = age;
        }
};
int main()

{

    Person *rakib = new Person("Rakib Ahsan", 22);
    Person *sakib = new Person("Sakib Ahmed", 25);
    /*for copying
    rakib = sakib is invalid*/ //here we are exchanging pointer

    // 1. approach one for copying object--.
    // rakib -> name = sakib -> name;
    // rakib -> age = sakib -> age;
    // delete sakib;
    // cout << rakib->name << " " << rakib -> age << endl;
    // 1. approach tow for copying object through pointer(whole objec copy)
    *rakib = *sakib; //preferable for DO(Dynamic Objec) copying
    delete sakib;
    cout << rakib->name << " " << rakib -> age << endl;
   

    return 0;
}