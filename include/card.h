#ifndef CARD_HPP
#define CARD_HPP

#include <deque>
#include <string>

#include "player.hpp"

class Card;
class Pile;

class Card {
	public:
		Card(std::string name, Pile *owner) {
			name_ = name;
			owner_ = owner;
		};
		virtual ~Card();
		MoveToTop(Pile);
		MoveToBottom(Pile);

	private:
		std::string name_;
		Pile *owner_;
};

class Pile {
	public:
		Pile() {};
		virtual ~Pile();
		AddToTop(Card);
		AddToBottom(Card);

	private:
		std::deque<Card *> pile_of_cards_;
};

#endif
