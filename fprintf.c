#include<stdio.h>
#include<conio.h>

int main(){

    char name[25],sur[25],fn[25],mn[25];
    int age,dd,mm,yy;
    FILE *fp;

    printf("ENTER YOUR NAME : ");
    gets(name);
    printf("\nENTER YOUR SURNAME : ");
    gets(sur);
    printf("\nENTER YOUR DOB (dd mm yyyy) : ");
    scanf("%d%d%d",&dd,&mm,&yy);
    printf("\nENTER YOUR AGE : ");
    scanf("%d",&age);
    fflush(stdin);              //fflush function is used to clear the buffer
    printf("\nENTER YOUR FATHER NAME : ");
    gets(fn);
    printf("\nENTER YOUR MOTHER NAME : ");
    gets(mn);

    fp=fopen("bio.txt","a");

    if(fp==NULL){
        printf("UNABLE TO OPEN FILE \n");
    }else{
        fprintf(fp,"\n\t\t*******************************\n");
        fprintf(fp,"NAME          : %s\n",name);
        fprintf(fp,"SURNAME       : %s\n",sur);
        strcat(sur,name);
        fprintf(fp,"FULL NAME     : %s\n",sur);
        fprintf(fp,"DATE OF BIRTH : %d-%d-%d\n",dd,mm,yy);
        fprintf(fp,"AGE           : %d\n",age);
        fprintf(fp,"FATHER NAME   : %s\n",fn);
        fprintf(fp,"MOTHER NAME   : %s\n",mn);
        printf("SUCCESSFULLY STORED YOUR DATA \n");

        fclose(fp);
    }
getch();
return 0;
}
