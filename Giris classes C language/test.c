void primeFactors(int n)
{
    int c = 2;
    while (n > 1) {
        if (n % c == 0) {
            printf("%d ", c);
            n /= c;
        }
        else
            c++;
    }
}
 
/* Driver code */
int main()
{
    int n = 315;
    primeFactors(n);
    return 0;
}
