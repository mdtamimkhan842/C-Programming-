#include <stdio.h>
#include <string.h>
int main ()
{
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int L1=strlen(a);
    int L2=strlen(b);
    int i,j,n=0;

    if(L1==L2){
        for(j=0;j<L1;j++){
            for(i=0;i<L1;i++){
                if(a[j]==b[i]){
                    b[i]=0;
                    n++;
                }
            }
        }
        if(n==L1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    else{
        printf("No\n");
    }
    return 0;
}
