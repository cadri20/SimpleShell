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

