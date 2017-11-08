#include<stdio.h>
int main()
{
    int lx,ly,ux,uy,midx,midy,r;
    float chx,chy,chr;
    int T;
    scanf("%d",&T);
    while(T--&&T<=100)
    {
        scanf("%d %d %d %d %d %d %d",&lx,&ly,&ux,&uy,&midx,&midy,&r);
        if(r>1000) break;
        chx=(float) (uy+midy)/2;
        chy=(float) uy/2;
        chr=(float) (ux-uy);
        ux=ux-lx;
        uy=uy-ly;
        midx=midx-lx;
        midy=midy-ly;
        chx=(float) (uy+midy)/2;
        chy=(float) uy/2;
        chr=(float) (ux-uy)/2;

        //printf("(%d+%d)/2=%f , %d/2=%f\n",uy,midy,chx,uy,chy);
        if(chx==midx&&chy==midy&&chr==r) printf("YES\n");
        else printf("NO\n");
    }
}
