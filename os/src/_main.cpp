#include "Converter.h"

int main ()
{
	//BiosParameterBlock bpb;
	//std::fstream d;
	//d.open ("\\\\.\\E:", std::ios::binary | std::ios::in);
	//d.read (reinterpret_cast<char *>(&bpb), sizeof (BiosParameterBlock));
	//
	//uint32_t ConverterStart = bpb.reservedSectors * 512;


	NTFS *f = new NTFS ("ntfs.img");		// \\\\.\\I:
	f->readPartitionBootSector ();
	f->getMFTChain ();
	f->readMFT (5, 0);



	return 0;
}