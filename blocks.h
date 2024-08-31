static const Block blocks[] = {
//   Icon    Command                          Update Interval     Update Signal
    { "", "/home/daniel/scripts/checkup.sh",                 3660,               0 },
    { "| ",    "/home/daniel/mis_repos/someblocks/blocks/volume",                               2,                55 },
    { "| ",    "/home/daniel/mis_repos/someblocks/blocks/brightness",                           2,                44 },
    { "| ",    "/home/daniel/mis_repos/someblocks/blocks/wifi",                              5,               0 },
    { "| ",    "/home/daniel/mis_repos/someblocks/blocks/battery",                              60,               0 },
    { "| ",    "date '+%d/%m  %H:%M'",        30,                0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 3;
