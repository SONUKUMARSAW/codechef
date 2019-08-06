
//Subsequence Equality

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;cin.ignore(1,'\n');while(T--)


int main(){
    FAIO

    string inputS;
    
    bool flag;
    test_cases{
        int Array[26]={0},k=0;
        flag=false;
        cin>>inputS;
        //if(inputS.size()==1){cout<<"yes"<<endl;continue;}
        for(char I=97;I<=122;I++){
            for(int i=0;i<inputS.size();i++){
                if(inputS[i]==I) Array[k]++;
            }
            if(Array[k]>1){flag=true;}
            k++;
        }
        cout<<endl;
        if(flag){cout<<"yes"<<endl;}
        else{cout<<"no"<<endl;}
    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/