#include <iostream>
#include <unistd.h>
#include <wait.h>
using std::cout;
using std::endl;
#include "Command.h"

Command::Command(char *name, char* argumentsCmd[], int argLength){
	this->name = name;
	this->argLength = argLength;
	for(int i = 0; i < argLength; i++){
		arguments[i] = argumentsCmd[i];
	}
	arguments[argLength] = NULL;
}
void Command::printArgs(){
	for(int i = 0; i < argLength; i++){
		cout << arguments[i] << endl;
	}
}
void Command::run(){
	switch(fork()){
		case 0:
			//cout << "Soy el hijo" << endl;
			execvp(name,arguments);
			break;
		case -1:
			//cout << "Error" << endl;
			break;
		default:
			//cout << "Soy el padre" << endl;
			wait(NULL);
			//cout << "El hijo termino" << endl;
			break;
	}
}
