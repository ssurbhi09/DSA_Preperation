#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int n = sizeof(arr) / sizeof(arr[0]);
cout << "The array is: ";
for (int i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
cout << endl;
int index;
cout << "Enter the index whose corresponding element will be printed: ";
cin >> index;
try {
if (index >= n)
throw index;
cout << "The element at index " << index << " is " << arr[index] << endl;
}
catch(int e) {
cout << "Index out of bound error" << endl;
}
return 0;
}





