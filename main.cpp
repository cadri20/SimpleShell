#include "Command.h"
#include <unistd.h>
#include <iostream>
using namespace std;
#include "utils.h"
int main(){
	while(1){
		cout << "simple shell > ";
		char *arrayEntry[20];
		int argc = argsToArray(arrayEntry);
		Command cmdIn(arrayEntry[0],arrayEntry,argc);
		cmdIn.run();
	}
}
