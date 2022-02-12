#include <stdio.h>
#define _USE_MATH_DEFINES

#include <math.h>
float f(float x){
    return(4/(1+x*x));
    }
int main(void)
{
    int i,n;
    float a=0.0,b=1.0,h,S,x;
    printf("input n:");
    scanf("%d",&n);
    h=(b-a)/n;
    S=(f(a)+f(b))/2.0;
    for(i=1;i<n;i++) {
        x=a+h*i;
        S+=f(x);
    }
    S*=h;
    printf("divide:%2d, S=%f, error=%f\n",n,S,S-M_PI);
}

/*
input n:5
divide: 5, S=3.134926, error=-0.006667

input n:10
divide:10, S=3.139926, error=-0.001667

input n:20
divide:20, S=3.141176, error=-0.000416

input n:40
divide:40, S=3.141488, error=-0.000104
*/