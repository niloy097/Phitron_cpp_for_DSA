//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey_no;
    char country[50];
};
int main()

{
    Cricketer *dhoni = new Cricketer;
    dhoni -> jersey_no = 18;
    strcpy(dhoni->country, "Bindia");

    //cout << dhoni ->country << " " << dhoni -> jersey_no;
    Cricketer *kohli = new Cricketer;
    kohli -> jersey_no = 19;
    strcpy(kohli->country, "India");
    
    // *kohli = *dhoni;
    // kohli = dhoni;
    //cout << kohli -> jersey_no << " " << kohli -> country;
    kohli -> jersey_no = dhoni -> jersey_no;
    strcpy(kohli -> country, dhoni ->country);
    delete dhoni;
    cout << kohli -> country << " " << kohli -> jersey_no << endl;
    

    return 0;
}