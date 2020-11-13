#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){
    time_t t;
    t = time(NULL);
    //puts(t);

    puts(ctime(&t));

    puts(asctime(localtime(&t)));

    puts(asctime(gmtime(&t)));
    getch();
    return 0;
}
