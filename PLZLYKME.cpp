#include<iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int L,D,S,C;
		cin>>L>>D>>S>>C;
		int temp=S;bool flag=false;
		if(S>=L){cout<<"ALIVE AND KICKING"<<endl;continue;}
		D--;
		while(D--){
			temp=temp+(C*temp);
			if(temp>=L){
				flag=true;
				break;
			}
		}
		if(flag){
			cout<<"ALIVE AND KICKING"<<endl;
		}
		else{
			cout<<"DEAD AND ROTTING"<<endl;
		}

	}
}