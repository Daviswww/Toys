#include <cstdlib>
#include "cpu0.h"

using namespace std;

int main(int argc, char** argv) {
	Cpu0 cpu;
	char objFile0[] = "test.obj0", *objFile = objFile0;
	
	cpu.RunObjFile(objFile);
	
	system("pause");
	return EXIT_SUCCESS;
}
