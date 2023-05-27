//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{

    int arr[5] = {1, 2, 3, 4, 5}; // created in stack memory
    int *arr1 = new int[5]{6, 7, 8, 9, 10}; // created in heap memory
    cout << arr1 << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    delete[] arr1;
    arr1 = NULL;
    cout << arr1;
    cout<< endl;
    for(int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}