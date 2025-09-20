#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "headers/render.h" // render function

using namespace sf;

int main() {
    RenderWindow window(VideoMode(800, 600), "Beat-Up Boys");

    Font font;
    if (!font.loadFromFile("./assets/tuffy.ttf")) { // LOAD FROM ASSETS
        std::cerr << "No Font";
        return EXIT_FAILURE;
    }

    Texture RedBoyImg;
    if (!RedBoyImg.loadFromFile("./assets/RedBoy.png")) {
        std::cerr << "No RedBoyImg.png found.";
        return EXIT_FAILURE;
    }
    Sprite RedBoy;
    RedBoy.setTexture(RedBoyImg);

    Color currentBgColor = Color::Blue;

    state currentState = title;

    // Set up title text!

    Text titleScreen("\t\t\t\tBeat-Up-Boys\n\n\n\n\n\n\n\n\n\n\t\t\t\tPress A to play", font, 30);
    titleScreen.setStyle(Text::Bold);
    titleScreen.setFillColor(Color::White);

    Text charMenu("CHOOSE YOUR CHARACTER", font, 30);
    charMenu.setFillColor(Color::Red);
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
         }

        // Handle real-time input (Esc Key)
        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            window.close();
        }

        window.clear(currentBgColor);
        if (currentState == title && Keyboard::isKeyPressed(Keyboard::A)) {
            currentState = charSelect;
        }

        render(currentState, titleScreen, currentBgColor, charMenu, RedBoy, window);

        window.display();
    }

    return 0;
}
