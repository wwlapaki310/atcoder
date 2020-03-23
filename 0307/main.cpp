#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    long long int N;
    long long int A,B;
    cin>>N>>A>>B;
    long long int sum=N/(A+B)*A;
    long long int amari=N%(A+B);
    if(amari>A){
        amari=amari-B;
    }
    long long ans=sum+amari;
    cout<<ans<<endl;


}
