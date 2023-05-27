//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
    public:
    char type[10];
    int seat;
    char helper;
    Vehicle(char *t, int s, char h)
    {
        strcpy(type, t);
        seat = s;
        helper =  h;
    }
    void printdetails()
    {
        cout << "Vehicle Deatils: " << endl;
        cout << "Car name: " << type << "\nNumber of seat: " << seat << "\nIs Helper required: " << helper << endl;
    }
}; //Framework or blueprint
int main()

{

    //Making object here
    char name1[10] = "Lambo";
    Vehicle car(name1, 2, 'N'); //Create in stack
    char name2[10] = "Suzuki";
    Vehicle bike(name2, 2, 'N');
    char name3[10] = "Hanif";
    Vehicle buss(name3, 40, 'Y');
    // cout << car.type << " " << car.seat << " " << car.helper << endl;
    car.printdetails();cout<<endl;
    bike.printdetails();cout<<endl;
    buss.printdetails();cout<<endl;
    //Dynamic object maming-->
    char name4[10] = "Nissan";
    Vehicle *car2 = new Vehicle(name4, 4, 'Y');
    cout << car2->type << " " << car2 -> seat << " " << car2->helper<< endl;
    delete car2;
    // cout << car2->type << " " << car2 -> seat << " " << car2->helper<< endl;
    return 0;
}