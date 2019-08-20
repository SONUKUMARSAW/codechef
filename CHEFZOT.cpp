#include<iostream>
#include<climits>
using namespace std;

typedef long long int lli;

int main(){
	int n;
	cin>>n;
	int temp;
	int count=0,max_count;
	while(n--){
		cin>>temp;
		if(temp==0){
			count=0;
		}
		else{
			count++;
			if(max_count<count){max_count=count;}
		}
	}
	cout<<max_count<<endl;
}