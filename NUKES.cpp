#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    int A,N,K;
    cin>>A>>N>>K;
    for(int i=0;i<K;i++){
        cout<<A%(N+1)<<" ";
        A/=(N+1);
    }
    cout<<endl;
    //test_cases{
  
    //}

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/