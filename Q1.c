//  Way Too Long Words
#include<stdio.h>
int main(){
    char str[500];
    printf("Enter anything : ");
    scanf("%[^\n]s",str);
    fflush(stdin);
    int i=0,count =0;
    while(str[i]!='\0')
    {
        i++;
    }
    if(i>10)
    {
        for(int j=1;j<i-1;j++)
        {
            count++;
        }
        printf("Output : %c%d%c",str[0],count,str[i-1]);
    }
    else printf("Output : %s",str);
    return 0;
}