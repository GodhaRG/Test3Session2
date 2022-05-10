#include<stdio.h>
int input_size()
{
  int n;
  printf("enter size of the array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter the numbers\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n,int a[n])
{
  int largest=a[0],id=0;
  for(int i=1;i<n;i++)
    {
      if(largest<a[i])
      {
        largest=a[i];
        id =i;
      }
    }
  return id;
}
void output(int n,int a[n],int largest)
{
  printf("the index of the largest number amon[");
  for(int i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
  printf("] is %d",largest);
}
int main()
{
  int n,largest;
  n=input_size();
  int a[n];
  input_array(n,a);
  largest=find_largest(n,a);
  output(n,a,largest);
  return 0;
}