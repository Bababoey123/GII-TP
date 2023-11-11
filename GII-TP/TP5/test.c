/* test_argc_argv.c - 19/09/2023
 *
 * description du programme
 *
 * Compiler avec :
 * gcc -W -Wall -std=c99 test_argc_argv.c
 *
 */
#include <stdio.h>

#define TAILLE 7

int main(int argc, char * argv[])
{
    //test argc, argv
    printf("argc = %i ", argc);
    for (int i = 0; i < argc; ++i)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");

	return 0;
}




