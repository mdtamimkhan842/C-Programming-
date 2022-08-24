#include <stdio.h>
int main ()
{
long long int N, M, summation;
scanf("%lld %lld", &N, &M);
N= N%10; // 13, 3
M= M%10;// 12,

summation = M+N;

printf("%lld\n", summation);
return 0;
}
