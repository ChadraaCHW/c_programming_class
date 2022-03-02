#include <stdio.h>

int main() {

    
     const int SEC_IN_MIN = 60;
     const int MIN_IN_HOUR = 60;
     const int HOUR_IN_DAY = 24;
     const int DAY_IN_YEAR = 365;

     const int SEC_IN_YEAR = 31536000;
     const int SEC_IN_DAY = 86400;
     const int SEC_IN_HOUR = 3600;

    int myYearSeconds = 24 * SEC_IN_YEAR;
    int myDaySeconds = 197 * SEC_IN_DAY;
    int myHourSeconds = 10 * SEC_IN_HOUR;
    int myMinuteSeconds = 23 * SEC_IN_MIN;
    int mySeconds = 50;

    int myTotalSeconds = myYearSeconds + myDaySeconds + myHourSeconds + mySeconds;

   printf("You are %d seconds old.\n", myTotalSeconds);
  
   return 0;
}
