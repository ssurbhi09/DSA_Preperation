#include<iostream>
using namespace std;
int main(){
	char c;
	cin>>c;
	int count = 0;
	while (c != '$'){
		count ++;
		
	//	cin >>c;
		c = cin.get();
	}
	cout<< count<< endl;
}
