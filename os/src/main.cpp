#include "Converter.h"

int main ()
{
	Converter *f = new Converter ("ntfs.img");		// \\\\.\\I:
	f->readPartitionBootSector ();
	f->getMFTChain ();
	f->readMFT (62);

	return 0;
}