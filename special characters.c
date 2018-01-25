#include <stdio.h>
#include<string.h>

int main()
{
    int d = 0;
    char str[1000];
    fgets(str,1000,stdin);
    
    for(int i = 0; str[i]!='\0'; i++){
        if(!isalpha(str[i]) && !isdigit(str[i]))
        d++;
        
    }
    
    printf("%d",d);
    return 0;
}
