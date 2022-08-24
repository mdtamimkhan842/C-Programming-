#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    char a[MAX],b[MAX];
    fgets(a,MAX,stdin);
    strcpy(b,a);
    strrev(a);
    //puts(b);
    //printf("%d",j);
    if(strcmp(a,b)==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
	return 0;
}
