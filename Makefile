CFLAGS=-c -g -Wall -Werror
CC=gcc

all: signal_handler recv_signal send_signal signal_sigaction signal_alarm signal_segfault

signal_handler: signal_handler.o
	$(CC) -o sigHand signal_handler.o 

recv_signal: recv_signal.o 
	$(CC) -o recv recv_signal.o

send_signal: send_signal.o
	$(CC) -o send send_signal.o

signal_alarm: signal_alarm.o 
	$(CC) -o alarm signal_alarm.o 

signal_sigaction: signal_sigaction.o
	$(CC) -o action signal_sigaction.o 

signal_segfault: signal_segfault.o 
	$(CC) -o segfault signal_segfault.o

clean:
	rm -f *.o segfault action alarm send recv sigHand

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<