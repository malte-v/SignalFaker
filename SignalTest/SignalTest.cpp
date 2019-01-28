#include <iostream>

#include "sigterm.h"
#include "sigkill.h"
#include "sigstop.h"
#include "sigcont.h"

int main(int argc, char *argv[])
{
	int sig = atoi(argv[1]);
	int pid = atoi(argv[2]);
	switch (sig)
	{
	case 9:
		sigkill(pid);
		break;
	case 15:
		sigterm(pid);
		break;
	case 17:
		sigstop(pid);
		break;
	case 19:
		sigcont(pid);
		break;
	default:
		break;
	}
}