#include "Converter.h"

int main ()
{
	Converter *f = new Converter ("\\\\.\\I:");
	f->readPartitionBootSector ();
	f->getMFTChain ();
	f->getVCNOffset (64);

	return 0;
}