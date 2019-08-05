#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int T,N,K,count=0;
    cin>>N>>K;
    while(N--){
        cin>>T;
        if(T%K==0){
            count++;
        }
    }
    cout<<count<<endl;
}