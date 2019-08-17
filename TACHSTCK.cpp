#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int N,count=0;cin>>N;
	long long int L[N];
	long long int D;
	cin>>D;
	for(int i=0;i<N;i++){
		cin>>L[i];
	}
	sort(L,L+N);
	for (int i = 0; i < N; ++i)
	{
		if(L[i]!=N-1){
			if((L[i+1]-L[i])<=D){count++;i++;}
		}
	}
	cout<<count<<endl;
	return 0;
}