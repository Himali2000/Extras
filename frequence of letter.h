#include<stdio.h>
#include<conio.h>
int main()
{
    char l,a[20];
    int f=0;
    printf("Enter the string: ");
    gets(a);
    fflush(stdin);
    printf("Enter letter: ");
    scanf("%c",&l);
    while(a[i]!='\0')
    {
        if(a[i]==l)
        {
            f+=1;
        }
        i+=1;
    }
    printf("%d",f);
    return 0;
}
