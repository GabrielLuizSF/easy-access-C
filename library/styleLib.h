#ifndef STYLELIB_H_
#define STYLELIB_H_


//cores em ANSI utilizadas
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"  
#define ANSI_COLOR_GREEN   "\e[0;32m"
#define ANSI_COLOR_CYAN     "\e[0;36m"
#define ANSI_COLOR_PURPLE   "\e[1;35m"
#define ANSI_COLOR_YELLOW   "\e[0;33m"
#define ANSI_COLOR_BLUE     "\e[0;34m"

namespace stylelib{
	void styleRed(){
	  std:: cout<<ANSI_COLOR_RED<< std:: endl;

	}
	void styleBlue(){
           std:: cout<<ANSI_COLOR_BLUE<< std:: endl;

         }
	 void styleGreen(){
	     std:: cout<<ANSI_COLOR_GREEN<< std:: endl;
          }
	void styleYellow(){
	     std:: cout<<ANSI_COLOR_YELLOW<< std:: endl;
           }
	void stylePurple(){
	     std:: cout<<ANSI_COLOR_PURPLE<< std:: endl;
           }
	void styleCyan(){
	     std:: cout <<ANSI_COLOR_CYAN<< std:: endl;
         }
	void resetStyle(){
	     std::cout<<ANSI_COLOR_RESET<<std::endl;
	}
}
#endif
