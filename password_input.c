#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    const int maxpasslen = 15;
    char password[maxpasslen + 1];
    char ch,ch1;
    char str[maxpasslen +1],str2[maxpasslen+1];
    int i = 0,a,b=0,c;

    FILE *fp,*fp1;

    fp=fopen("memcmp.txt","r");

    if(fp==NULL){
        printf("UNABLE TO OPEN THE FILE\n");
       }else{
        fgets(str,maxpasslen+1,fp);
        fclose(fp);
       }

    printf("Enter your password ( Length 1 - 15) : ");
    while(1){
        ch = getch();
        if ( ch == 13 ){        // ascii key for enter is 13
            break;
        }
        else if ( ch == 32 || ch == 9){ //ascii key for tab is 9 and for space is 32
            continue;
        }
        else if ( ch == 8 ){    // ascii key for backspace is 8
            if ( i > 0 ){
                i--;
                ch = '\0';
                printf("\b \b");
            }
        }
        else{
            if( i < maxpasslen){
            password[i] = ch;
            i++;
            printf("*");
            }else{
                printf("Your password exceeds the length only first 15 characters is taken \n ");
                break;
            }
        }
    }
    password[i] = '\0';
    if (strlen(password) == 0){
        printf("\n");
        printf("No password is given\n");
        }else{
            if (strcmp(password,str) == 0){
                printf("\n");
                printf("Your password is correct\n");
                printf("Your password is %s",password);
            }
            else{
                printf("\nYour password is incorrect\n");
                exit(0);
            }
    }
    printf("\n");
    printf("If you want to change your password press 1 and press 0 to cancel : ");
    scanf("%d",&a);
    if (a==1){
    fp1=fopen("memcmp.txt","w");
        if(fp1 == NULL){
            printf("UNABLE TO OPEN THE FILE\n");
        }else{
            fflush(stdin);
            printf("Enter your new password : ");
    while(1){
        ch1 = getch();
        if ( ch1 == 13 ){        // ascii key for enter is 13
            break;
        }
        else if ( ch1 == 32 || ch1 == 9){ //ascii key for tab is 9 and for space is 32
            continue;
        }
        else if ( ch1 == 8 ){    // ascii key for backspace is 8
            if ( b > 0 ){
                b--;
                ch1 = '\0';
                printf("\b \b");
            }
        }
        else{
            if( b < maxpasslen){
            str2[b] = ch1;
            b++;
            printf("*");
            }else{
                printf("Your password exceeds the length only first 15 characters is taken \n ");
                break;
            }
        }
    }
            str2[b] = '\0';
            fprintf(fp1,"%s",str2);
            printf("\n");
            printf("Password changed successfully\n");
            if ( a == 0){
                exit(0);
            }
            printf("Do you want to display your new password press 1 else press 0 to exit : ");
            scanf("%d",&c);
            if (c == 1){
                printf(str2);
            }else if (c == 0){
                exit(0);
            }
            fclose(fp);
            fclose(fp1);
       }
        }else
        exit(0);
        getch();
    return 0;
}
