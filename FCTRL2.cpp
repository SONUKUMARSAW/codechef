#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;cin>>T;  //Input of no of test cases
    int n;

    int temp=0,mul,m,arr[200];
    while(T--){
        cin>>n;
        arr[0]=1,m=1;
        while(n>1){
        for(int i=0;i<m;i++){
            mul=arr[i]*n+temp;
            arr[i]=mul%10;
            temp=mul/10;
        }
        if(temp>0){
            do{
                arr[m]=temp%10;
                temp/=10;
                m++;
            }while(temp>0);
        }
        n--;
        }
        for(int i=m-1;i>=0;i--)cout<<arr[i];
        cout<<endl;
    }

}