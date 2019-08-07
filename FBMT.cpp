#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)

int main(){
    FAIO

    int n;
    test_cases{
       
        cin>>n;
        string array[n];
        string temp;
        int count=0;
        cin.ignore();
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        for(int i=0;i<n;i++){
            if(array[i]==array[0])count++;
            else{temp=array[i];}
        }
        if((n-count)==count)cout<<"Draw"<<endl;
        else if((n-count)>count)cout<<temp<<endl;
        else cout<<array[0]<<endl;

    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/