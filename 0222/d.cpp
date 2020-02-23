//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int c_cali(long long int n,long long int k){
    unsigned long long int ue=1;
    unsigned long long int sita=1;
    unsigned long long int kari;
    for(long long int i=0;i<k;i++){
        ue*=n-k+1+i;
        sita*=i+1;
    }
    kari=ue/sita;
    return kari;
}

int main(){
    long long int N,K;
    unsigned long long int sum=0;
    long long int a,b;
    int sent=0;
    cin>>N>>a>>b;

    for(int i=1;i<N+1;i++){
        if(i !=a and i!=b){
            sum+=c_cali(N,i);
            cout<<sum<<endl;
        }
    }
    unsigned long long int wari=1000000000+7;
    unsigned long long int oo=sum%wari;

    cout<<oo<<endl;

}