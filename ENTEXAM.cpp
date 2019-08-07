#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    int N,K,E,M;
    long long int temp,sum=0;
    int seat;
    long long int marks_of_Sergery = 0,marks_required_by_Sergery;
    vector<long long int> Marks;
    test_cases{
        cin>>N>>K>>E>>M;
        for(int i=0;i<N-1;i++)
        {
            for(int j=0;j<E;j++){
                cin>>temp;
                sum+=temp;
            }
            Marks.push_back(sum);sum=0;
        }
        for(int i=0;i<E-1;i++){cin>>temp;marks_of_Sergery+=temp;}
        
        sort(Marks.begin(),Marks.end(),greater<int>());
        seat=N-K-1;
        marks_required_by_Sergery=Marks[seat]+1-marks_of_Sergery;
       
        marks_required_by_Sergery=max(0LL,marks_required_by_Sergery);
        if(marks_required_by_Sergery>M){cout<<"Impossible"<<endl;continue;}
        cout<<marks_required_by_Sergery<<endl;

        //clear the variables for next input TestCase;
        Marks.clear();
        sum=0;marks_of_Sergery=0;marks_required_by_Sergery=0;
    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/