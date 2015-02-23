#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player {
	public:
		Player(std::string name) {
			name_ = name;
		};
		virtual ~Player();

	private:
		std::string name_;
};

#endif
