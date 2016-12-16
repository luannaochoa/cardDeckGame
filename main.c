//To do list 
	//Create deck +
	//Destroy deck +
	//Print deck +
	//Shuffle deck ?
	//Swap cards
	//Deal deck
	//enum suit struct ?








#include <stdio.h>
#include <stdlib.h> 
	//We can used functions free() and * malloc() bc of this lib
#include <time.h>
 
#define NSUIT 4
#define NVALUES 13
#define TOTAL_CARDS NSUIT*NVALUES

/**Variable Prototypes**/
struct card{
	int suit;
	int value;
}; 

struct deck {
	struct card cards[TOTAL_CARDS];
	int deck_size;
};

// enum suit {
//  };

/**Function Prototypes**/
struct deck * create_deck(void);
int print_deck(struct deck *);
int destroy_deck(struct deck *);
int shuffle(int * deck);

/**Function Definition **/

struct deck * create_deck(void){

	//Create an instance of the desk
	
	struct deck * playingDeck = malloc(sizeof(struct deck));
	int count = 0;

	//Init deck
	for(int suit_count=0; suit_count<NSUIT; suit_count++){
		for(int value_count=0; value_count<NVALUES; value_count++){
			playingDeck->cards[count].value = value_count;
			playingDeck->cards[count].suit = suit_count;
			count++;
		}
	}

	// Init Deck Size 
	playingDeck->deck_size = TOTAL_CARDS;

	return playingDeck;
}

int print_deck(struct deck * playingDeck){
	
	for(int count = 0; count < playingDeck->deck_size; count++){
		printf( "Card Suit: %d "
 				"Card Value: %d \n",
				playingDeck->cards[count].suit, 
				playingDeck->cards[count].value);
	}
	return 0;
}

int destroy_deck(struct deck * playingDeck){

	free(playingDeck);
	//Do I need to state the data type of the pointer?
	
	return 0;
}

int shuffle(int * deck){
	int src, dest, i; 
	for(int i = 0; i< sizeof deck; i++){
		src = i;
		dest = rand()//needs to be rand()%cardsindeck
		swap_cards(deck,src,dest);
	}
	return 0;
}

int swap_cards(){

	return 0;
}

int main( int argc, char *arvgv[]){

	struct deck * deck_pointer = create_deck();

	print_deck(deck_pointer);

	return 0;
}