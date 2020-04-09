#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int N;
    long long int A,B;
    int sum=0;
    bool flag=true;
    cin>>N;
    vector<int> a(N);
    map<int,int>ball;
    for(int i=0;i<N;i++){
        cin>>a.at(i);
        if(ball.count(a.at(i))){
            ball.at(a.at(i))=ball.at(a.at(i))+1;
        }else{
            ball[a.at(i)]=1;
        }
    }
    for(int i=0;i<N;i++){
        for(auto p:ball){
            auto key=p.first;
            auto value=p.second;
            if(key==a.at(i)){
                value=value-1;
            }
            int c=value*(value-1)/2;
            sum+=c;
        }
        cout<<sum<<endl;
        sum=0;
    }


}
