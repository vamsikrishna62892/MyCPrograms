#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){
    int i;
    time_t start,end;
    puts("start your time");

    start = time(NULL);
    getch();            //difftime function is used to find the difference between two points it is used to know the time taken by the loops ... etc
    end = time(NULL);
    printf("The difference in time %f secs",difftime(end,start));
    getch();
    return 0;
}
