#include <stdio.h>
#include <math.h>
#define PI 3.14
float a, b, c,O, Z;
float P, A;
int main(void)
{
    printf("quel triangle voulez vous etudiez?\n\n");
    printf("1-rectangle 2-isocele 3-equilateral 4-quelconque\n");
    int v;
    scanf("%d", &v);
    if (v == 1)
    {
        printf("entrer les côtés respectivement du plus petit  au plus grand\n");
        scanf("%f,%f,%f", &a, &b, &c);
        P=a+b+c;
        printf("le perimetre vaut %f\n", P);
        A=0.5*a*b;
        printf("aire vaut %f\n", A);
    }
    else if (v == 3)
    {
        printf("entrer la longueur d'un cote\n");
        scanf("%f",&a);
        P=3*a;
        printf("le perimetre vaut %f\n",P);
        A=0.5*a*a*sin(PI/3);
        printf("l'aire vaut %f\n",A);
    }
    else if (v == 2)
    {
        printf("entrer la longueur des deux cotes egaux et celle du 3eme cote\n");
        scanf("%f,%f",&a, &b);
        P=2*a+b;
        printf("le perimetre vaut %f\n", P);
        O = (2 * a * a - b * b)/(2 * a * b);
            Z = acos(O);
            A=0,5*a*a*sin(Z);
        printf("l'aire vaut %f\n");
    }
    else if (v == 4)
    {
        printf("entrez dans l'ordre les cotes du triangle du plus petit au plus grand\n");
        scanf("%f,%f,%f",&a, &b, &c);
        P=a+b+c;
        printf("le perimetre vaut %f\n",P);
        O = ((b * b + a * a) - c * c) / (2 * a + b);
        Z = acos(O);
        A=0.5*a*b*sin(Z);
        printf("l'aire vaut %f\n",A);
    }
}