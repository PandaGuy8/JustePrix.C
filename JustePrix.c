/**
 * @file JustePrix.c 
 * @author andrea.larghi@heig-vd.ch
 * @brief This code is a remake of the TV game "le juste Prix"
 * @date October 2022
 * @note to COMPILE: gcc -Wall -Wextra JustePrix.c -o JustePrix
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
        int InputValue = 0;
        int Attempts = 15;
        int MaxValue = 50000;
        int Input;
 
        srand(time(NULL));

        int bonPrix = rand()/(RAND_MAX/MaxValue);
       //printf("%d \n", bonPrix); //Debug only, prints the value to guess
        printf("Entrez un chiffre entier entre 0 et %d\n", MaxValue);

        while(Attempts != 0){
                printf("Vous avez %d essais \n", Attempts);
                
                Input = scanf("%d", &InputValue);

                if(Input == 0){

                        printf("Ce n'est pas un entier\n");
                        Attempts = Attempts + 1;
                        return 1;
                }

                if(InputValue < bonPrix && Input != 0){
                        printf("C'est plus\n\n");
                }
                else if (InputValue > bonPrix && Input != 0){
                        printf("C'est moins\n\n");
                }
                else if(Input != 0){
                        printf("C'est juste !\n\n");
                        break;
                }

                Attempts = Attempts - 1;
        }

        if (Attempts == 0){
                printf("C'était %d \nVous avez perdu...\n\n", bonPrix);
        }
        //printf("%d \n", Input); //Debug only, prints the input value
return 0;
}
