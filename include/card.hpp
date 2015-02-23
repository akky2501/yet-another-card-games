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
		Card(CardID, std::string);
		Card();
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
		Pile(Player);
		Pile();
		virtual ~Pile();
		AddToTtop(Card);
		AddToBottom(Card);

	private:
		enum attribute {
			kDeck,
			kHand,
			kDiscard,
			kField,
			kExpelled_From_Everywhere,
		} pile_attr_;
		Player owned_;
		std::deque<Card> pile_of_cards_;
};

#endif
