#include <iostream>
//#include <conio.h>
using namespace std;
int main()
{
    int i,j,rows;//variable declaration
    cout<<"Enter the number of rows: ";
    cin>>rows;//Take input the number of rows from user
    cout<<"\n";
    for(i=1; i<=rows; i++){
        for(j=i; j>=1; j--){
          cout<<j;//Display pattern
    }
    cout<<"\n";//move to next line
    }
   // getch();
    return 0;
}
