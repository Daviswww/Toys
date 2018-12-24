#include <cstdio>
#include <cstdlib>
#include "Assembler.h"
using namespace std;

int main(int argc, char *argv[])
{
    char asmFile[100];
    char objFile0[] = "test.obj0", *objFile = objFile0;
    
    //取得檔名 
    scanf("%s", asmFile);
    getchar(); 
    
    //建立obj檔 
    assemble(asmFile, objFile);
    
    //跑obj檔 
    Cpu0 cpu0;
    cpu0.RunObjFile(objFile);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

