
#include<bits/stdc++.h>

using namespace std;

#define N 10000
#define INF 10000

int arr[N];

int depth, bf;

int minmax(int d, int idx, int alpha, int beta);

int maxmin(int d, int idx, int alpha, int beta){
    if(d == depth) return arr[idx];

    int best = -INF;

    for(int i=0;i<bf;++i){
        int value = minmax(d+1, idx * bf + i , alpha, beta);
        best = max(best, value);
        alpha = max(alpha,best);
        if(beta <= alpha) break;
        cout<<"R\n";
    }

    return best;
}

int minmax(int d, int idx, int alpha, int beta){
    if(d == depth) return arr[idx];

    int best = INF;

    for(int i=0;i<bf;++i){
        int value = maxmin(d+1, idx * bf + i , alpha, beta);
        best = min(best, value);
        beta = min(beta,best);
        cout<<"-> "<<best<<endl;

        if(beta <= alpha) break;
    }


    return best;
}

int main(){

    srand(time(NULL));

    cout<<"Enter Depth : "; cin>>depth;
    cout<<"Enter Branching Factor : "; cin>>bf;

    int total = pow(bf, depth);

    cout<<"Random leaf nodes : "<<total<<endl;

    for(int i=0; i< total ; ++i){
        arr[i] = rand() % 10 + 1;
        if(i) cout<<" ";
        cout<<arr[i];
    }
    cout<<endl;

    int res = maxmin(0,0,INF,-INF);

    cout<<"Result = "<<res<<endl;
}
