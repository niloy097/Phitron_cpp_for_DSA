/*

#include<bits/stdc++.h>
using namespace std;
int main()

{

    string s;
    getline(cin,s);
    // stringstream ss(s); // taking str s to ss ass a group of word
    //or another way
    stringstream ss;
    ss << s;
    string word;
    int cnt = 0;
    while(ss >> word) // transfer a single word to word from ss
    {
        // cout << word << " "; // str print;
        cnt ++; // word count

    }
    cout << cnt << endl;
    return 0;
}

*/
#include<bits/stdc++.h>
using namespace std;
int main()

{

    // string s;
    // getline(cin, s);
    // stringstream ss(s);
    // string word;
    // int cnt = 0;
    // while(ss >> word)
    // {
    //     for(int i = 0; word[i] != '\0'; i++)
    //     {
    //         if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
    //         {
    //            cnt++;
    //            break;
    //         }
    //     }
    // }

    // cout << cnt << endl;

    string s;
    getline(cin, s);
    int cnt = 0;
    bool inside_word = false;
    for(char c: s)
    {
        if(isalpha(c))
        {
            if(inside_word == false)cnt ++;
            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    }
    cout << cnt << endl;
    return 0;
}