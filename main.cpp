#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "render.h"

using namespace sf;

int main() {
    RenderWindow window(VideoMode(800, 600), "Beat-Up Boys");

    Font font;
    if (!font.loadFromFile("./assets/tuffy.ttf")) {
        std::cerr << "No Font";
        return EXIT_FAILURE;
    }

    Color currentBgColor = Color::Blue;

    state currentState = title;

    // Set up title text!

    Text titleScreen("\t\t\t\tBeat-Up-Boys\n\n\n\n\n\n\n\n\n\n\t\t\t\tPress A to play", font, 30);
    titleScreen.setStyle(Text::Bold);
    titleScreen.setFillColor(Color::White);

    Text demoText("Fighting: Coming Soon!", font, 30);
    demoText.setFillColor(Color::Red);
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        // Handle real-time input
        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            window.close();
        }

        window.clear(currentBgColor);
        if (currentState == title && Keyboard::isKeyPressed(Keyboard::A)) {
            currentState = charSelect;
        }
/*
        if (currentState == title)  {
            window.draw(titleScreen);
            currentBgColor = Color::Blue;
        }
        else if (currentState == charSelect) {
            window.draw(demoText);
            currentBgColor = Color::Black;
        }
        */
        render(currentState, titleScreen, currentBgColor, demoText, window);
        window.display();
    }

    return 0;
}
