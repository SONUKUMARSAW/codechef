#include <iostream>
#include<vector>
#include<utility>

using namespace std;

int main(){

	int N;cin>>N;
	vector< pair<int,int> > pC(N+1,make_pair(-1,-1));
	std::vector<std::vector<int> > v;
	std::vector<int> v2;
	for(int i=1;i<=N;i++){
		cin>>pC[i].first;
	}
	int cycle=0,index=1;
	bool flag=true;
	while(flag){
		if(pC[index].second==-1){
			
			v2.push_back(index);
			pC[index].second=cycle;
			index=pC[index].first;
			
		}
		else if(pC[index].second==cycle){
			cycle++;
			v2.push_back(index);
			v.push_back(v2);
			v2.clear();
			while(pC[index].second!=-1){
				index++;
				if(index>=N+1){flag=false;break;}
			}	
		}		
	}
	cout<<cycle<<endl;
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){cout<<v[i][j]<<" ";}
			cout<<endl;
	}
	return 0;
}