
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv){

    int n;

    char arr [10];

    char menosu [10];

    sprintf(menosu,"-1");

    for (n = 2; n < 101; n++){

        sprintf(arr, "%d" ,n);

        write(1,arr,sizeof(arr));
    }

    write(1,menosu,sizeof(menosu));

    return 0;
}