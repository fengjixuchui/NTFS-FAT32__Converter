#include "Fat.h"


int main ()
{
	Fat *f = new Fat ("wf.img");
	f->readBlock (0);

	return 0;
}