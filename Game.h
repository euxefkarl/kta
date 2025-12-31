#pragma once
#include <SFML/Graphics.hpp>
class Game
{	//private members are labeled m_memberName
	sf::RenderWindow m_window;
	void render();

public:
	Game();
	void run();
};
