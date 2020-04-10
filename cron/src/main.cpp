#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h>

int main() {

    for (;;) {
        char *args[]={"git pull",NULL}; 
        execvp(args[0],args);
        printf("Pulled from Git for newer version\n");
        sleep(5 * 60);
    }
  
    return 0; 
} 