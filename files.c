#include<stdio.h>
#include<conio.h>

int main(){
    FILE *Fpointer;
    Fpointer = fopen("file.txt","w");
    if ( Fpointer == NULL){
        printf("WE ARE NOT ABLE TO CREATE A FILE");
    }else{
        printf("YOUR SUCCESSFULLY OPEN A FILE");
        fclose(Fpointer);
        }
getch();
return 0;
}
