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
