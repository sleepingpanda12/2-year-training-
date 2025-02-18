#include <stdio.h>
int main()
{
    int n,base=100;
    float surcharge,total_bill;
    char name,id;
    printf("Enter the customer name and id:\n");
    scanf("%s %s",&name,&id);
    printf("Enter the number of units:\n");
    scanf("%d",&n);
    if(n<100&&n>0)
    {
        base+=n*5;
    }
    else if(n>101&&n<=300)
    {
        base+=((n-200)*7);
    }
    else
    {
        base+=((n-300)*10);
    }
    if(base>1000)
    {
        surcharge=(base/100)*0.05;
    }
    
    total_bill=base+surcharge;
    printf("Electricity Bill\n");
    printf("Name=%s\n",name);
    printf("ID=%s\n",id);
    printf("Base bill=%d\n",base);
    printf("Surcharge:%f\n",surcharge); 
    printf("Total=%f\n",total_bill);
    return 0;
}