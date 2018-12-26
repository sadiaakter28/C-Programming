#include <stdio.h>
    int main() {
    int x=5, y=3,i;
    for(i=1; i<=4; i++)
    {
      if(x==y)
          {
           continue;
          }
     else
        {
          ++x;
          printf("The value of y is %d\n ", y);
        }
       ++y;
      }
     printf("The value of x is %d\n ", x);
     return 0;
}
