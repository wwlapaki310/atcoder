#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    int N,M;
    int sum=0;
    bool flag=true;
    cin>>N>>M;
    vector<int>a(N);
    if(N<1 || N>3){flag=false;}
    if(M<0 || M>5){flag=false;}
    for(int i=0;i<N;i++){
        a.at(i)=-1;
    }
    vector<int>s(M);
    vector<int>c(M);
    for(int j=0;j<M;j++){
        cin>>s.at(j)>>c.at(j);
    }
    for(int i=0;i<M;i++){
        int keta=s.at(i)-1;
        int naka=c.at(i);
        if(N>1 && keta==0 && naka==0){
            flag=false;
        }
        if(a.at(keta)==-1){
            a.at(keta)=naka;
        }else if(a.at(keta) !=naka){
            flag=false;
        }

    }
    
    if(flag==true){
        for(int i=0;i<N;i++){
            if(a.at(i) !=-1){
                cout<<a.at(i);
            }
            else{
                if(i==0 && N>1){cout<<"1";}else{
                cout<<"0";}
            }
        }
        cout<<""<<endl;
    }
    else{
        int g=-1;
        cout<<g<<endl;
    }
    
}