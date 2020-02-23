//#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,t,u;
    int a,b;
    cin>>a>>b;

    if(a>=10){
        cout<<b<<endl;
    }
    else{
        cout<<b+100*(10-a)<<endl;
    }
}