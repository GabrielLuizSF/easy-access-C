#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>


#define VERSION   "[5.0]"

#include "../library/styleLib.h"  // "" == local lib 
using namespace stylelib;
    
	char style;
	char userinput[];

    int main(){
    system("clear");
	while(1){
		 printf(" =>");
           gets(userinput);
		if(strcmp(userinput,"exit")==0){
         system("clear");
         printf("[bot] ._.)=>Ok Bye (;-;) (press enter from close window)\n");
         break;
		}
        //IP
        else if(strcmp(userinput,"ip")==0){
            printf("[bot]._.)=> You IP");
        system("curl ipconfig.me");
        }
        //Bash manual
        else if(strcmp(userinput,"manualBash")==0){
            printf("[bot]._.)=>Bash Manual");
            system("man bash");
        }
        // seeAll packages Ubuntu
        else if(strcmp(userinput,"packages")==0){
            printf("[bot]._.)=>all packages installed");
            system("sudo apt list –-installed");
        	}else if(strcmp(userinput,"")==0){
			printf("void not available n\n");
		
        }
        //ERROR msg
        else{
	   	printf("\n[bot]??????\n\n\n[ERROR not available  %s ]\n\n\n",userinput);
	   }
		


    }
     return 0;
    }