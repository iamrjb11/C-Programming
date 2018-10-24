#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter KB size : ";
    cin>>n;
    string eq[n];
    char eq_true[n];
    int eq_mat[n],true_index=0;
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

    for(int k=0;;k++){
        int index,c=0;
        //cout<<"IN"<<endl;
        for(int i=0;i<n;i++){
            if(eq_mat[i]==0){
                index=i;
            }
        }
        eq_mat[index]=11;
        //cout<<"index : "<<index;
        int len = eq[index].length();
        char point = eq[index][len-1];
        //cout<<"   point : "<<point<<endl;
        int check=0;
        for(int i=0;i<true_index;i++){
            if(point==eq_true[i]){
                check=1;
                break;
            }
        }
        if(check==0){
            eq_true[true_index]=point;
            true_index++;
        }
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
    for(int i=0;i<true_index;i++){
        cout<<eq_true[i]<<endl;
    }

    //cout<<"-> "<<eq[0][0]<<endl;
}
