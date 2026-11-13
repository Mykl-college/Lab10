## Lab 10 signals
# Desc
several tasks and signals
# Sigaction
waits for a SIGINT then terminates the process
# Sigalrm
sends a alarm signal after 5 seconds has passed. sleeps for 6 seconds to ensure 5 seconds can pass
# Segfault
loops between catching and sending a seg fault error signal
# sigaction
practice sigaction with setting flags and create a handler that can receive additional information.
# recv and send
recv is similar to sigaction with waiting to receive a signal which is sent with send. Send uses siqueue to send a value with the signal that recv prints
