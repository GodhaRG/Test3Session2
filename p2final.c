#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct  _fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("input a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  
  
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  printf("the smallest of the three fractions is   %d / %d\n", largest.num,largest.den);
}
int main()
{
Fraction f1, f2, f3,  largest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  largest=Largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
  return 0;
}
