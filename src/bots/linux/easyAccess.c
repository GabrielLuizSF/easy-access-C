#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>


#define ANSI_COLOR_RED     	"\x1b[31m" //cores em ANSI utilizadas 
#define ANSI_COLOR_GREEN	"\e[0;32m"
#define ANSI_COLOR_RESET   "\x1b[0m"
    
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
		}else if(strcmp(userinput,"ip")==0){
            printf("[bot]._.)=> You IP");
        system("curl ipconfig.me");
        }else if(strcmp(userinput,"manualBash")==0){
            printf("[bot]._.)=>Bash Manual");
            system("man bash");
        }else if(strcmp(userinput,"packages")==0){
            printf("[bot]._.)=>all packages installed");
            system("sudo apt list –-installed");
        }


    }
     return 0;
    }