#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int prime;
char arr [10];

void VerificaPrimo(int num){

    if (num % prime != 0){

        char numberc [10];

        sprintf(numberc, "%d" ,num);

        write(1,numberc,sizeof(numberc));

    }
}


int main(int argc, char **argv){

    char primo [10];

    sprintf(arr,"-1");

    read(0,primo,sizeof(primo));

    prime = atoi(primo);

    if (prime == -1){

        write(1,arr,sizeof(arr));

        return 0;
    }

    fprintf(stderr, "%s \n", primo);

    while(1){

        char numberc [10];

        read(0,numberc,sizeof(numberc));

        int num = atoi(numberc);

        if (num == -1){

            write( 1, arr, sizeof(arr));

            return 0;
        }
        else{

            VerificaPrimo(num);

        }


    }

    return 0;
}