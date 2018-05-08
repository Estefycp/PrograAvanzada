#include <stdio.h>
#include <math.h>
 

 
unsigned long long modpow(unsigned long long base, unsigned long long exp, unsigned long long mod)
{
    unsigned long long result = 1;
    while (exp)
    {
        if (exp & 1)
           result = (result * base) % mod;
        base      = (base   * base) % mod;
        exp  >>= 1;
    }
    return result;
}
 
void process(unsigned long long N, unsigned long long K)
{
    long double tmp; unsigned long long fp, lp; char fs[30];
 
    fp = floorl(powl(10, K - 1 + modfl(N * log10l(N), &tmp)));
    lp = modpow(N, N, pow(10, K));
    sprintf(fs, "%%llu %%0%llullu\n", K);
    printf(fs, fp, lp);
}
 
int main()
{
    unsigned long long T, N, K;
 
    scanf("%llu\n", &T);
    while (T--)
    {
        scanf("%llu", &N);
        scanf("%llu", &K);
        process(N, K);
    }
 
    return 0;
}