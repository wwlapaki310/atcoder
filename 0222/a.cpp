//#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,t,u;
    int N,K;
    cin>>N>>K;
    bool flag=true;
    int sum=K;
    int i=0;

    while(flag){
        sum*=K;
        i++;
        if(sum>N){
            cout<<i-1<<endl;
        }
    }
}