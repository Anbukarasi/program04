#include<stdio.h>
#include<string.h>
int main()
{
char n[100];
int d=0,i,j,l;
printf("Enter a number");
gets(num);
l=strlen(n);
for(i=0;i<l;i++)
{
d=d*10+(n[i]-'0');
}
printf("%d",d);
return 0;
}
