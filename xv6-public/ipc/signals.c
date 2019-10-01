
#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int forever= 1;

void signalHandler(int sgn){
    printf("receiver signal: %d \n",sgn );
    forever=0;
}

int main(){
    int pid;
    signal(10, signalHandler);
    pid=fork();
    if(pid == 0){
        //Soy el hijo
        signal(10, signalHandler);
        printf("Soy el hijo \n");
        //COdigo que ejecuta el hijo
        while(forever){}
        printf("Saliendo del ciclo infinito \n");
    }else{
        printf("Soy el Padre y mi hijo es : %d \n", pid);
        sleep(5);
        kill(pid, 10);
        //Código del Padre
        for(;;){}
    }
}