#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include <stddef.h>


int
main(int argc, char *argv[])
{
	int n = 2, p = 20;
	if(argc > 1)
		n = atoi(argv[1]);
	if(argc > 2)
		p = atoi(argv[2]);
	for(int i = 0;i<n;i++)
	{
		int id = fork();
		if(id < 0)
			printf(1, "Some error occured");
		else if(id == 0)
		{
			volatile double x = 0, y = 0.023;
			for(int j = 0;j<=10000000;j++)
				x += 1.456 * 234.125 + y, y = x-2;
			break;
		}
		else
		{
			printf(1, "Process with pid %d created \n", id);
			set_priority(id, p-i);
			// cps();
			// int wtime = 0, rtime = 0;
			// waitx(&wtime, &rtime);
			// printf(1, "Process finished: %d %d %d\n", id, wtime, rtime);
		}
	}
	exit();
}
