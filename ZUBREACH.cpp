#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    int M,N,Rx,Ry,Cx,Cy;
    int len,x=0;
    string pathsequence;    
    test_cases{
        x++;
        cin>>M>>N>>Rx>>Ry>>len;
        Cx=0;Cy=0;
        cin.ignore();
        cin>>pathsequence;

        for(int i=0;i<len;i++){
            if(pathsequence[i]=='U'){
                Cy++;
            }
            else if(pathsequence[i]=='D'){
                Cy--;
            }
            else if(pathsequence[i]=='R'){
                Cx++;
            }
            else if(pathsequence[i]=='L'){
                Cx--;
            }
        }
        if(Cx>M||Cx<0 || Cy>N||Cy<0){cout<<"Case "<<x<<": DANGER"<<endl;}
        
        else if(Rx==Cx && Ry==Cy){cout<<"Case "<<x<<": REACHED"<<endl;}
        else{cout<<"Case "<<x<<": SOMEWHERE"<<endl;}

    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/