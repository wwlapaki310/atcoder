#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    string s;
    long long int Q;
    cin>>s;
    cin>>Q;
    int first_t;
    int second_f;
    int reverse_count=1;
    string third_c;
    string top="";
    string bottom="";
    for(int i=0;i<Q;i++){
        cin>>first_t;
        if(first_t==1){
            reverse_count++;
            swap(top,bottom);
            reverse(top.begin(),top.end());
            reverse(bottom.begin(),bottom.end());
        }else{
            cin>>second_f>>third_c;
            if(second_f==1){
                top=third_c+top;
            }else{
                bottom=bottom+third_c;
            }
        }
    }
    if(reverse_count%2==1){
        reverse(s.begin(),s.end());
    }
    s=top+s+bottom;
    cout<<s<<endl;


}