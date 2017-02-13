#include <stdio.h>
int main(){
int i, j, *p, *q;
// The following line means i=5; j=i;
j=(i=5);
// The following line means the logical value of i==4 will be assigned to j. That is, if i is equal to 4, then j=1; otherwise j=0; 
j=(i==4);
printf("%d %d\n", i, j);
j=++i;
printf("%d %d\n", i, j);
j=i--;
printf("%d %d\n", i, j);
p=&i;
printf("%d %d\n", i, j);
q=&j;
printf("%d %d\n", i, j);
*p=3;
printf("%d %d\n", i, j);
*q=*p+1;
printf("%d %d\n", i, j);
i=8;
printf("%d %d\n", i, j);
j=9;
printf("%d %d\n", i, j);
(*p)++;
printf("%d %d\n", i, j);
(*q)++;
printf("%d %d\n", i, j);
q=p;
printf("%d %d\n", i, j);
(*q)--;
printf("%d %d\n", i, j);
return 0;
}