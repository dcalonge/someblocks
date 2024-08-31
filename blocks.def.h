static const Block blocks[] = {
//   Icon    Command                          Update Interval     Update Signal
    { "   ", "checkupdates | wc -l",                 60,               0 },
    { "",    "/home/daniel/repos/someblocks/blocks/brightness",                           2,                0 },
    { "",    "/home/daniel/repos/someblocks/blocks/volume",                               2,                0 },
    { "",    "/home/daniel/repos/someblocks/blocks/battery",                              60,               0 },
    { "",    "date '+ %d/%m/%Y   %H:%M%p'",        5,                0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = '\0';
static unsigned int delimLen = 3;
