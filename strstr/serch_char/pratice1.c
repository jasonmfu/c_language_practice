#include<stdio.h>
#include<string.h>

int main(){
    char str[]="This is a simple string";
    char *pch;
    /* serch simple string */
    pch = strstr(str,"simple");
    /* turn simple to sample */
    strncpy (pch,"sample",6);
    puts(str);
    return 0;
}
