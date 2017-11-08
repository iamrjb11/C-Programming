
#include<iostream>
using namespace std;
int main()
{
    int gcd,lcm,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>gcd>>lcm;
        if(lcm%gcd==0)
        cout<<gcd<<" "<<lcm<<endl;
        else
        cout<<"-1"<<endl;
    }
return 0;
}
