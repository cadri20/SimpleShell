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
using namespace std;
#include "utils.h"
int argsToArray(char* array[]){
	const int LENGTH = 80;
	char line[LENGTH] = {};
	cin.getline(line,LENGTH);
	int i = 0;
	int n = 0;
	int character;
	do{
		char* arg = new char[20];
		int j = 0;
		while(line[i] != ' ' && line[i] != 0){
			arg[j] = line[i];
			j++;
			i++;
		}
		i++;
		character = line[i];
		array[n] = arg;
		n++;
	}while(character != 0 );
	return n;

}

