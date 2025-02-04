#include <stdio.h>
#include <locale.h>

int main(){
  
  setlocale(LC_ALL, "portuguese");

 if(setlocale(LC_ALL, "portuguese") == NULL){

    printf("local it's not indentified!\n");

  } else {
    
    printf("local changed for portuguese!");
  
  }; // i just trying understand how this fuction this shit

  printf("olá mundo");

  return 0;
}
