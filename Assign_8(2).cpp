#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
map<string, int> m;
string name;
int roll_no;
cout << "Enter the name and roll no: ";
for (int i = 0; i < 5; i++)
{
cin >> name >> roll_no;
m.insert(pair<string, int>(name, roll_no));
}
map<string, int>::iterator p = m.begin();
// to display the values in the map
while (p != m.end())
{
cout << p->first << " " << p->second << endl;
p++;
}
string key;
cout << "Enter the key to be searched for: ";
cin >> key;
p = m.lower_bound(key);
if (p == m.end())
cout << "The key value is not present in the map" << endl;
else
cout << "The key value is present in the map" << endl;
return 0;
}
