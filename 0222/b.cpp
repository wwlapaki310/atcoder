//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    string s,t,u;
    int N,K;
    int sum=0;
    cin>>N;
    vector<int>X(N);
    for(int i=0; i<N; i++){
        cin>>X.at(i);
    }
    int cost=0;
    int mincost=10000000;
    /*
    int ave=int(sum/N);
    int cost=0;
    for(int i=0;i<N;i++){
        cost+=int(pow((X.at(i)-ave),2));
    }
    cout<<cost<<endl;
    */

    sort(X.begin(),X.end());
    //for(int j=X.at(0);j<X.at(N-1);j++)
    for(int j=1;j<101;j++)
    {
        for(int k=0;k<N;k++){
            cost+=int(pow((X.at(k)-j),2));
        }
        if(cost<mincost){
            mincost=cost;
        }
        cost=0;
    }
    cout<<mincost<<endl;

}