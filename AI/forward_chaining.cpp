#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter KB size : ";
    cin>>n;
    string eq[n];
    char eq_true[n];
    int eq_mat[n],true_index=0,out_sts;
    for(int i=0;i<n;i++){
        cin>>eq[i];
    }
    cout<<"Target : ";
    char tar;
    cin>>tar;

    for(int i=0;i<n;i++){
        //cout<<eq[i]<<endl;
        int len = eq[i].length();
        //cout<<len<<endl;
        if(len==3) eq_mat[i]=1;
        else if(len>3) eq_mat[i]=2;
        else eq_mat[i]=0;
    }
    /*cout<<"Mat"<<endl;
    for(int i=0;i<n;i++){
        cout<<eq_mat[i]<<"  ";
    }
    */
    for(int k=0;;k++){
        int index,c=0;
        //cout<<"IN"<<endl;
        for(int i=0;i<n;i++){
            if(eq_mat[i]==0){
                index=i;
                c=1;
            }

        }
        if(c==0){
            out_sts=0;
            break;
        }
        ///equation matrix value updated
        eq_mat[index]=11;
        //cout<<"index : "<<index;
        int len = eq[index].length();
        char point = eq[index][len-1]; ///right side value P^Q=>L eikhane L value bujano hoyese
        //cout<<"   point : "<<point<<endl;
        int check=0;
        for(int i=0;i<true_index;i++){ /// check korsi je age ei point ta insert kora hoyese ki nahh
            if(point==eq_true[i]){
                check=1;
                break;
            }
        }
        if(check==0){
            eq_true[true_index]=point;
            true_index++;
        }
        ///Target value pele loop break
        if(point==tar){
            out_sts=1;
            break;
        }

        for(int i=0;i<n;i++){
            len = eq[i].length();
            for(int j=0;j<(len-2);j++){

                if(point == eq[i][j]){
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

        /*cout<<"Mat"<<endl;
        for(int i=0;i<n;i++){
            cout<<eq_mat[i]<<"  ";
        }
        cout<<endl;
        */


    }
    cout<<"Output : "<<endl;
    for(int i=0;i<true_index;i++){
        cout<<(i+1)<<" : "<<eq_true[i]<<endl;
    }
    if(out_sts==1) cout<<"\nFOUND"<<endl;
    else cout<<"\nNOT FOUND"<<endl;

    //cout<<"-> "<<eq[0][0]<<endl;
}
