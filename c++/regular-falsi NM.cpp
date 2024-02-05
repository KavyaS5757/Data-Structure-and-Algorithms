#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    printf("Enter A and B");
    scanf("%lf %lf",&a,&b);

    double fA,fB,fC;
    double error;

    for(int i=0;i<4;i++)
    {
        fA = pow(a,3)-(2*a)-5;
        fB = pow(b,3)-(2*b)-5;
        c = ((a*fB)-(b*fA))/(fB-fA);
        fC = pow(c,3)-(2*c)-5;
        printf("Function of f(A) is %lf\n",fA);
        printf("Function of f(B) is %lf\n",fB);
        printf("Function of f(C) is %lf\n",fC);

        if(fA*fC < 0)
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
        printf("The error is %lf\n",error);
    }

    printf("The approximate value of root is %lf\n",c);
}