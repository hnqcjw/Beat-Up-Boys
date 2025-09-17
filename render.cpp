#include <SFML/Graphics.hpp>
#include "render.h"

using namespace sf;

void render(state& currentState, Text& titleScreen, Color& currentBgColor, Text& demoText, RenderWindow& window) {
    if (currentState == title)  {
        window.draw(titleScreen);
        currentBgColor = Color::Blue;
    }
    else if (currentState == charSelect) {
        window.draw(demoText);
        currentBgColor = Color::Black;
    }
}

