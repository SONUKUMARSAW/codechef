#include<iostream>
#include<string>
using namespace std;

int main(){

	int T;
	cin>>T;
	while(T--){
		int N,count=0;cin>>N;
		cin.ignore();
		int Array[N]={0};
		string bombs;
		cin>>bombs;

		if(bombs[0]=='1'){Array[0]=Array[1]=1;}
		if(bombs[N-1]=='1'){Array[N-1]=Array[N-2]=1;}
		
		for(int i=1;i<N-1;i++){
				if(bombs[i]=='1'){Array[i-1]=1;Array[i]=1;Array[i+1]=1;}

		}
		for(int i=0;i<N;i++){
			if(Array[i]==0)count++;
		}
		cout<<count<<endl;
	}
}