//* Difference *//

#include<iostream>
using namespace std;
int main()
{
    double a,b,c,sum;
    cout<<"Input The Numbers:a:b:c:";
    cin>>a>>b>>c;
    if(a>=b&&b>=c)
    {
        sum=(a-b)+(b-c)+(a-c);
        cout<<sum;
    }
    else if(a>=c&&c>=b)
    {
        sum=(a-c)+(a-b)+(c-b);
        cout<<sum;
    }
    else if(b>=a&&a>=c)
    {
        sum=(b-a)+(a-c)+(b-c);
        cout<<sum;
    }
    else if(b>=c&&c>=a)
    {
        sum=(b-c)+(c-a)+(b-a);
        cout<<sum;
    }
    else if(c>=a&&a>=b)
    {
        sum=(c-a)+(a-b)+(c-b);
        cout<<sum;
    }
    else if(c>=b&&b>=a)
    {
        sum=(c-b)+(b-a)+(c-a);
        cout<<sum;
    }
}
