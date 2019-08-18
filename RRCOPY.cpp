#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main(){

	int T,temp,N;
	cin>>T;
	set<int> result;
	
	while(T--){
		cin>>N;
		
		for(int i=0;i<N;i++){
			cin>>temp;
			result.insert(temp);
		}
		cout<<result.size();
		cout<<endl;
		result.clear();
	}


}