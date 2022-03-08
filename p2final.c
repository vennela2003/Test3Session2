#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef _fraction Fraction
Fraction input_fraction()
{
    fraction f;
    printf("enter the fraction\n");
    scanf("%d  %d",&f.numb,&f.den);
    return f;
}
fraction find_smallest( fraction f1, fraction f2, fraction f3)
{
  int common_denominator = f1.den * f2.den* f3.den;
  int num1= f1.num *common_denominator/f1.den;
  int num2= f2.num *common_denominator/f2.den;
  int num3= f3.num *common_denominator/f3.den;
  if
}