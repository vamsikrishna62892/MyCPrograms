#include<stdio.h>
#include<conio.h>

int main(){
    int status;

    status = remove("vk/temp.txt"); // vk is a folder and temp file is in vk
    printf("%d\n",status);
    if (status == 0){
        printf("Deleted successfully");
    }else{
        printf("Error while deleting the file");
    }
    getch();
    return 0;
}
