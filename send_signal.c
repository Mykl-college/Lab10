/**
 * File: 
 * Modified by:
 * 
 * Brief summary of program: accpets pid as arguement then sends a signal to the assigned pid
 */
 #include <stdio.h>
 #include <signal.h>
 #include <unistd.h>
 #include <stdlib.h>
 #include <time.h>

 int main(int argc,char *argv[]){
    //get pid
    //sent in as arguement
    pid_t pid = (pid_t)atoi(argv[1]);
    //random number
    int rando;
    srand(time(NULL));
    int min = 1;
    int max = 670;
    rando = (rand() % (max - min + 1)) + min;
    //set the union
    union sigval value;
    value.sival_int = rando;
    //print value
    printf("sent number: %d\n",value.sival_int);
    //send signal
    sigqueue(pid,SIGUSR1,value);
    /*if (sigqueue(pid, SIGUSR1, value) == -1) {
        perror("sigqueue failed");
    }*/
    //
    return 0;
 }