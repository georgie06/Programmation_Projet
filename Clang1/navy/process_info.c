#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

void pid_one ()
{
    int pid = getpid();
    int ppid = getppid();
    int pgid = getpgid(pid);
    printf("PID: %i\nPPID: %i\nPGID: %i",pid,ppid,pgid);
   //int k = kill(pid,SIGQUIT);
}
int getkill () 
{
    int pid = getpid();
    kill(pid,SIGQUIT);
    return 0;
}
/*int main (int ac, char **av){
    int pid = 10;
    int pid2 = 12;
    struct sigaction one;
    struct sigaction two;
    sigaction(pid,one,two);
    while(1) {

    }
    one.sa_sigaction = pid;
char *strsignal(int sig);*/
int counter;

void catch_usr2(void) {
    counter++;
}
int sw;
void catch_usr1(void) {
    if(!sw) {
        signal(SIGUSR2, catch_usr2);
        sw = 1;
    } else {
        signal(SIGUSR2, SIG_DFL);
        /* Side note: If you want to count these only single time, remove line below. */
        sw = 0;
    }
}
int main(int argc, char *argv[]){
    int pid_sender = 12985;
    kill(pid_sender,SIGUSR1); //The other process is notified to start
    signal(SIGUSR1,catch_usr1);
}

#include <signal.h>
#include <unistd.h>

/*************** main fonc **************/
int main (int argc, char *argv[]){
  /* on_sigusr1 is the function executed when receiving 
   * SIGUSR1*/
  // TO BE COMPLETED

  /* on_sigusr2 is the function executed when receiving 
   * SIGUSR2 */
  // TO BE COMPLETED

  /* on_other_signals is the function executed when receiving 
   * other signals */
  // TO BE COMPLETED

  while (1)
  {
    printf("main : pid %d with waiting for signals \n", (int)getpid());
    sleep(5);
  } /* Waiting for signals */ 
} 

/*************** on_sigusr1 function **************/
void on_sigusr1 (int NumSignal)
{
  printf("Signal User defined signal 1 received from %d"),getpid());
  system("who");
  // TO BE COMPLETED: execute command "who"
}


/*************** on_sigusr2 function **************/
void on_sigusr2 (int NumSignal)
{
 printf("Signal User defined signal 2 received from %d"),getpid());
 system("df .");

/*************** on_others function **************/
void on_others (int NumSignal)
{
 printf("Unable to handle Killed signal");
}
/*static int SigHandler(int signo){
    switch (signo) {
            case SIGTSTP:
            printf("TSTP");
            fflush(stdout);
            break;
    }
    return 0;
}

static volatile int signalPid = -1;
void    get_pid(int sig, siginfo_t *info, void *context)
{
    signalPid = info->si_pid;
}
int main(int argc, char **argv)
{
    struct sigaction sa;

    printf("PID: %d\n", getpid());       //display PID for kill()
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = get_pid;
    sigaction(SIGUSR1, &sa, NULL);

    //sigwait();                           //wait for a signal
    printf("PID of signal sender = %d\n", signalPid);
    //struct sigaction psa;
    //int a = atoi(*av[1]);
    //int b = atoi(*av[2]);
    
    sa.sa_sigaction = SigHandler(10);
    sigaction(SIGTSTP, &sa, NULL);
    for(;;) {}
   return 0;
   }
*/

