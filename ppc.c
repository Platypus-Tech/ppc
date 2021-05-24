/********************************************************
 * Licensed under the MIT license.                      *
 * (c) DamieFC 2021                                     *
 ********************************************************/
#include <stdio.h>

int main(int argc, char argv){
    if(argc < 1){ // if there are no arguments
        printf("Error: no arguments");
        return(1); // Error
    }
    else if(argc <= 1){
        if(argv == "help"){ // If you need help
            printf("Welcome to the Pigeon Potato Compiler!\n");
            printf("It's in alpha stage, so really, there is no way to compile anything...\tyet.\n");
            printf("You can try though, so here's the syntax to not compile anything (if ppc is in usr/bin):\n\n");
            printf("ppc <C source file>\n\n");
            printf("If ppc is in your current directory, you just add ./ to the beginning, like this:\n\n");
            printf("./ppc <C source file>\n\n");
            printf("NOTE: NO SPACES IN FILENAMES.");
            return(0); // It's good
        }
        else{ // something... else. Maybe you said ppc astro-zombies
            printf("IG you're trying to compile a file, but currently, there's no way to compile anything :(");
            return(0);
        }
    }
}
