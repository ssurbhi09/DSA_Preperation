#include <iostream>
#define endl "\n"
using namespace std;
template <class T>
int linearSearch(T arr[], int n, T x)
{
for(int i = 0; i < n; i++)
{
if (arr[i] == x)
return i;
}
return -1;
}
int main()
{
int n = 0, i = 0, res;
// for integer array
int x = 0;
cout << "Enter the size of integer array: ";
cin >> n;
int a[n];
cout << "Enter the elements of integer array: ";
for (i = 0; i < n; i++)
cin >> a[i];
cout << "Enter the value to be searched: ";
cin >> x;
res = linearSearch(a, n, x);
if (res == -1)
cout << "The element " << x << " is not present in the array" << endl;
else
cout << "The element " << x << " is present at index " << res << " in the array" << endl;
cout << endl;
// for character array
char y;
cout << "Enter the size of character array: ";
cin >> n;
char b[n];
cout << "Enter the elements of the character array: ";
for (i = 0; i < n; i++)
cin >> b[i];
cout << "Enter the character to be searched: ";
cin >> y;
res = linearSearch(b, n, y);
if (res == -1)
cout << "The character " << y << " is not present in the array" << endl;
else
cout << "The character " << y << " is present at index " << res << " in the array" << endl;
cout << endl;
// for float array
float z;
cout << "Enter the size of float array: ";
cin >> n;
float c[n];
cout << "Enter the elements of float array: ";
for (i = 0; i < n; i++)
cin >> c[i];
cout << "Enter the float value to be searched: ";
cin >> z;
res = linearSearch(c, n, z);
if (res == -1)
cout << "The element " << z << " is not present in the array" << endl;
else
cout << "The element " << z << " is present at index " << res << " in the array" << endl;
return 0;
}
