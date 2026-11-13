/**
 * File: 
 * Modified by: Michael Johnston
 * 
 * Brief summary of program: program runs for 6 seconds, alarm is sent after 5.
 */

 #include <stdio.h>
 #include <signal.h>
 #include <unistd.h>
 #include <stdlib.h>

 /**
 * @brief handler for alarm signal
  */
  void handle_alarm(int sig) {
    printf("\nReceived alarm signal\n");
}

int main(){
    //catch alarm signal
    signal(SIGALRM,handle_alarm);
    //send SIGALRM when 5 seconds has passed
    alarm(5);
    //alarm wont be sent if program ends in lesss than 5 seconds
    sleep(6);
    //print statement
    printf("end of program\n");
    return 0;
}