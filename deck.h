#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - lkcqekc
 * @SPADE: wece
 * @HEART: wcelc,wec
 * @CLUB: weckmcec
 * @DIAMOND: wekcme
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - acss
 *
 * @value: wqecm,lewc
 * @kind: wkecmkc
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - ewwlccec
 * @card: wekcmwelcwc
 * @prev: wekclewc
 * @next: ewoclcewc
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
#endif /* DECK_H */ 
