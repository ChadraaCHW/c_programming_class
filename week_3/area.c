#include <stdio.h>
int main() {
   
   printf("Wath is the length? ");
   double length;
   scanf("%lf",&length);

   double area = length * length;
   printf("The area is, %lf!\n", area);

   return 0;
}
