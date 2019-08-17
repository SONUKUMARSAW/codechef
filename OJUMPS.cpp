#include<iostream>
using namespace std;

int main(){
	unsigned long long int a;
	cin>>a;

	if(a==1||a==0){
		cout<<"yes";
	}
	else if(a%3==0){
		cout<<"yes";
	}
	else if(a%6==0){
		cout<<"yes";
	}
	else if((a-1)%6==0){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}