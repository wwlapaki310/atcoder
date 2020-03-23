#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int N;
    long long int A,B;
    string s;
    bool flag=true;
    cin>>s;
    N=s.size();
    string sv=s;
    reverse(sv.begin(),sv.end());
    if(s!=sv)flag=false;

    for(int i=0;i<(N-1)/2/2;i++){
        int i_sita=i;
        int i_ue=(N-1)/2-1-i;
        if(s.at(i_sita)!=s.at(i_ue)){
            flag=false;
        }
    }
    for(int i=0;i<(N-1)/2/2;i++){
        int i_sita=i+(N+1)/2;
        int i_ue=N-1-i;
        if(s.at(i_sita)!=s.at(i_ue)){
            flag=false;
        }
    }

    if(flag==true)cout<<"Yes"<<endl;
    else{cout<<"No"<<endl;}


}
