#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf("Bienvenue sur le jeu du juste prix !");
    getchar();
    int nbr_alea=0;
    int nbr_saisi=0;
    srand(time(NULL));
    nbr_alea=rand()%100;
    do{
        printf("Entrez un nombre : ");
        scanf("%d", &nbr_saisi);
        if (nbr_saisi<nbr_alea){
            printf("C'est plus !\n");
        }
        else if(nbr_saisi>nbr_alea){
            printf("C'est moins !\n");
        }
        else{
            printf("C'est gagné !!!\n");
        }
    }
    while (nbr_saisi!=nbr_alea);
    return 0;
}