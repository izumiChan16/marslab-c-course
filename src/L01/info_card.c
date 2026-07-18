#include<stdio.h>

#define PI 3.14159

int main(){
    int knowledge_points = 4, integer = 10, a = 10, b = 3;
    float e = 3.14, c = 10.0, d = 3.0;
    int castpie = (int)e;
    double f = 2.7183;
    char g = 'A';
    int iugyu8tgguyguygv = a / b;
    float float_division = c / d;
    int remainder = a % b; 
    
    printf("Lab: %s\n","L01 Info Card");
    printf("Knowledge Points: %d\n",knowledge_points);
    printf("Integer: %d\n",integer);
    printf("Float: %.2f\n",e);
    printf("Double: %.4f\n",f);
    printf("Char: %c\n",g);
    printf("Div Int:  10 / 3 = %d\n",iugyu8tgguyguygv);
    printf("Div Flt:  10.0 / 3.0 = %.2f\n",float_division);
    printf("Mod Int:  10 %% 3 = %d\n",remainder);
    printf("Cast Pie: (int)3.14 = %d\n",castpie);
    printf("Defined: PI = %.5f\n", PI);

    return 0;
}