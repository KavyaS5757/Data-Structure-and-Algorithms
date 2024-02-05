#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c;
    printf("Enter A and B");
    scanf("%lf %lf",&a,&b);
    
    double fA,fB,fC;
    double error;

    for(int i=0;i<10;i++)
    {
        fA = cos(a)-(a*exp(a));
        fB = cos(b)-(b*exp(b));
        c=(a+b)/2;
        fC = cos(c)-(c*exp(c));
        printf("function of f(A) is %lf\n",fA);
        printf("function of f(B) is %lf\n",fB);
        printf("function of f(C) is %lf\n",fC);

        if((fA*fC)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }

        printf("Value of A is %lf\n",a);
        printf("Value of B is %lf\n",b);
        printf("value of C is %lf\n",c);

        error = fabs(b-a);
        printf("Error is %lf\n",error);
    }

    

    printf("Approximate root:%lf\n",c);
    return 0;
}