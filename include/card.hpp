#ifndef CARD_HPP
#define CARD_HPP

#include <deque>
#include <string>

#include "player.hpp"

enum attribute {
	DECK,
	HAND,
	DISCARD,
	FIELD,
	EXPELLED_FROM_EVERYWHERE,
};

struct card_data_t {
	std::string name;
	int card_NO;
	attribute card_attr
};

struct card_pile_t {
	attribute pile_attr;
	player owned;
	std::deque<card_data_t> pile;
};

#endif
