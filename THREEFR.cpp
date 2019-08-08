#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    int X,Y,Z;
    bool flag=false;
    test_cases{
        cin>>X>>Y>>Z;
        int max1 = X>Y?X:Y;
        max1=max(max1,Z);
        if(max1*2==X+Y+Z){cout<<"yes"<<endl;}
        else{cout<<"no"<<endl;}
    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/