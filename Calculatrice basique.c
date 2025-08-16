#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Operateur arithmétique
int addition(int, int);
int soustraction(int, int);
int multiplication(int, int);
int division(int, int);

//puissance
unsigned long puissance(int a, int b);
//Factorielle
unsigned long factorielle(int nombre);

int pgcd(int, int);
void ppcd(int, int);

int main()
{
    int choix, nombre1, nombre2, nombre;
    printf("Bonjour, Bienvenue dans une petite calculatrice basique\n");
    printf("Voici les operations que nous offrons, faites votre choix !\n");
    printf("1. Addition (+)\n2. Soustraction (-)\n3. Multiplication (*)\n4. Division(/)\n5. Puissance (^)\n6. Factorielle(!)\n7. PGCD\n8. PPCD\n");
    scanf("%d", &choix);

    switch(choix)
    {
    case 1:
        printf("vous avez choisi l'addition\n");
        printf("Entrez les deux operandes");
        scanf("%d %d", &nombre1, &nombre2);

        printf("%d + %d = %d\n", nombre1, nombre2, addition(nombre1, nombre2));
        break;

    case 2:
        printf("vous avez choisi la soustraction\n");
        printf("entrez les deux operandes\n");
        scanf("%d %d", &nombre1, &nombre2);

        printf("%d - %d = %d\n", nombre1, nombre2, soustraction(nombre1, nombre2));
        break;

    case 3:
        printf("Vous avez choisi la multiplication\n");
        printf("entrez les deux operandes\n");
        scanf("%d %d", &nombre1, &nombre2);

        printf("%d x %d = %d\n", nombre1, nombre2, multiplication(nombre1, nombre2));
        break;

    case 4:
        printf("Vous avez choisi la division\n");
        printf("Choisissez les deux operandes (dividande et diviseur)\n");

        scanf("%d %d", &nombre1, &nombre2);

        printf("%d : %d = %d\n", nombre1, nombre2, division(nombre1, nombre2));

        break;

    case 5:
        printf("vous voulez trouver la puissance d'un nombre? super !\n");
        printf("Quel est donc ce nombre ?\n");

        scanf("%d", &nombre1);

        printf("voulez-vous calculer ce nombre à la puissance combien?\n");
        scanf("%d", &nombre2);

        //nombre1 est la base et nombre2 est l'exposant
        printf("%d exposant %d = %d\n", nombre1, nombre2, puissance(nombre1, nombre2));
        break;

    case 6:
        printf("Vous voulez trouver la factorielle d'un nombre\n");
        printf("Quel est ce nombre\n");
        scanf("%d", &nombre);

        printf("La factorielle de %d est %d\n", nombre, factorielle(nombre));

        break;

    case 7:
        printf("Vous voulez trouver le plus grand commun diviseur ?");
        printf("Entrez les deux nombres concernés\n");

        scanf("%d %d", &nombre1, &nombre2);


        printf("le plus grand commun diviseur de ces nombres est : %d\n", pgcd(nombre1, nombre2));

        break;

    case 8 :
        printf("Vous voulez trouver le plus petit commun diviseur ?\n");

        printf("entrez les deux nombres concernées\n");
        scanf("%d %d", &nombre1, &nombre2);

        ppcd(nombre1, nombre2);
        break;
    }
    return 0;
}


int addition(int a, int b)
{
    return a + b;
}

int soustraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int dividande, int diviseur)
{
    return dividande / diviseur;
}

unsigned long puissance(int a, int b)
{
    return pow(a, b);
}

unsigned long factorielle(int nombre)
{
    unsigned long factorielle = 1;
    for(int i = nombre; i >= 1; i--)
    {
        factorielle *= i;
    }

    return factorielle;
}

int pgcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void ppcd(int a, int b)
{
    int min = (a < b)? a:b;
    for (int i = 2; i <= min; ++i)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("Le ppcd de ces nombres est %d", i);
            break;
        }
    }


}



