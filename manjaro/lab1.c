#include<stdio.h>

void print(void){
    printf("Hello World\n");
}

int average(int a, int b){
    int c;
    c = (a+b)/2;
    return c;
}

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int a, b,*pa, *pb, ave;

    print();

    printf("Enter two integers:");
    scanf("%d %d", &a, &b);

    printf("The intergers you entered: %d %d\n", a, b);

    pa = &a;
    pb = &b;

    ave = average(a, b);
    printf("Average of %d and %d is %d.\n", a, b, ave);

    swap(pa, pb);
    printf("The intergers swaped: %d %d\n", a, b);
    return 0;
}
