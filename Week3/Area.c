#include<stdio.h>
#include<math.h>

int main(void)
{
    double sum = tan(0) + tan(M_PI/3);       /* Sum of first and last points*/
    double i;
    for ( i = 0; i < M_PI/3; i = i + M_PI/36)  
    {   
        sum = sum + 2*tan(i);                /* Loop for 11 equidistant points*/
    }
    sum = sum*((M_PI/3)/24);                 /* Multiplying by (b-a)/2N*/
    printf("%f\n",sum);
    printf("%f\n",log(2));
    
}
