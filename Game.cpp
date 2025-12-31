#include "Game.h"
#include <SFML/Graphics.hpp>

Game::Game() : m_window(sf::VideoMode({1920,1080}), "kta")
{
	m_window.setFramerateLimit(120);
}

void Game::render()
{
	m_window.clear();
	m_window.display();
}

void Game::run()
{
	while (m_window.isOpen())
	{
		render();
	}
}