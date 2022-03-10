#include<stdio.h>
int input_degree()
{
  int n;
  printf("enter degree of polynomial\n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("enter value of x \n");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n])
{
  printf("enter the coefficients of polynomial\n");
  for(int i=0;i<n;i++)
    {
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n,float a[n],float x)
{
  float result=a[0];
  for(int i=0;i<n-1;i++)
    {
      result=(x*result)+a[i+1];
    }
  return result;
}
void output(int n,float a[n],float x,float result)
{
  printf("%f",result);
}
int main()
{
  int n;
  float x,result;
  n=input_degree()+1;
  float a[n];
  x=input_x();
  input_coefficients(n,a);
  result=evaluate_polynomial(n,a,x);
  output(n,a,x,result);
  return 0;  
}