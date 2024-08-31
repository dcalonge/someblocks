static const Block blocks[] = {
//   Icon    Command                          Update Interval     Update Signal
    { "", "/home/daniel/scripts/checkup.sh",                 3660,               0 },
    { "| ",    "/home/daniel/repos/someblocks/blocks/brightness",                           2,                44 },
    { "| ",    "/home/daniel/repos/someblocks/blocks/volume",                               2,                55 },
    { "| ",    "/home/daniel/repos/someblocks/blocks/battery",                              60,               0 },
    { "| ",    "date '+%d/%m/%Y  %H:%M'",        30,                0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
