/********************************************************
 * Licensed under the MIT license.                      *
 * (c) DamieFC 2021                                     *
 ********************************************************/
#include <stdio.h>
#include <stdlib.h> // IDK why

int main(int argc, char *argv[]){
    if(argc < 0)
    { // if there are no arguments
        printf("Error: no arguments");
        return(1); // Error
    }
    else if(argc >= 1)
    {
        if(argv[0] == "help")
        { // If you need help
            printf("Welcome to the Pigeon Potato Compiler!\n");
            printf("It's in alpha stage, so really, there is no way to compile anything...\tyet.\n");
            printf("You can try though, so here's the syntax to not compile anything (if ppc is in usr/bin):\n\n");
            printf("ppc <C source file>\n\n");
            printf("If ppc is in your current directory, you just add ./ to the beginning, like this:\n\n");
            printf("./ppc <C source file>\n\n");
            printf("NOTE: NO SPACES IN FILENAMES. I think, maybe you can do something like ppc cool\\ file, idk.");
            printf("This Pigeon Potato likes Astro-Zombies by the Misfits");
            return(0); // It's good
        }
        else if(argv[0] == "astro-zombies")
        {
            printf("Prime directive, exterminate\n");
            printf("The whole human race\n");
            printf("And your face drops in a pile of flesh\n");
            printf("And then your heart, heart pounds\n");
            printf("Till it pumps in death\n");
            printf("Prime directive, exterminate\n");
            printf("Whatever stands left\n\n");
            printf("Those lyrics are from the Misfits' song Astro-Zombies.");
            return(0);
        }
        else
        {
            /*printf("IG you're trying to compile a file, but currently, there's no way to compile anything :(\n");
            printf("If you want to read a few Misfits lyrics, try ppc astro-zombies.");*/
            FILE* f2c = argv[1]; // f2c means file to compile
            fopen(f2c, "r");
            if(fopen(f2c, "r") == NULL) {  // Checks if the file is there
                printf("Error: File not found.");
                return(1); // Fudge
            }
            return(0);
        }
    }
}
