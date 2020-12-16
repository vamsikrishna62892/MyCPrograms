#include<stdio.h>
int main(){
    int n,k,l;
    int i,j;
    scanf("%d",&n);
    int cam[n][3];
    for(i=0;i<n;i++){
        for( j = 0;j<3;j++){
            scanf("%d",cam[i][j]);
        }

    }
    char str1[]= "Cat A";
    char str2[]= "Cat B";
    char str3[]= "Mouse C";

    for (i=0;i<n;i++){
    k = abs(cam[i][2]-cam[i][0]); // cat A distance
    l = abs(cam[i][2]-cam[i][1]); // cat B distance
    if(k<l){
        puts(str1);
    }else if(k>l){
        puts(str2);
    }else if(k==l){
        puts(str3);
    }

    }
    return 0;
}
