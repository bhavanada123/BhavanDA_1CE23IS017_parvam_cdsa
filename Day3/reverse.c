#include<stdio.h>
int main() {
    int no=0,s=0,t=0;
    printf("enter the number of reverse");
    scanf("%i",&no);
    t=0;
    while(no>0)
    {
        s=(s*10)+(no*10);
        no/=10;
    }
    printf("%d---%d",t,s);
    return 0;
}