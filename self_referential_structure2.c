#include<stdio.h>
#include<conio.h>

int main(){
    struct book {
        char name[100];
        int nopages;
        struct book *nxtbk;
    };
    struct book b3 = {"romeao and juliet",999,NULL};
    struct book b2 = {"pallavelugu",365,&b3};
    struct book b1 = {"Harry potter",299,&b2};
    struct book *b = &b1;
    while( b != NULL){
        printf("Title : %s \nNO of pages : %d\n\n",b->name,b->nopages);
        b=b->nxtbk;
    }
    getch();
    return 0;
}
