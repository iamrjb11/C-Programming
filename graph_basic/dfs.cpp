#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100];
int visited[100];

void dfs(int node,int target,int lim)
{
    if(node == target)
    {
        cout<<"FOUND"<<endl;
        return;
    }
    if(lim <= 0) return;
    visited[node] = 1;
    for(int j=0;j<(int)graph[node].size();++j)
    {
        int x = graph[node][j];
        if(visited[x] == 0)
        {
            dfs(x,target,lim-1);
        }
    }
}

void IDS()
{
    for(int i=1;i<=20;++i)
    {
        memset(visited,0,sizeof visited);
        cout<<"LIMIT : "<<i<<" : ";
        dfs(0,6,i);
        cout<<endl;
    }
}

int main()
{
    cout<<"Cool"<<endl;
    freopen("in.txt","r",stdin);
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;++i)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=0;i<n;++i)
    {
        cerr<<"node "<<i<<" : ";
        for(int j=0;j<(int)graph[i].size();++j)
        {
            cerr<<graph[i][j]<<" ";
        }
        cerr<<endl;
    }
    IDS();
    // dfs(0,7);
}