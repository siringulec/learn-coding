#include<stdio.h>

void print(void){
    printf("Hello World\n");
}

int average(int a, int b){
    double c;
    c = (a+b)/2;
    return c;
}

void swap(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("Swap: %d %d\n", a, b);
}

int main(int argc, char const *argv[])
{
    int a, b, tmp;
    double ave;

    print();

    printf("Enter two integers:");
    scanf("%d %d", &a, &b);

    ave = average(a, b);
    printf("Average of %d and %d is %lf.\n", a, b, ave);
    
    printf("Main: %d %d\n", a, b);
    swap(a, b);
    printf("Main: %d %d\n", a, b);
    return 0;
}
