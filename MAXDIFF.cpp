#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO
    int K,N,sum,sum1,sum2;                                                                                                                       
    test_cases{
        cin>>N>>K;
        int weight[N];
        sum=sum1=0;
        for(int i=0;i<N;i++){
            cin>>weight[i];
            sum+=weight[i];
        }
        sort(weight,weight+N);
        K=min(K,N-K);
        for(int i=0;i<K;i++){
            sum1+=weight[i];
        }
        sum2=sum-2*sum1;
        cout<<sum2<<endl;
    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/