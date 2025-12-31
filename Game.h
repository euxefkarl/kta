#pragma once
#include <SFML/Graphics.hpp>
class Game
{
	sf::RenderWindow m_window;
	void render();
public:
	Game();
	void run();
};
