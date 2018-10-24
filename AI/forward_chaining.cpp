#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter KB size : ";
    cin>>n;
    string eq[n];
    string eq_true[n];
    int eq_mat[n];
    for(int i=0;i<n;i++){
        cin>>eq[i];
    }
    cout<<"Target : ";
    char tar;
    cin>>tar;

    for(int i=0;i<n;i++){
        cout<<eq[i]<<endl;
        int len = eq[i].length();
        //cout<<len<<endl;
        if(len==3) eq_mat[i]=1;
        else if(len>3) eq_mat[i]=2;
        else eq_mat[i]=0;
    }
    cout<<"Mat"<<endl;
    for(int i=0;i<n;i++){
        cout<<eq_mat[i]<<"  ";
    }

    for(int k=0;k<11;k++){
        int index,c=0;
        //cout<<"IN"<<endl;
        for(int i=0;i<n;i++){
            if(eq_mat[i]==0){
                index=i;
            }
        }
        eq_mat[index]=11;
        cout<<"index : "<<index;
        int len = eq[index].length();
        char point = eq[index][len-1];
        cout<<"   point : "<<point<<endl;
        if(point==tar) break;
        for(int i=0;i<n;i++){
            len = eq[i].length();
            for(int j=0;j<(len-2);j++){

                if(point == eq[i][j]){
                    //if(eq_mat[i]!=0) eq_mat[i]=eq_mat[i]-1;
                    for(int k=0;k<n;k++){
                        int temp = eq[k].length();
                        if(eq[k][temp-1] == eq[i][len-1]){
                            if(eq_mat[k]!=0) eq_mat[k]=eq_mat[k]-1;
                        }
                    }
                    break;
                }
            }
        }

        cout<<"Mat"<<endl;
        for(int i=0;i<n;i++){
            cout<<eq_mat[i]<<"  ";
        }
        cout<<endl;
    }

    //cout<<"-> "<<eq[0][0]<<endl;
}
