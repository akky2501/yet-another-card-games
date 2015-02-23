#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

typedef PlayerID;

class Player {
	public:
		Player(PlayerID , std::string);
		virtual ~Player();

	private:
		std::string name_;
		PlayerID id;
};

#endif
