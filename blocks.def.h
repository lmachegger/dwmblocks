//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    {" 🐧 ", "~/.local/bin/kernel",		    360,		        2},

	{" 🔺 ", "~/.local/bin/upt",		        60,		            2},

	{" 📦 ", "~/.local/bin/pacupdate",		360,		        9},
	
	{" 💻 ", "~/.local/bin/memory",	        6,		            1},

	{" 🔊 ", "~/.local/bin/volume",			2,		            10},

    {" 🕑 ", "~/.local/bin/clock",			5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
