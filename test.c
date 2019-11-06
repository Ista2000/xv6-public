#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int
main(int argc, char *argv[])
{
	volatile int n = 2;
	if(argc > 1)
		n = atoi(argv[1]);
	for(int i = 0;i<n;i++);
	cps();
	exit();
}
