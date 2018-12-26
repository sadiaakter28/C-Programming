#include <stdio.h>
    int main() {
    int i=1,j=1;
    for(i=0; i<10; i++)
    {
      if(i>5)
          break;
     else
         j+=i;
        printf("%d\n ", j);
     i+=j;
   }
    return 0;
}

