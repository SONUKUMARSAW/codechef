#include<iostream>
#include<unordered_map>
#include<string>
#include<iterator>

using namespace std;
 int main(){

 	int T,j=97;cin>>T;cin.ignore();
 	string M;cin>>M;
 	
 	unordered_map<char,char> alpha_map;
 	unordered_map<char,char>::iterator itr;
 	for(int i=0;i<26;i++){
		alpha_map.insert(std::make_pair(j,M[i]));
		j++;
	}
	alpha_map.insert(std::make_pair('_',' '));
	alpha_map.insert(std::make_pair('?','?'));
	alpha_map.insert(std::make_pair('!','!'));
	
	/*for(itr=alpha_map.begin();itr!=alpha_map.end();itr++){
		cout<<itr->first<<" -- "<<itr->second<<endl;
	}
	*/

	while(T--){
		string check;cin>>check;
		char temp;
		for(int i=0;i<check.size();i++){
			if(check[i]>=65 && check[i]<=90){
				temp=check[i]+32;
				temp=alpha_map[temp]-32;
				cout<<temp;
			}
			else if(check[i]>=97 && check[i]<=122){
				temp=check[i];
				temp=alpha_map[temp];
				cout<<temp;
			}
			else if(check[i]=='_'){cout<<' ';}
			else{cout<<check[i];}
		}
		cout<<endl;
	}

 	return 0;
 }