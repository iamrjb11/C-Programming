#include<stdio.h>
int main()
{
    int T,cas=1;
    scanf("%d",&T);
    int d1,d2,m1,m2,y1,y2,sum_d,sum_m,sum_y;
    while(T--)
    {
        if(T<0||T>=200) break;
        scanf("%d/%d/%d",&d2,&m2,&y2);
        scanf("%d/%d/%d",&d1,&m1,&y1);
        sum_d=d2-d1;
        sum_m=m2-m1;
        sum_y=y2-y1;
        if((sum_y<0)||(sum_y==0&&(sum_d<0||sum_m<0))) printf("Case #%d: Invalid birth date\n\n",cas);
        else if(sum_y>130) printf("Case #%d: Check birth date\n\n",cas);
        else if(sum_m<0) printf("Case #%d: %d\n\n",cas,sum_y-1);
        else if((sum_d<0&&sum_m<=0)) printf("Case #%d: %d\n\n",cas,sum_y-1);
        else printf("Case #%d: %d\n\n",cas,sum_y);
        cas++;
    }
}
