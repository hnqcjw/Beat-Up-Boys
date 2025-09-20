#include <SFML/Graphics.hpp>
#include "headers/render.h"

using namespace sf;

void render(state& currentState, Text& titleScreen, Color& currentBgColor, Text& demoText, Sprite& RedBoy, RenderWindow& window) {
    if (currentState == title)  {
        window.draw(titleScreen);
        window.draw(RedBoy);
        currentBgColor = Color::Blue;
    }
    else if (currentState == charSelect) {
        window.draw(demoText);
        currentBgColor = Color::Black;
    }
}

