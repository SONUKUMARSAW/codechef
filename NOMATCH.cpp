#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    lli N;
    lli sum;
    test_cases{
        sum=0;
        cin>>N;
        lli arrayA[N];
        for(int i=0;i<N;i++){
            cin>>arrayA[i];
        }
        sort(arrayA,arrayA+N);
        
        lli i=0,j=N-1;
        while(i<j){
            sum+=arrayA[j]-arrayA[i];
            i++;j--;
        }
        cout<<sum<<endl;
    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/