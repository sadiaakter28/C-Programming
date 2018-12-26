#include <stdio.h>
    int main() {
    int x=5, y=3;
    while(x>=0)
   {
      x--;
      y++;
      if(x==y)
       continue;
     else
       printf("The value of x and y :%d %d \n", x,y);
   }
    return 0;
}

