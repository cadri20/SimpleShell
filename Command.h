class Command{
	private:
		char *name;
		char *arguments[];
	public:
		Command(char *name, char *arguments[]){
			this->name = name;
			this->arguments = arguments;
		}
}
