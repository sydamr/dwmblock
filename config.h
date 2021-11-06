//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "music",  1, 10},
  {"",  "uptime.sh", 2,  1},
  {"",  "temp", 1,  1},
  {"",  "volume", 1,  1},
  {"",  "clock",  60, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
