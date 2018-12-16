#include "MenuState.h"
#include "TextureManager.h"
#include "Game.h"
const std::string MenuState::s_menuID = "MENU";
MenuState* MenuState::s_pInstance = nullptr;

void MenuState::update()
{
	// nothing for now
	for (int i = 0; i < m_gameObjects.size(); i++)
	{
		m_gameObjects[i]->update();
	}
}

void MenuState::render()
{
	// nothing for now
	for (int i = 0; i < m_gameObjects.size(); i++)
	{
		m_gameObjects[i]->draw();
	}
}

bool MenuState::onEnter()
{
	std::cout << "entering MenuState\n";
	TextureManager::Instance()->load("assets/animate-alpha.png", "animate", Game::Instance()->getRenderer());
	GameObject* go1 = new Player(new LoaderParams(0, 0, 120, 120, "animate"));
	m_gameObjects.push_back(go1);
	return true;
}

bool MenuState::onExit()
{
	std::cout << "exiting MenuState\n";
	return true;
}