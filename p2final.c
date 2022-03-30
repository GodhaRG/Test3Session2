#include<stdio.h>
struct _fraction
{
float num,den;
};
typedef struct  _fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("input a fraction\n");
  scanf("%f%f",&f.num,&f.den);
  return f;
}
Fraction Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  float s1,s2,s3;
  Fraction largest;
  s1=f1.num/f1.den;
  s2=f2.num/f2.den;
  s3=f3.num/f3.den;
  if(s1<s2&&s1<s3)
  {
    largest.num=f1.num;
    largest.den=f1.den;
  }
  else if(s2<s3&&s2<s1)
  {
    largest.num=f2.num;
    largest.den=f2.den;
  }
  else
  {
    largest.num=f3.num;
    largest.den=f3.den;
  }
  return largest;
} 
 
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  printf("the smallest of the three fractions is   %f / %f\n", largest.num,largest.den);
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