#include <stdio.h>
void input(int *num1,int *den1,int *num2,int*den2)
{
  printf("enter one fraction\n");
  scanf("%d %d",num1,den1);
  printf("enter the other fraction\n");
  scanf("%d %d",num2,den2);
}
int gcd(int den1,int den2)
{
  int t;
  while(den2!=0)
    {
      t=den2;
      den2=den1%den2;
      den1=t;
    }
  return den1;
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
*num3=num1*den2+num2*den1;
  *den3=den1*den2;
  int g = gcd(*num3,*den3);
  *num3=*num3/g;
  *den3=*den3/g;
  }
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf(" %d/%d + %d/%d= %d/%d\n",num1,den1,num2,den2,num3,den3 );
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}