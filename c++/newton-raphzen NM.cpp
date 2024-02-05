#include<stdio.h>
#include<math.h>

int main()
{
    double x0,x1,prevx1;
    printf("Enter the number");
    scanf("%lf",&x0);

    double fx0,fx01;
    double error;

    for(int i=0;i<5;i++)
    {
        fx0 = (2*pow(x0,3))+pow(x0,2)-1;
        printf("The value of function is %lf\n",fx0);
        fx01 = (6*pow(x0,2))+(2*x0);
        printf("The value of derivative of function is %lf\n",fx01);
        x1 = x0 - (fx0/fx01);
        printf("The value of x1 is %lf\n",x1);

        if(i>0 && fabs(x1-prevx1)<0.0001)
        {
            printf("Convergence acheived\n");
            break;
        }
        
            prevx1 = x1;
            x0 = x1;

        error = fabs(x1-x0);
    }

    printf("The approximate value of root is %lf\n",x0);
    return 0;
}