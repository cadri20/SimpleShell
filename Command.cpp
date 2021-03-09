/*
 * Copyright (C) 2020 cadri
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

*/

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
			execvp(name,arguments);
			break;
		case -1:
			break;
		default:
			wait(NULL);
			break;
	}
}
