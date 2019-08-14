#include<iostream>
using namespace std;



int main(){
	long long N,temp;
	
	unsigned long long int Sum1=0,Sum2=0;
	
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>temp;
		Sum1+=temp;
	}
	Sum2=(N*(N+1))/2;
	if(Sum1==Sum2){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}