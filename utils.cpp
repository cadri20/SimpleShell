#include <iostream>
using namespace std;
#include "utils.h"
void printArray(char array[], int length){
	for(int i = 0; i < length; i++)
		cout << array[i] << endl;
}
void argsToArray(char* array[]){
	const int LENGTH = 80;
	char line[LENGTH] = {};
	cin.getline(line,LENGTH);
	printArray(line,10);
	int i = 0;
	int n = 0;
	cout << "Ingresaste: " << line << endl;
	int character;
	if(line[4] == 0)
		cout << "En la linea 4 acaba" << endl;
	do{
		//char currentChar = line[i];
		char arg[20];
		int j = 0;
		while(line[i] != ' ' && line[i] != 0){
			arg[j] = line[i];
			j++;
			i++;
			cout << "i = " << i << endl << "j = " << j << endl;
		}
		i++;
		character = line[i];
		array[n] = arg;
		n++;
	}while(character != 0 );

}

