#include <iostream>
#include<fstream>
#include<ctime>	

using namespace std;
int n;
int main()
{
	//C
	//input
	FILE * fi;
	fi = fopen("InputFile.txt","r");  
	fscanf(fi,"%d",&n);
	fclose (fi);
	//output
	FILE * fo;
	fo = fopen("OutputFile.txt","w");
	fprintf(fo,"%d", n);
	fclose (fo);
	//C++
	//input
	ifstream fin;
	fin.open("InputFile.txt");
	fin >> n;
	//output
	ofstream fout;
	fout.open("OutputFile.txt");
	fout << n;
	
	clock_t t;
	//Start
	t = clock();
	//end
	t = clock() - t;
	//time
	printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
    
	return 0;
}
