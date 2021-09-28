#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>


/*
 *
 *  author: https://github.com/noargs
 *  c refs: https://en.cppreference.com/w/c
 *
 */


int main(int argc, char** argv) {

    puts("Lispc version 0.0.0.1");
    puts("Press Ctrl+c to exit\n");

    while(1){
        // fputs("lispc> ", stdout);
        char* input = readline("lispc> ");

        // fgets(input, 2048, stdin);
        add_history(input);

        printf("%s\n", input);

        free(input);
    }

    return 0;
}
