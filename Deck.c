# define DECK_CAPACITY ( RANK_COUNT * SUIT_COUNT )
typedef struct Deck {
    Card cards [ DECK_CAPACITY ];
    int length ;
} Deck ;
