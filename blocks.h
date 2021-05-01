//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ",  "$HOME/.scripts/bar/bar-packages",3600,  22},
	{"",  "$HOME/.scripts/bar/bar-volume", 	 0,    10},
	{"", "$HOME/.scripts/bar/bar-mem", 	 5,     1},
	{"", "$HOME/.scripts/bar/bar-temp", 	15,     1},
	{"",   "$HOME/.scripts/bar/bar-date", 	60,     1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
