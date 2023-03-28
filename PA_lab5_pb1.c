#include"stive.h"

int main()
{
    char str[]="abcdef";
    Node *top=NULL;

    int i;

    for(i=0; i<strlen(str); i++)
        push(&top, str[i]);

    while(!isEmpty(top))
        printf("%c", pop(&top));

    printf("\npana aici");

    return 0;
}
