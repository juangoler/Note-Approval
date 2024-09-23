#include <stdio.h>

int main()
{
    int id;
    double n1, n2, n3;

    printf("Digite o seu ID: ");
    scanf("%d", &id);
    printf("Digite sua N1: ");
    scanf("%lf", &n1);
    printf("Digite sua N2: ");
    scanf("%lf", &n2);
    printf("Digite sua N3: ");
    scanf("%lf", &n3);

    n1 *= 10;
    n2 *= 10; 
    n3 *= 10; 

    double media = (n1 * 0.30) + (n2 * 0.30) + (n3 * 0.40);
    
    printf("Média: %.2f\n", media); 

    if(media >= 90){
        printf("ID: %d\n", id);
        printf("Aprovado!\nNota A");
    } else if (media >= 75 && media < 90){
        printf("ID: %d\n", id);
        printf("Aprovado!\nNota B");
    } else if (media >= 60 && media < 75){
        printf("ID: %d\n", id);
        printf("Aprovado!\nNota C");
    } else if (media >= 40 && media < 60){
        printf("ID: %d\n", id);
        printf("Reprovado!\nNota D");
    } else if (media < 40){
        printf("ID: %d\n", id);
        printf("Reprovado!\nNota E");
    }

    return 0;
}