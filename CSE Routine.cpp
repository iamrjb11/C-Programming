#include<stdio.h>
int main()
{
    printf("-.-.- WELCOME -.-.-\n\nCSE Routine\n\n1.) Sunday\n2.) Monday\n3.) Tuesday\n4.) Wednesday\n5.) Thursday\n\nPlease enter your choose day ......\nComand : ");
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==1)
        {
            printf("\nToday is Sunday :\n");
            printf("\n1st Class : Discreet Mathematics   Time 8:00 - 8:50 am\n");
            printf("\n2nd Class : Object Oriented Programming Laboratory  Time : 10:50 - 1:20 pm\n");
            printf("\n3rd Class : Electrical Circuits Laboratory Time  : 2:00 - 3:20 pm\n");
        }
        else if(n==2)
        {
            printf("\nToday is Monday :\n");
            printf("\n1st Class : Object Oriented Programming Laboratory  Time : 8:50 - 9:40 am\n");
            printf("\n2nd Class : Discreet Mathematics   Time 9:40 - 10:30 am\n");
            printf("\n3rd Class : Geometry & Differential Equation Time : 11:40 - 12:30 pm\n");
            printf("\n4th Class : Physics Laboratory II Time  : 2:30 - 5:00 pm\n");
        }
        else if(n==3)
        {
            printf("\nToday is Tuesday :\n");
            printf("\n1st Class : Government & Sociology Time : 8:50 - 9:40 am\n");
            printf("\n2nd Class : Electrical Circuits Time 9:40 - 10:30 am\n");
            printf("\n3rd Class : Geometry & Differential Equation Time : 10:50 - 11:40 pm\n");
            printf("\n4th Class : Object Oriented Programming Time  : 11:40 - 12.30 pm\n");
            printf("\n5th Class : Physics II Time : 12:30 - 1:20pm\n");
            printf("\n6th Class : Engineering Drawing & CAD Project Time : 2:30 - 5:00 pm\n");
        }
        else if(n==4)
        {
            printf("\nToday is Wednesday :\n");
            printf("\n1st Class : Discreet Mathematics   Time 8:50 - 9:40 am\n");
            printf("\n2nd Class : Object Oriented Programming  Time : 9:40 - 10:30 am\n");
            printf("\n3rd Class : Electrical Circuits Time : 10:50 - 11:40 pm\n");
            printf("\n4th Class : Physics II Time  : 12:30 - 1:20 pm\n");
        }
        else if(n==5)
        {
            printf("\nToday is Thusday :\n");
            printf("\n1st Class : Discreet Mathematics   Time 9:40 - 10:30 am\n");
            printf("\n2nd Class : Object Oriented Programming Laboratory  Time : 10:50 - 1:20 pm\n");
            printf("\n3rd Class : Physics II Time : 2:30 - 3:20 pm\n");
            printf("\n4th Class : Government & Sociology Time : 3:20 - 4:10 pm\n");
            printf("\n5th Class : Electrical Circuits Time  : 4:10 - 5:00 pm\n");
        }
        else printf("\nSorry I can not serve you !!!\n");
        printf("\n\nIf you want to see more than enter :\n\nCSE Routine\n\n1.) Sunday\n2.) Monday\n3.) Tuesday\n4.) Wednesday\n5.) Thursday\nComand : ");
    }
}
