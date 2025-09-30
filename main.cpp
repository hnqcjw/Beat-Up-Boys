#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "headers/render.hpp" // render function
#include "headers/sfutils.hpp"

using namespace sf;

int main() {
    RenderWindow window(VideoMode(800, 600), "Beat-Up Boys");

    Font font;
    if (!font.loadFromFile("../assets/tuffy.ttf")) { // LOAD FROM ASSETS
        std::cerr << "No Font";
        return EXIT_FAILURE;
    }

    DECLARESPRITE(RedBoy, "../assets/RedBoy.png"); // Refer to headers/render.h
    DECLARESPRITE(BluBoy, "../assets/BluBoy.png");
    DECLARESPRITE(YelloBoy, "../assets/YelloBoy.png");
    DECLARESPRITE(GreenBoy, "../assets/GreenBoy.png");
    RedBoy.setPosition({100.f, 100.f});
    RedBoy.setScale({4.f, 4.f});
    BluBoy.setPosition({200.f, 100.f});
    BluBoy.setScale({4.f, 4.f});
    YelloBoy.setPosition({300.f, 100.f});
    YelloBoy.setScale({4.f, 4.f});
	GreenBoy.setPosition({400.f, 100.f});
    GreenBoy.setScale({4.f, 4.f});  
    
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
        if (KEYPRESSED(Escape)) {
            window.close();
        }

        if (currentState == title && KEYPRESSED(A)) {
            currentState = charSelect;
        }
        
        render()
        
        window.display();
        }
    return 0;
}
