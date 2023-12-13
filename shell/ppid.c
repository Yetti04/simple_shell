#include <stdio.h>
#include <unistd.h>

/**
 * main- Pid
 * Return :Always on 0
 */

int main(void)
{
	pid_t personal_pid;

	personal_pid = getpid();
	printf("%u\n", personal_pid);
	return (0);
}	
