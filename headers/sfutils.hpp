#ifndef __SF_UTILS_H
#define __SF_UTILS_H

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

#endif
