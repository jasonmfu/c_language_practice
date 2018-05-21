#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>



struct headerstruct{
    unsigned char headname;
    unsigned int headid;
};

struct normalstruct{
    struct headerstruct header;
    unsigned char name;
    unsigned int id;
};

struct __attribute__((__packed__)) attristruct{
    struct headerstruct header;
    unsigned char attriname;
    unsigned int attriid;
};

int main(){
    struct normalstruct normal;

    normal.header.headid = 12;
    printf("normal.header.headid = %d \n",normal.header.headid);



    return 0;
}
