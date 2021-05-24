/********************************************************
 * Licensed under the MIT license.                      *
 * (c) DamieFC 2021                                     *
 ********************************************************/
#include <stdio.h>

int main(int argc, char argv){
    if(argc < 1){
        printf("Error: no arguments");
        return(1);
    }
    else if(argc <= 1){
        printf("IG you're trying to compile a file, but currently, there's no way to compile anything :(");
        return(0);
    }
}
