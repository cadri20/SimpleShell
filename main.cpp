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

// author Adrian Coloma
#include "Command.h"
#include <unistd.h>
#include <iostream>
using namespace std;
#include "utils.h"
int main(){
	while(1){
		cout << "SimpleShell > ";
		char *arrayEntry[20];
		int argc = argsToArray(arrayEntry);
		Command cmdIn(arrayEntry[0],arrayEntry,argc);
		cmdIn.run();
	}
}
