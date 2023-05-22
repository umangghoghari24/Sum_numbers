#include<stdio.h>
int main()
{
    int stu1,stu2,sum,sub,mul,div;
    float mod;
    
    printf("Enter the stu1 number:");
    scanf("%d",&stu1);
    printf("Enter the stu2 number:");
    scanf("%d",&stu2);

    sum=stu1+stu2;
    sub=stu1-stu2;
    mul=stu1*stu2;
    div=stu1/stu2;
    mod=div/2;

   printf("sum=%d\n",sum);
   printf("sub=%d\n",sub);
   printf("mul=%d\n",mul);
   printf("div=%d\n",div);
   printf("mod=%f",mod);
   
   return 0;
}
