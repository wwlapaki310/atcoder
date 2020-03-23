#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    long long int N;
    long long int A,B;
    cin>>A>>B;
    int eight=(A*25+1)/2;
    int ten=B*10;
    int minn=max(eight,ten);
    while(true){
        int a=minn*8/100;
        int b=minn*10/100;
        if(a==A && b==B){
            cout<<minn<<endl;
            break;
        }else if(a!=A && b!=B){
            cout<<"-1"<<endl;
            break;
        }else{
            minn++;
        }
    }
}