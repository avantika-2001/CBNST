#include<stdio.h>
#include<conio.h>
int main()
{
    float x[100],y[100];
    float xp,yp=0,p;
    int n;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    printf("Enter the values of x and y:\n");
    for(int i=1;i<=n;i++)
    {
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("y[%d]=",i);
        scanf("%f",&y[i]);
    }
    printf("Enter the value of xp:");
    scanf("%f",&xp);
    for(int i=1;i<=n;i++)
    {
        p=1;
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                p=p*(xp-x[j])/(x[i]-x[j]);
            }
        }
        yp+=p*y[i];
    }
    printf("Interpolated value at %f : %f",xp,yp);
    return 0;
}
