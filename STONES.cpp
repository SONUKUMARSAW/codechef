#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    string S,J;
    int count,len_J,len_S;
    test_cases{
        cin>>J>>S;
        count=0;
        len_J=J.length();
        len_S=S.length();
        set<char> Jewel(J.begin(),J.end());
        for(int i=0;i<len_S;i++){
            if(Jewel.count(S[i]))count++;
        }
        
        cout<<count<<endl;
    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/