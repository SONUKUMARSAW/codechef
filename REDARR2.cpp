#include<iostream>
#include<algorithm>

using namespace std;

 int main(){

 	int T,n;
 	cin>>T;
 	while(T--){
 		cin>>n;
 		int Array[n];
 		long long int Array2[n];
 		long long int temp=0;
 		for(int i=0;i<n;i++){
 			cin>>Array[i];
 		}
 		sort(Array,Array+n);
 		
 		Array2[0]=Array[0]+Array[1];
 		temp=Array2[0];
 		for(int i=1;i<n-1;i++){
 			Array2[i]=Array2[i-1]+Array[i+1];
 			temp+=Array2[i];
 		}
 		cout<<temp<<endl;
 	}
 }