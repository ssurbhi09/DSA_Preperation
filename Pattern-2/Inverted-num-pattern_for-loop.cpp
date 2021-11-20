#include <iostream> 
using namespace std;

int main()
{
 int i, j;
 for(i=1; i<=5; i++)
 {
  for(j=i; j<=5; j++)
  {
   if(i < 4)
    cout << i;
   else 
    cout << 6 - i;
  }
  cout << "\n";
 }
 return 0;
}

