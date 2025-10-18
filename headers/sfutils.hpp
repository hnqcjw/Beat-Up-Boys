#ifndef __SF_UTILS_HPP
#define __SF_UTILS_HPP

#define DRAW(X) window.draw(X)

#define DECLARESPRITE(NAME, IMG) \
    Texture NAME##Img; \
    if (!NAME##Img.loadFromFile(IMG)) { \
        std::cerr << "No Image Found."; \
        return EXIT_FAILURE; \
    } \
    Sprite NAME; \
    NAME.setTexture(NAME##Img)

#define KEYPRESSED(K) Keyboard::isKeyPressed(Keyboard::K)

#define COLLIDES(SPRITE1, SPRITE2) SPRITE1.getGlobalBounds().intersects(SPRITE2.getGlobalBounds())

#endif
