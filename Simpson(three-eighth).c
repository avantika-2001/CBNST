#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return 1/(1+x*x);   //function
}
void main()
{
    float x0,xn,h;
    int n;
    printf("Enter the number of intervals:");
    scanf("%d",&n);
    printf("Enter upper limit:");
    scanf("%f",&xn);
    printf("Enter lower limit:");
    scanf("%f",&x0);
    h=(float)(xn-x0)/n;
    //printf("%f",h);
    if(n%3!=0)
    {
        n-=n%3;
    }
    h=(float)(xn-x0)/n;
    float s1=f(x0)+f(xn);
    float s2=0.0;
    float s3=0.0;
    for(int i=1;i<n;i++)
    {
        if(i%3==0)
        {
            s2+=f(x0+i*h);
        }
        else
        {
            s3+=f(x0+i*h);
        }
    }
    float ans=3*h*(s1+2*s2+3*s3)/8;
    printf("Result after integration:%6.4f",ans);
}
