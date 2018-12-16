//#pragma once
//#include "SDL.h"
//#include <vector>
//#include "Vector2D.h"
//
//enum mouse_buttons
//{
//	LEFT = 0,
//	MIDDLE = 1,
//	RIGHT = 2
//};
//
//class InputHandler
//{
//public:
//	static InputHandler* Instance()
//	{
//		if (s_pInstance == 0) {
//			s_pInstance = new InputHandler();
//		}
//		return s_pInstance;
//	}
//	bool getMouseButtonState(int buttonNumber);
//	std::vector<bool> m_mouseButtonStates;	
//	void update();
//	void clean();  
//	bool isKeyDown(SDL_Scancode Key);
//private:
//	InputHandler();
//	~InputHandler() {}
//	static InputHandler* s_pInstance;
//	const Uint8* m_keystates;
//	const Uint8* m_mousestates;
//	void onKeyUp();
//	void onKeyDown();
//	void onMouseButtonUp(SDL_Event event);
//	void onMouseButtonDown(SDL_Event event);
//	void onMouseMove(SDL_Event event);
//};
//
//typedef InputHandler TheInputHandler;
#pragma once
#include "SDL.h"
#include <vector>
#include "Vector2D.h"

enum mouse_buttons
{
	LEFT = 0,
	MIDDLE = 1,
	RIGHT = 2
};

class InputHandler
{
public:
	static InputHandler* Instance()
	{
		if (s_pInstance == 0) {
			s_pInstance = new InputHandler();
		}
		return s_pInstance;
	}
	bool getMouseButtonState(int buttonNumber);
	std::vector<bool> m_mouseButtonStates;	//���콺 ���¹���(�迭����)
	Vector2D* m_mousePosition;//���콺 �̺�Ʈ
	Vector2D* getMousePosition();

	void update();
	void clean();  // ����̽� ���� �ʱ�ȭ�� �κ��� clear 
	bool isKeyDown(SDL_Scancode Key);
private:
	InputHandler();
	~InputHandler() {}
	static InputHandler* s_pInstance;
	const Uint8* m_keystates;
	const Uint8* m_mousestates;
	void onKeyUp();
	void onKeyDown();
	void onMouseButtonUp(SDL_Event event);
	void onMouseButtonDown(SDL_Event event);
	void onMouseMove(SDL_Event event);
};

typedef InputHandler TheInputHandler;