#include <stdio.h>
long long fact(int n){ return (n<=1)?1:n*fact(n-1); }
int main(){ int n=5; printf("Factorial of %d is %lld\\n", n, fact(n)); return 0; }
