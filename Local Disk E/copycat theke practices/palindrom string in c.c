#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    fgets(a,100,stdin);
    strcpy(b,a);
    strrev(a);

    if(strcmp(a,b)==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
	return 0;
}
