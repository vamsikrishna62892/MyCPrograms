#include<stdio.h>
#include<conio.h>

int main(){
    FILE *Fpointer;
    char data[20],c;
    int i;
    gets(data);
    Fpointer = fopen("name.txt","w");
    if ( Fpointer == NULL){
        printf("WE ARE NOT ABLE TO CREATE A FILE");
    }else{
            printf("WRITING THE CHARACTER %s\n",data);
        for(i=0;i<strlen(data);i++){
            fputc(data[i],Fpointer);
        }
        printf("SUCCESSFULLY WRITTEN IN THE FILE");
        fclose(Fpointer);
        }
getch();
return 0;
}
