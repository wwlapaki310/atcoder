#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int N,X,Y;
    long long int A,B;
    int sum=0;
    int max=0;
    bool flag=true;
    string s;
    cin>>N>>X>>Y;
    vector<int> graph[N];
    map<int,int>ball;

    graph[X].push_back(Y);

    for(int i=0;i<N-1;i++){
        graph[i].push_back(i+1);
    }



    
    cout<<sum-max<<endl;


}