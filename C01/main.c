#include <stdio.h>
#include "header.h"

const char *test(){
    return "Welcome";
}

int     main(void){
    puts(test());

    return 0;
}