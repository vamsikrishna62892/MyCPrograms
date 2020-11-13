#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
    int len,len1,len2,res;
    char str1[]="VAMSI KRISHNA",str2[]="VAMSI KRISHNA GUDIPATI";

    len1 = strlen(str1);
    len2 = strlen(str2);

    len = len1<=len2 ? len1 : len2;

    res = memcmp(str1,str2,len);

    if (res == 0){
        printf("%d has the same characters\n",len);
    }else{
        printf("%d has not the same characters\n",len);
    }
    getch();
    return 0;
}
