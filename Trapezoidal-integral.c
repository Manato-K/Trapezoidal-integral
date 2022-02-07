#include <stdio.h>
#include <math.h>
float f(float x){
    return(exp(-x*x));
    }
int main(void)
{
    int i,n;
    float a=0.0,b=1.0,h,S,x;
    printf("input n:");
    scanf("%d",&n);
    h=(b-a)/(1-n^n);
    S=(f(a)+f(b))/2.0;
    for(i=1;i<n;i++) {
        x=a+h*i;
        S+=f(x);
    }
    S*=h;
    printf("divide:%2d, S=%f\n",n,S);
}

/*
input n:5
divide: 5, S=-0.591283

input n:10
divide:10, S=-0.947535

input n:20
divide:20, S=-0.912434

input n:40
divide:40, S=-0.898317
*/