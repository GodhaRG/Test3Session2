#include<stdio.h>
int input_size()
{
  int x;
  printf("enter size of the array\n");
  scanf("%d",&x);
  return x;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n,int a[n])
{
  int largest=a[0],id=0;
  for(int i=0;i<n;i++)
    {
      if(largest<a[i])
      {
        id =i;
        largest=a[i];
      }
    }
  return largest;
}
void output(int n,int a[n],int largest)
{
  printf("the largest number is %d\n",largest);
}
int main()
{
  int s,n,largest;
  s=input_size();
  int a[n];
  input_array(n,a);
  largest=find_largest(n,a);
  output(n,a,largest);
  return 0;
}