#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){
    int y,m,d,h,min,s;
    struct tm t;
    time_t timeinc;
    printf("Enter date (DD-MM-YYYY) : ");
    scanf("%d%d%d",&d,&m,&y);
    printf("Enter time (hr:min:sec): ");
    scanf("%d%d%d",&h,&min,&s);
    printf("\n");
    t.tm_year = y - 1900;
    t.tm_mon = m -1 ;
    t.tm_mday = d;
    t.tm_hour = h;
    t.tm_min = min;
    t.tm_sec = s;

    timeinc = mktime(&t);
    if(timeinc == -1){
        printf("enter correct date and time\n");
    }else{
        printf(ctime(&timeinc));
    }
    getch();
    return 0;
}
