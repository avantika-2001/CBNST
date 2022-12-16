#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x, float y)
{
    return x+y;
}
void main()
{
    float x0,y0,h,xn,yn,func;
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
    printf("x0\ty0\tfunc\tyn\n");
    for(int i=0;i<n;i++)
    {
        func=f(x0,y0);
        yn=y0+h*func;
        printf("%f\t%f\t%f\t%f\n",x0,y0,func,yn);
        y0=yn;
        x0=x0+h;
    }
    printf("Estimated value at %f is %f",xn,yn);
}
