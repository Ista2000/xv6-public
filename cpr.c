#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int
main(int argc, char *argv[])
{
	if(argc < 3)
		printf(1, "Wrong number of arguments\n");
	else
	{
		int pid = atoi(argv[1]), priority = atoi(argv[2]);
		set_priority(pid, priority);
	}
	exit();
}
