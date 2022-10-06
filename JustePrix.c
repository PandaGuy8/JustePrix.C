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

int main(void)
{
        int Input = 0;
        int Attempts = 15;

        srand(time(NULL));

        int bonPrix = rand()/(RAND_MAX/50000);
       //printf("%d \n", bonPrix); //Debug only, prints the value to guess
        
        while(Attempts != 0){
                printf("Vous avez %d essais \n", Attempts);
                scanf("%d", &Input);

                if(Input < bonPrix){
                        printf("C'est plus\n\n");
                }
                else if (Input > bonPrix){
                        printf("C'est moins\n\n");
                }
                else{
                        printf("C'est juste !\n\n");
                        break;
                }

                Attempts = Attempts - 1;
        }

        if (Attempts == 0){
                printf("C'était %d \n Vous avez perdu...\n\n", bonPrix);
        }
        //printf("%d \n", Input); //Debug only, prints the input value
return 0;
}
