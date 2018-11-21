#include"OpTable.h"

class Cpu0
{
private:
	BYTE *m;
	int mSize;
	int R[16], IR;
	
	Cpu0* Cpu0New(char *objfile);
	void Cpu0Free(Cpu0 *cpu0);
	void Cpu0Run(Cpu0 *cpu0, int startPC);
	void Cpu0Dump(Cpu0 *cpu0);
public:
	Cpu0();
	void RunObjFile(char *objFile);
};
