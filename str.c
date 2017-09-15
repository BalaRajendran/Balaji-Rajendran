#include<stdio.h>
#include<string.h>
void main()
{
int len,i;
char ch[30];
scanf("%s",&ch);
len=strlen(ch);
for(i=len-1;i>=0;i--)
{
    printf("%c",ch[i]);
}
getch();
}
