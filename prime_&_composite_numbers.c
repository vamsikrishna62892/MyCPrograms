#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<math.h>

int main(){
    int num,div;
    bool prime = true;      // bool is a data type used to store data it is commonly used in true or false , yes or no
    time_t start,end;

    printf("Enter a number to check it is a prime number or not : ");
    scanf("%d",&num);
    start = time(NULL);
    if(num<1){
        printf("Number should be greater than 1");
    }
    else if (num == 1){
        printf("%d is not a prime nor a composite number ",num);
    }
    else{
        for( div = 2 ; div <= ceil(sqrt(num)); div++){
            if ( (num % div) == 0){
                prime = false;
                break;
            }
        }
        if (prime == false){
            printf("%d is a composite number \n",num);
        }
        else{
            printf("%d is a prime number\n",num);
        }
    }
    end = time(NULL);
    printf("%d sec",difftime(end,start));
    getch();
    return 0;
}
