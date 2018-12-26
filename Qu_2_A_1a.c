#include <stdio.h>
    int main() {
    int x=10, y=4;
    while(x>0)
   {
      if(x==y)
      {
          printf ("\nThe value of x and y is equal");
          printf("\n %d \t %d", x,y);
          break;
      }
      else
      {
          printf("\n %d \t %d", x,y);
      }
         x--;
         y++;
     }
    return 0;
 }

