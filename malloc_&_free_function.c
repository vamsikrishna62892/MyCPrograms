#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int *p;
    float *f;
    char *c;

    p = (int *)malloc(sizeof(int));
   /* if( p == NULL){
        printf("Heap memory not created\n");
    }else{
        scanf("%d",&p);
        printf("%d\n",p);
        free(p);
    }
    f = (float *)malloc(sizeof(float));
    if( f == NULL){
        printf("Heap memory not created\n");
    }else{
        fflush(stdin);
        *f = 2.5445;
        printf("%f\n",*f);
        free(f);
    }*/
    c = (char *)malloc(sizeof(char));
    if( c == NULL){
        printf("Heap memory not created\n");
    }else{
        fflush(stdin);
        *c = 'g';
        printf("%c\n",*c);
        free(p);
    }
getch();
return 0;
}
