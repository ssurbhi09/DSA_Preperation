#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int n = sizeof(arr) / sizeof(arr[0]);
void index_bound()
{
try {
int index;
cout << "Enter the index: ";
cin >> index;
if (index >= n)
throw index;
cout << "The element at index " << index << " is " << arr[index] << endl;
}
catch(int) {
cout << "Index out of bound error" << endl;
throw;
}
}
int main()
{
int n = sizeof(arr) / sizeof(arr[0]);
cout << "The array is: ";
for (int i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
cout << endl;
try {
index_bound();
}
catch(int e) {
cout << "Caught exception from index_bound function" << endl;
}
return 0;
}
