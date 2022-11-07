#include <stdio.h> 
int reverse(int reverse){
    int n = 0;
    while (reverse != 0){
        n = n * 10;
        n = n + reverse % 10;
        reverse /= 10;
    }
    return n;
}
int main() { 
    int A, B;
    scanf("%d %d",&A,&B); 
    A=reverse(A); 
    B=reverse(B);
    int C = A+B; 
    printf("%d",reverse(C));
}