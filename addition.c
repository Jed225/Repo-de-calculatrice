#include <stdio.h>


int main()
{
    //Afficher un nombre entré par l'utilisateur
    int nombre;
    printf("entrez un nombre\n");
    scanf("%d", &nombre);

    printf("le nombre est %d", nombre);

    //faisons maintenant une addition avec deux autres
    int nb1, nb2, addition;
    printf("entrez un premier nombre\n");
    scanf("%d", &nb1);

    printf("entrez le deuxieme nombre\n");
    scanf("%d", &nb2);

    addition = nb1 + nb2;
    printf("%d + %d = %d\n", nb1, nb2, addition);

    return 0;

    // pour les autres operations arithmetiques, c'est la meme logique



}
