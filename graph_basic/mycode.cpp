#include<bits/stdc++.h>
using namespace std;

vector<int>g[100];
int vis[100], path[100],c=0;
void dfs(int node,int target){
    cout<<"IN-"<<node<<" "<<target<<endl;
    vis[node] = 1;
    path[c]=node;
    c++;
    if(node == target){
        cout<<"Found"<<endl<<"Path : ";
        for(int i=0;i<c-1;i++){
            cout<<path[i]<<endl;
        }
        return;
    }
    for(int i=0;i<(int)g[node].size();i++){
        int x=g[node][i];
        if(vis[x] == 0){   
            dfs(x,target);
        }
    }

}


int main(){
    freopen("in.txt","r",stdin);
    int n,e,u,v;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    //cout<<"Test : "<<g[0][0]<<endl;
    for(int i=0;i<n;i++){

        cout<<"Node - "<<i<<" - "<<(int)g[i].size()<<" - ";
        for(int j=0;j<(int)g[i].size();j++){
            cout<<g[i][j]<<" "; 
        }
        cout<<endl;
    }
    int src,tar;
    //cin>>src>>tar;
    //dfs(src,tar);
    dfs(0,7);
}