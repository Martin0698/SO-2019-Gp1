#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char **argv){
    int time;

    if(argc<2){
        printf(2,"Sleeping \n");
        exit();
    }

    time = atoi(argv[1]);

    if(time>0){
        sleep(time*100);
    } else {
        printf(2, "Error %s\n", argv[1]);
    }

    exit();
}
