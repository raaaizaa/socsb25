#include <stdio.h>

int main(){
    float a, b ,c ,d ,e, f, g, h, i, j, k ,l, one, two, three;

    scanf("%f %f %f %f\n", &a, &b, &c, &d);
    scanf("%f %f %f %f\n", &e, &f, &g, &h);
    scanf("%f %f %f %f", &i, &j, &k, &l);

    one = a/1 + b/2 + c/3 + d/4 + b/2 + c/3 + d/4 + c/3 + c/3 + d/4 + c/3 + b/2 + d/4 + c/3 + b/2 + a/1;
    two = e/1 + f/2 + g/3 + h/4 + f/2 + g/3 + h/4 + g/3 + g/3 + h/4 + g/3 + f/2 + h/4 + g/3 + f/2 + e/1;
    three = i/1 + j/2 + k/3 + l/4 + j/2 + k/3 + l/4 + k/3 + k/3 + l/4 + k/3 + j/2 + l/4 + k/3 + j/2 + i/1;


    printf("%.2f\n", one);
    printf("%.2f\n", two);
    printf("%.2f\n", three);


}