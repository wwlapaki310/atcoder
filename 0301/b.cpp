#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    int N;
    int sum=0;
    vector<int> a(9);
    for(int i=0;i<9;i++){
        cin>>a.at(i);
    }
    cin>>N;
    vector<int>b(N);
    for(int j=0;j<N;j++){
        cin>>b.at(j);
        int kari=b.at(j);
        for(int i=0;i<9;i++){
            if(kari==a.at(i)){
                a.at(i)=0;
            };
        }
    }
    if((a.at(0)==a.at(1)==a.at(2)==0)||(a.at(3)==a.at(4)==a.at(5)==0)||(a.at(6)==a.at(7)==a.at(8)==0)||(a.at(0)==a.at(3)==a.at(6)==0)||(a.at(1)==a.at(4)==a.at(7)==0)||(a.at(2)==a.at(5)==a.at(8)==0)||(a.at(0)==a.at(4)==a.at(8)==0)||(a.at(2)==a.at(4)==a.at(6)==0))
    {
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


}