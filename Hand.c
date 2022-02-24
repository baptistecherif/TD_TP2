typedef enum Hand {
    HAND_UNKNOWN = -1,
    HAND_HICARD , HAND_PAIR , HAND_2PAIRS ,
    HAND_TRIPS , HAND_STRAIGHT , HAND_FLUSH ,
    HAND_BOAT , HAND_QUADS , HAND_STRFLUSH ,
    HAND_COUNT
} Hand ;
char const * HAND_NAMES [ HAND_COUNT ]= {
        "Hi - Card ", " Pair ", " Two Pairs ",
        " Trips ", " Straight ", " Flush ",
        " Boat ", " Quads ", "Str - Flush "
};
