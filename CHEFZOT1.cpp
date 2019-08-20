#include<iostream>
#include<climits>
using namespace std;

typedef long long int lli;

int main(){
	lli max_product=LLONG_MIN;
	lli cur_product=1;

	int n,cur_count=0,max_count=0;
	cin>>n;
	int Array[n];
	for(int i=0;i<n;i++){
		cin>>Array[i];
	}
	for(int i=0;i<n;i++){
		cur_product*=Array[i];
		if(cur_product>0)cur_count++;
		if(max_product<=cur_product){max_product=cur_product;max_count=cur_count;}
		if(cur_product==0){cur_product=1;cur_count=0;}
	}
	cout<<max_count<<endl;
}