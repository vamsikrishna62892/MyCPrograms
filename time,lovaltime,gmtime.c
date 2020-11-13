#include<stdio.h>
#include<conio.h>
#include<time.h>


//struct tm {
//   int tm_sec;         /* seconds,  range 0 to 59          */
//   int tm_min;         /* minutes, range 0 to 59           */
//   int tm_hour;        /* hours, range 0 to 23             */
//   int tm_mday;        /* day of the month, range 1 to 31  */
//   int tm_mon;         /* month, range 0 to 11             */
//   int tm_year;        /* The number of years since 1900   */
//   int tm_wday;        /* day of the week, range 0 to 6    */
//   int tm_yday;        /* day in the year, range 0 to 365  */
//   int tm_isdst;       /* daylight saving time             */
//};

int main(){
    struct tm *local,*gm;
    time_t t;

    t = time(NULL);
    local = localtime(&t);
    local->tm_sec = 10;
    local->tm_hour = 155;
    printf("Local date and time \n");
    printf("Current time : %d : %d : %d\n",local->tm_hour,local->tm_min,local->tm_sec);
    printf("Date : %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);     //here we are adding 1900 to year and 1 to month bcoz it counts from 1900 and for month is 0-30
    printf("This is the day %d of the year\n",local->tm_yday+1);        //here we are adding +1 to the number of days completed since year start bcoz it counts from 0-365
    printf("This is the day %d of the month\n",local->tm_mday);
    printf("This is the day %d of the week\n",local->tm_wday);

    gm = gmtime(&t);

    printf("\nGreenwich time \n");
    printf("Current time : %d : %d : %d\n",gm->tm_hour,gm->tm_min,gm->tm_sec);
    printf("Date : %d / %d / %d\n",gm->tm_mday,gm->tm_mon+1,gm->tm_year+1900);
    printf("This is the day %d of the year\n",gm->tm_yday+1);
    printf("This is the day %d of the month\n",gm->tm_mday);
    printf("This is the day %d of the week\n",gm->tm_wday);

    getch();
    return 0;
}
