/**
 * create_static_lib.sh - Bash script that creates a static library called
 *                        liball.a from all the .c files in the current directory.
 *
 * Description: This script compiles all .c files into position-independent code
 *              and generates object files. It then creates a static library called
 *              liball.a from all the object files and indexes the library for
 *              faster symbol lookup. Finally, it removes all the object files.
 */

#include <stdio.h>

int main(void)
{
    /* Compile all .c files with position-independent code and generate object files */
    system("gcc -Wall -Werror -Wextra -pedantic -c *.c");

    /* Create static library */
    system("ar -rc liball.a *.o");

    /* Index static library */
    system("ranlib liball.a");

    /* Clean up object files */
    system("rm *.o");

    return (0);
}

