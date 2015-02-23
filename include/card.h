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
		Card(CardID id, std::string name, Pile *owner) {
			id_ = id;
			name_ = name;
			owner_ = owner;
		};
		virtual ~Card();
		MoveToTop(Pile);
		MoveToBottom(Pile);

	private:
		CardID id_;
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
		std::deque<CardID> pile_of_cards_;
};

#endif
