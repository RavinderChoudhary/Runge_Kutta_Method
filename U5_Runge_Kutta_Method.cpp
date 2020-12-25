#include<stdio.h>
#include<conio.h>

#define f(x,y) (y*y-x*x)/(y*y+x*x)

int main()
{
 float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
 int i, n;
 
  x0 = 0;
  y0 = 1;
  xn = 0.4;
  h = 0.2;

  n = (xn-x0)/h;

 printf("\nx0\ty0\tyn\n");
 for(i=0; i < n; i++)
 {
  k1 = h * (f(x0, y0));
  k2 = h * (f((x0+h/2), (y0+k1/2)));
  k3 = h * (f((x0+h/2), (y0+k2/2)));
  k4 = h * (f((x0+h), (y0+k3)));
  k = (k1+2*k2+2*k3+k4)/6;
  yn = y0 + k;
  printf("%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);
  x0 = x0+h;
  y0 = yn;
 }

 printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);
 return 0;
}