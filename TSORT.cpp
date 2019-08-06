#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    vector<lli> array;
    lli num,n,length;
    
   // test_cases{
        cin>>n;length=n-1;
        while(n--){
            cin>>num;
            array.push_back(num);
        }
        sort(array.begin(),array.end());
        for(lli i=0;i<=length;i++){
            cout<<array[i]<<endl;
        }
        
        array.clear();
    //}

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/