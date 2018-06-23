#include "Prime.h"
#include <stdbool.h>
#include <stdio.h>
#include <limits.h>


bool isPrime(int prim){
    bool prime = true;

    for(int i = 2; i < prim/2+1; i++){
        if(prim%i == 0){
            prime = false;
            break;
        }
    }

    return prime;

}

int prime(){

    int primS, primE = 0;
    printf("Primzahlen [von] [bis]: ");
    int check = scanf("%d %d", &primS, &primE);


    if(check == EOF){
        printf("ERROR");
        return 1;
    }else if (check != 2){
        printf("Zu viele/wenige Werte!");
        return 1;
    }


    for(int i = primS; i <= primE; i++){
        if(isPrime(i) == true){
        printf("Die Zahl %d ist eine Primzahl!\n", i);
    }else {
        printf("Die Zahl %d ist keine Primzahl!\n", i);
    }
    }
    

    
    system("pause");
    return 0;
    
}

