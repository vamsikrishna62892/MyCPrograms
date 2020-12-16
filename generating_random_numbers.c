#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i,n;

    printf("How many random number you want : ");
    scanf("%d",&n);
    srand(time(NULL));
    for (i=0 ; i<n ; i++){
        printf("%d random number : %d\n",i+1,rand());
    }
    getch();
    return 0;
}
/*srand function is used bcoz here we have problem on running the second time
we get the same results as we seen before to overcome this problem we uses srand
function so we can change the initial value so for every time we get the another
random numbers 0here we are passing time(NULL) bcoz it returns no of seconds from
 1900 jan1 for every second the time changes so we cannt get the same results every time
 */
