/**
 * @file signal_segfault.c
 * @brief Program that dereferences a null pointer causing a segmentation fault
 */

/**
 * Modified by: Michael Johnston
 * 
 * Brief summary of modifications: add handler and catch for SEGV signal. program now runs infinitly.
 */


#include <stdio.h>
#include <unistd.h>
#include <signal.h>
/**
*@brief handler fig seg fault
 */
 void handle_segFault(int sig) {
    printf("\nReceived a segmentation error\n");
}

int main (int argc, char* argv[]) {
    //signal catch
    signal(SIGSEGV,handle_segFault);
    // Declare a null pointer
    int* i = NULL;

    // Dereference the null pointer
    printf("The value of i is: %d\n", *i);

    // Return to exit the program
    return 0;
}