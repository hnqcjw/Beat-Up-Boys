#ifndef __RENDER_H
#define __RENDER_H

#include <SFML/Graphics.hpp>
using namespace sf;

enum state { title, charSelect, stageSelect, fight };

void render(state& currentState, Text& titleScreen, Color& currentBgColor, Text& demoText, Sprite& RedBoy, RenderWindow& window);

#endif
