#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    string S;int N,temp;
    test_cases{
        cin>>N;
        cin.ignore();
        cin>>S;
        if(N%2==1){temp=N-2;}else{temp=N-1;}
        //step 1 
        for(int i=0;i<temp;i+=2){
            swap(S[i],S[i+1]);
        }
       
        //dtep 2
        for(int i=0;i<N;i++){
            S[i]='z'+('a'-S[i]);
        }
        for(int i=0;i<N;i++){
            cout<<S[i];
        }
        cout<<endl;



    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/