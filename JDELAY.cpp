
//Judging Delay

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    int count=0, N,S,J;
    test_cases{
        cin>>N;
        while(N--){
            cin>>S>>J;
            if((J-S)>5) count++;
        }
        cout<<count<<endl;
        count=0;
    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/