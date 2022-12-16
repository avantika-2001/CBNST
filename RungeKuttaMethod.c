#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x, float y)
{
    return (y*y-x*x)/(y*y+x*x);
}
void main()
{
    float x0,y0,h,xn,yn,k,k1,k2,k3,k4;
    int n;
    printf("Enter the initial condition:\n");
    printf("x0:");
    scanf("%f",&x0);
    printf("y0:");
    scanf("%f",&y0);
    printf("Enter the calculation point xn:");
    scanf("%f",&xn);
    printf("Enter the no. of steps:");
    scanf("%d",&n);
    h=(float)(xn-x0)/n;
    printf("%f",h);
    printf("x0\ty0\tk\tyn\n");
    for(int i=0;i<n;i++)
    {
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        k=(k1+2*k2+2*k3+k4)/6.0;
        yn=y0+k;
        printf("%f\t%f\t%f\t%f\n",x0,y0,k,yn);
        y0=yn;
        x0=x0+h;
    }
    printf("Estimated value at %f is %f",xn,yn);
}
