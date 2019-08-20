#include<iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long long int n,temp;cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>temp;
		}
		long long int sum;
		sum=(n*(n+1))/2;
		cout<<sum<<endl;

	}
}
