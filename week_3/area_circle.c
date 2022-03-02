#include <stdio.h>
#define M_PI 3.14159265359

int main() {
   
   printf("Wath is the radius? ");
   double radius;
   scanf("%lf",&radius);

   double area = M_PI * radius * radius ; 
   
   printf("The area is, %lf!\n", area);

   return 0;
}
