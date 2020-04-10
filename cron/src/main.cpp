
  
#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
int main() 
{ 
        //A null terminated array of character  
        //pointers 

        for (;;) {
            char *args[]={"git pull",NULL}; 
            execvp(args[0],args);
            printf("Pulled\n");
            sleep(5 * 60);
        }
      
    return 0; 
} 