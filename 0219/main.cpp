#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    int N;
    int sum=0;
    string s;
    cin>>N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
    }
    bool flag=true;
    while(flag){
        for(int j=0;j<N;j++){
            if(A.at(j) % 2==1){
                flag=false;
                break;
            }
            A.at(j)=A.at(j)/2;
        }
        if(flag==true)sum+=1;
    }

    cout<<sum<<endl;
}