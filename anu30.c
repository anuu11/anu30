#include <stdio.h>
 
void main()
{
  int m1,m2,h1,h2,m3,h3,timeh,timem;
printf("enter 2 time values");
scanf("%d%d",&h1,&m1);
scanf("%d%d",&h2,&m2);
timeh= (h1-h2);
timem=m1-m2;
printf("time in hours is %d hours and %d mins",timeh,timem);
}