#include<stdio.h>
#include<conio.h>

int main(){
    FILE *Fpointer;
    char data[100]="VAMSI KRISHNA (VK)";
    int length=strlen(data),counter;
    Fpointer = fopen("file.txt","a");
    if ( Fpointer == NULL){
        printf("WE ARE NOT ABLE TO CREATE A FILE");
    }else{
        for(counter=0;counter<length;counter++){
            printf("WRITING THE CHARACTER %c\n",data[counter]);
            fputc(data[counter],Fpointer);
        }
        printf("SUCCESSFULLY WRITTEN IN THE FILE");
        fclose(Fpointer);
        }
getch();
return 0;
}

