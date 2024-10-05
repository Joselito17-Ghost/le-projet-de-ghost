#include <stdio.h>
int main()
{
    int i, n, f;
    printf("entrer le nombre \n");
    scanf("%d", &n);
    f = 1;
    if (n == 0 || n == 1)
    {
        printf("par convention,%d!=1\n", n);
        return 0;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
    }
    printf("le factoriel de %d!=%d\n", n, f);
}