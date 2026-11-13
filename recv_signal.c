/**
 * File: 
 * Modified by:
 * 
 * Brief summary of program: prints pid and then sits and wait for signal
 */
#include <stdio.h>
 #include <signal.h>
 #include <unistd.h>
 #include <stdlib.h>

 void handle_sa(int sig, siginfo_t *info, void *utext){
    printf("\nPID: %d\nSival: %d\n",info->si_pid,info->si_value.sival_int);
 }

 int main(void){
    //struct
    struct sigaction sa;
    //catch
    sa.sa_sigaction = handle_sa;
    //
    sigemptyset(&sa.sa_mask);
    //Has the signal handler take three args, lets it take in info
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1,&sa,NULL);
    //get pid
    printf("This process' ID: %d\n",getpid());
    //loop
    while(1){pause();}

    return 0;
 }