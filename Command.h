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

class Command{
	private:
		char *name;
		int argLength;
		char *arguments[20];
	public:
		Command(char *name, char *arguments[], int argLength);
		void printArgs();
		void run();
};
