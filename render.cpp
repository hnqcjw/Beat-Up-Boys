#include <SFML/Graphics.hpp>
#include "headers/render.hpp"
#include "headers/sfutils.hpp"

using namespace sf;

void render(state& currentState, Text& titleScreen, Color& currentBgColor, Text& demoText, Sprite& RedBoy, RenderWindow& window) {
    if (currentState == title)  {
        DRAW(titleScreen);
        currentBgColor = Color::Blue;
    }
    else if (currentState == charSelect) {
        DRAW(demoText);
        DRAW(RedBoy);
        currentBgColor = Color::Black;
    }
}

