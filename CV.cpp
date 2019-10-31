#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)

bool vowel_check(char a){
    bool flag;
    switch (a)
    {
    case 'a':
        flag = true;
        break;
    case 'e':
        flag = true;break;
    case 'i':
        flag = true;break;
    case 'o':
        flag = true;break;
    case 'u':
        flag = true;break;
    default:
        flag = false;break; 
        break;
    }
    return flag;
}
int main(){
    FAIO

    string S;
    int N,count=0;
    bool check1,check2;
    test_cases{
        cin>>N;cin.ignore();
        cin>>S;
        for(int i=0;i<N;i++){
            check1=vowel_check(S[i]);
            check2=vowel_check(S[i+1]);
           
            if(!check1 && check2){count++;}
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
