#include <stdio.h>

int main() {
    int ocenki[] = {5, 4, 3, 5, 2, 4, 5, 2, 2, 5};
    
    int lenght = sizeof(ocenki) / sizeof(ocenki[0]);
    
    int count_patb = 0;
    int count_twid = 0;
    
   for (int i = 0; i < lenght; i++) {          
       if(ocenki[i] == 5) {
           count_patb++;
       } else if (ocenki[i] == 2) {
           count_twid++;
       }
   } 
   printf("Кол-во пятерок: %d\n", count_patb);
   printf("Кол-во двоек: %d\n", count_twid);
   
   return 0;
}