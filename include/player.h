#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

typedef PlayerID;

class Player {
	public:
		Player(PlayerID id, std::string name) {
			id_ = id;
			name_ = name;
		};
		virtual ~Player();

	private:
		std::string name_;
		PlayerID id_;
};

#endif
