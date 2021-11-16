#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;
	
	int d=2;
	bool divided=false;
	while(d<n){
		if(n%2==0)
		{
			cout<<"Not prime"<<endl;
			divided= true;
		}
		d= d+1;
	}
	if(!divided){
		cout<<"Prime";
	}
	}
