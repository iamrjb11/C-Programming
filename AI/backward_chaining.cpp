#include <bits/stdc++.h>

using namespace std;
int n,len;
int check_index[10],c_in=0;
char eq_true[10];
string eq[10];
char tar;

int check(int sz){

    //cout<<"sz : "<<sz<<"  c_in : "<<c_in<<endl;
    cout<<"Have\nEquation_TRUE"<<endl;
    for(int k=0;k<sz;k++){
        cout<<eq_true[k]<<"  ";

    }
    cout<<"\nCheck_Index "<<endl;
    for(int k=0;k<c_in;k++){
        cout<<check_index[k]<<"  ";

    }
    cout<<endl;
    int check=0,r=0,pbl=0;
    for(;;){
        for(int i=0;i<n;i++){
            pbl=0;
            for(int j=0;j<c_in;j++){
                if(check_index[j]==i){
                    pbl=1;
                }
            }
            if(pbl==0){
                len = eq[i].length();
                for(int j=0;j<len-2;j++){
                    check=0;
                    for(int k=0;k<sz;k++){
                        if(eq[i][j]==eq_true[k]){
                            check=1;
                            break;
                        }
                    }
                    if(check==0) break;
                }
                if(check==1){
                    r=1;
                    eq_true[sz]=eq[i][len-1];
                    sz++;
                    check_index[c_in]=i;
                    c_in++;

                }
                cout<<i<<". Equation_True Matrix : ";
                for(int k=0;k<sz;k++){
                    cout<<eq_true[k]<<"  ";

                }
                cout<<"\tCheck_Index : ";
                for(int k=0;k<c_in;k++){
                    cout<<check_index[k]<<"  ";

                }
                cout<<endl;

            }
        }
        cout<<endl;
        if(r==0) break;
        int br=0;
        for(int k=0;k<sz;k++){
            if(eq_true[k]==tar){
                br=1;
                break;
            }

        }
        if(br==1) break;
    }
    cout<<"r : "<<r<<endl;
return r;

}

int main()
{

    cout<<"Enter KB size : ";
    cin>>n;


    int eq_mat[n],index=0,len,true_index=0;
    for(int i=0; i<n; i++)
    {
        cin>>eq[i];
    }
    cout<<"Target : ";

    cin>>tar;
    char temp_tar=tar;
    for(int i=0;i<n;i++){
        //cout<<eq[i]<<endl;
        int len = eq[i].length();
        //cout<<len<<endl;
        if(len==3) eq_mat[i]=1;
        else if(len>3) eq_mat[i]=2;
        else{
            eq_mat[i]=0;
            check_index[c_in]=i;
            c_in++;
        }
    }
    int p=0;
    for(int k=0;k<5;k++)
    {
        for(int i=0; i<n; i++)
        {
            len = eq[i].length();
            if(temp_tar==eq[i][len-1])
            {
                index=i;
                len = eq[index].length();
                if(temp_tar==eq[index][len-1])
                {
                    cout<<temp_tar<<" -> ";
                    for(int j=len-2; j>=0; j--)
                    {
                        cout<<eq[index][j]<<"  ";
                    }
                    for(int j=len-2; j>=0; j--)
                    {
                        for(int s=0;s<n;s++){
                            int temp_l=eq[s].length();
                            if(eq[index][j]==eq[s][temp_l-1]){
                                if(eq_mat[s]==0){
                                    eq_true[true_index]=eq[index][j];
                                    cout<<"-> "<<eq_true[true_index]<<endl;
                                    true_index++;
                                    p=check(true_index);
                                    cout<<"p - "<<p<<endl;
                                    if(p==1) break;
                                }
                            }
                        }
                        cout<<"p - "<<p<<endl;
                    if(p==1) break;
                    }
                    cout<<"p - "<<p<<endl;
                    if(p==1) break;
                    cout<<endl;

                }

            }

        }
        if(p==1) break;
        temp_tar=eq[index][0];



    }
}
