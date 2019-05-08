#include <stdio.h>
#include <signal.h>


void jelkezelo(int sig)
{
	printf("Off %d\n",sig);
}
int main () {
for(;;){
	if(signal(SIGINT, jelkezelo)==SIG_IGN)
	   signal(SIGINT, SIG_IGN);
	}
return 0;
}
