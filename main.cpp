#include "Command.h"
#include <unistd.h>
#include <iostream>
using namespace std;
#include "utils.h"
int main(int argc, char *argv[]){
	char * args[] = {"ls","-l"};
	cout << "Argc = " << argc << endl;
	Command cmd(args[0],args,2);	
	//Command cmdIn(argv[0],argv,argc);
	cmd.printArgs();
	//cmdIn.printArgs();
	cmd.run();
	char *arrayEntry[20];
	argsToArray(arrayEntry);
	printArray(arrayEntry[0],3);
}
