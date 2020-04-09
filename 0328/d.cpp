#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
// 深さ優先探索
vector<bool> seen;

void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]){
            continue; // next_v が探索済だったらスルー
        }
        dfs(G, next_v); // 再帰的に探索
    }
    return 

}

int main(){
    long long int N,X,Y;
    long long int A,B;
    int sum=0;
    int max=0;
    bool flag=true;
    string s;
    cin>>N>>X>>Y;
    Graph G(N);
    //vector<int> graph[N];
    vector<int> K(N);

    G[X].push_back(Y);

    for(int i=0;i<N;i++){
        if(i<N-1){
            G[i].push_back(i+1);
        }
        if(i>0){
            G[i].push_back(i-1);
        }
    }
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    dfs(G, 0);

    for(int k=0;k<N-1;k++){
        if(k==0){
            K.at(k)=N;
        }
        if(k>0){
            graph[i]
            for(int i=0;i<N;i++){

            }
        }
        cout<<K.at(k)<<endl;
    }

}