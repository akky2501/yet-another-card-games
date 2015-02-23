#ifndef CARD_HPP
#define CARD_HPP

#include <deque>
#include <string>

#include "player.hpp"

class Card;
class Pile;
typedef unsigned int CardID;

class Card {
	public:
		Card(CardID id, std::string name) {
			id_ = id;
			name_ = name;
			owned_ = NULL;
		};
		virtual ~Card();
		MoveToTop(Pile);
		MoveToBottom(Pile);

	private:
		CardID id_;
		std::string name_;
		Pile *owned_;
};

class Pile {
	public:
		Pile() {};
		virtual ~Pile();
		AddToTtop(Card);
		AddToBottom(Card);

	private:
		std::deque<Card> pile_of_cards_;
};

#endif
