//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {

/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"",  "music",  1, 5},
  {"⏱",  "uptime.sh", 2,  4},
  {"",  "weather", 2,  8},
  {"🌡",  "temp", 1,  3},
  {"💾",  "ram", 5,  7},
  {"",  "volume", 1,  1},
  {"🗓️",  "clock",  30, 2},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
