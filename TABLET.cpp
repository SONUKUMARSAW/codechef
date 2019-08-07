#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    int N,B,W,H,P,Area;
    
    test_cases{
        cin>>N>>B;
        pair<int,int> TabletAreaPrice[N];
        for(int i=0;i<N;i++){
            cin>>W>>H>>P;
            Area=W*H;
            TabletAreaPrice[i].first=Area;
            TabletAreaPrice[i].second=P;
        }
        sort(TabletAreaPrice,TabletAreaPrice+N);
        bool flag=true;
        for(int i=N-1;i>=0;i--){
           
             if(TabletAreaPrice[i].second<=B){
                flag=false;cout<<TabletAreaPrice[i].first<<endl;break;
           }
        }
        if(flag){
             cout<<"no tablet"<<endl;
        }
        


    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/