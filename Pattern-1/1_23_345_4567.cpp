#include<iostream>
using namespace std;
int main (){
	int i,j,k,n;
	cout<<"Enter the num"<<endl;
	cin>>n;
	for (i=1;i<n;i++)
	{
		k=i;
		for(j=1;j<=i;j++,k++)
		{
			cout<<k;
		}
		cout<<endl;
	}
}
