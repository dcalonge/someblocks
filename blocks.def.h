static const Block blocks[] = {
//   Icon    Command                          Update Interval     Update Signal
    { "", "blocks/checkup",                 3660,               30 },
    { "",    "blocks/mic",                               0,                15 },
    { "",    "blocks/volume",                               0,                10 },
    { "   ",    "blocks/brightness",                           0,                20 },
    { "   ",    "blocks/wifi",                              30,               25 },
    { "   ",    "blocks/battery",                              10,               0 },
    { "  ",    "date '+%H:%M %d/%m '",        30,                0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
