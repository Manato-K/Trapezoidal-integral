#include <stdio.h>
#include <math.h>
float f(float x){
    return(exp(x*x));
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
    printf("divide:%2d, S=%f\n",n,S);
}

/*
input n:5
divide: 5, S=1.480655

input n:10
divide:10, S=1.467175

input n:20
divide:20, S=1.463784

input n:40
divide:40, S=1.462935
*/