#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return 1/(1+x*x);   //function
}
void main()
{
    float x0,xn,h,n;
    printf("Enter the number of intervals:");
    scanf("%f",&n);
    printf("Enter upper limit:");
    scanf("%f",&xn);
    printf("Enter lower limit:");
    scanf("%f",&x0);
    h=abs(xn-x0)/n;
    //printf("%f",h);
    float s1=f(x0)+f(xn);
    float s2=0.0;
    for(int i=1;i<n;i++)
    {
        s2+=2*f(x0+i*h);
    }
    float ans=h*(s1+s2)/2.0;
    printf("Result after integration:%6.4f",ans);
}
