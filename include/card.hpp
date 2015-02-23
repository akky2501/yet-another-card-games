#ifndef CARD_HPP
#define CARD_HPP

#include <deque>
#include <string>

#include "player.hpp"

;

struct card_data_t {
	std::string name;
	int card_NO;
};

struct card_pile_t {
		enum attribute {
		DECK,
		HAND,
		DISCARD,
		FIELD,
		EXPELLED_FROM_EVERYWHERE,
	} pile_attr;
	player_t owned;
	std::deque<card_data_t> pile;
};

#endif
