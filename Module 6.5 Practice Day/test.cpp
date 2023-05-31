#include<bits/stdc++.h>
using namespace std;
int main()

{

    /*function-1;
    isalpha('c'); is alphabet or not--> return 0
    if not alphabet 1 for uppercase and 2 for lowercase*/

    /*
    function-2:
    reverse(startingpoint, endingpoint)
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str;
    */
    /*
    function-3:
    */

    string str = "ProgrammingPhitronHero";
    // cout << str.find("Phitron");
    int res = str.find("Phitron"); //returns -1 if this str not exists in main str
    str.replace(res, 7," ");
    cout << str << endl;
    return 0;
}