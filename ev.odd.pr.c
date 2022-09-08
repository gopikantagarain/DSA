/*take a input n from the user and if the number is even then increase the number by 2,if the number is odd then decrease it by 1 and if if the number is prime print the 4th multiple of the number.
pointrs and numbers are should be as follows:
void even(int *);void odd(int *);void prime(int *);*/
#include<stdio.h>
void even(int *n);
void odd(int *n);
void prime(int *n);
int main() {
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    prime(&n);
    even(&n);
    odd(&n);
    printf("%d",n);
    return 0;
}
void even(int *n) {
    if(*n%2==0) {
        printf("the number is even\n");
        *n=*n+2;

    }

}
void odd(int *n) {
    if(*n%2!=0) {
        printf("the number is  odd\n");
        *n=*n-1;
    }
}
void prime(int *n) {
    int count=0;
    for(int i=1;i<1;i++)
    {
        if(*n%i==0)
        {
            count++;
        }
        if(count==2) {
            printf("the number is prime\n");
            *n=(*n)*4;
        }
    }
}