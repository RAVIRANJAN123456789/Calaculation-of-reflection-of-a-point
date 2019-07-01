#include<stdio.h>
struct Point
{
    int x;
    int y;

};
struct Point reflection()
{
    struct Point p1,m,r;
    printf("\n enter the 1st point x1\n ");
    scanf("%d,",&p1.x);
    printf("\n enter the 1st point y1\n ");
    scanf("%d,",&p1.y);

    printf("\n enter the mirror point mx1 \n ");
    scanf("%d",&m.x);
    printf("\n enter the mirror point my1 \n ");
    scanf("%d",&m.y);

    r.x=2*m.x-p1.x;
    r.y=2*m.y-p1.y;
    printf("\n %d is the x coordinate of reflection point \n",r.x);
    printf("\n %d is the y coordinate of reflection point \n",r.y);
    return r;
}
int main()
{
    int t;int i;
    printf("\n enter the number of test cases \n");
    scanf("%d",&t);
    for(i=0;i<t;i++)
      reflection();
    return 0;
}
