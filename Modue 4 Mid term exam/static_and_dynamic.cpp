#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    char name[100];
    float height;
    int age;  
    Person(char *n, float ht, int a)
    {
        strcpy(name, n);
        height = ht;
        age = a;
    }
};
int main()
{
    char name1[100] = "Niloy Khan";
    Person Niloy(name1, 5.7, 22);
    char name2[100] = "Piloy Khan";
    Person Piloy(name2, 5.9, 23);
    if(Niloy.age > Piloy.age)
    {
        cout << Niloy.name << endl;
    }
    else
    {
        cout << Piloy.name << endl;
    }
    return 0;
}