#include "Command.h"
#include <unistd.h>
int main(){
	char * args[] = {"ls","-l"};
	Command cmd("ls",args,2);	
	cmd.printArgs();
	cmd.run();
}
