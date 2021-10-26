/*
   project:Quadratic equation solution
   Author:Elizabeth Atieno
   Date:26 0CT
   Compiler:GCC
   Language:C99
   License: MIT

   INPUT= a,b,c
   output=x1,x2,
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{   //variable declaraion
    int a,b,c;
    float x1,x2;

    //capture input
    printf("\tQuadratic Equation Solver\n");
    printf("enter the values a,b and c:");
    scanf("%d%d%d",&a,&b,&c);

    //processing/computation
    if((b*b-4*a*c) == 0) {
        x1 = x2 = (-b + sqrt(b*b-4*a*c))/(2*a);
}
    if((b*b-4*a*c)> 0){
        x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c) < 0) {
        printf("The equation has no roots\n");
        exit(1);
    }
    //output
      printf("the values of x are %f and %f\n",x1,x2);
    return 0;

}
