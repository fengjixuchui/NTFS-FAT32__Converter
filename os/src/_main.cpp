#include "Converter.h"
#include "FATRead.h"
int main ()
{
	FATRead *d = new FATRead ("fatfinal.img");
	d->readBPB ();
	d->printAll ();

	NTFS *f = new NTFS ("ntfs.img");		// \\\\.\\I:
	f->readPartitionBootSector ();
	f->getMFTChain ();
	f->readMFT (5, 0);


	return 0;
}