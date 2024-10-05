#include <stdio.h>
float r;
#define PI  3.14
int main()
{
    printf("entrer le rayon du cercle\n");
    scanf("%f", &r);
    printf("le perimetre du cercle vaut %f \n",2 * PI * r);
    printf("l'aire du cercle vaut %f\n", PI * r * r);
}