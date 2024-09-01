static const Block blocks[] = {
//   Icon    Command                          Update Interval     Update Signal
    { "   ", "/home/daniel/scripts/checkup.sh",                 3660,               30 },
    { "",    "/home/daniel/mis_repos/someblocks/blocks/mic",                               0,                15 },
    { "   ",    "/home/daniel/mis_repos/someblocks/blocks/volume",                               0,                10 },
    { "   ",    "/home/daniel/mis_repos/someblocks/blocks/brightness",                           0,                20 },
    { "   ",    "/home/daniel/mis_repos/someblocks/blocks/wifi",                              30,               25 },
    { "   ",    "/home/daniel/mis_repos/someblocks/blocks/battery",                              10,               0 },
    { "  ",    "date '+%d/%m %H:%M '",        30,                0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 5;
