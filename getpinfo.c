#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"


int
main(int argc, char *argv[])
{
	int pid = 0;
	if(argc > 1)
		pid = atoi(argv[1]);
	struct proc_stat proc;
	proc.pid = pid;
	getpinfo(&proc);
	printf(1, "Process %d: Ran %d times, for %d milliseconds with priority %d. %d %d %d %d %d ticks on respective priority queues.\n", proc.pid, proc.num_run, (int)(proc.runtime * 1000), proc.current_queue, proc.ticks[0], proc.ticks[1], proc.ticks[2], proc.ticks[3], proc.ticks[4]);

	exit();
}
