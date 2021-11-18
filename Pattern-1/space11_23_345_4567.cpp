#include<iostream>
using namespace std;
int main (){
	int i,j,k,n;
	cout<<"Enter the num"<<endl;
	cin>>n;
	for (i=1;i<n-1;i++)
	{
		k = i;
        // Logic to print spaces
        for(j=i; j<n; j++)
        {
            cout<<" ";
        }
        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            cout<<k;
        }
		cout<<endl;
	}
}
