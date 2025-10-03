#ifndef __RENDER_H
#define __RENDER_H

enum state { title, charSelect, stageSelect, fight };

#define render() \
    window.clear(currentBgColor); \
    if (currentState == title)  { \
        DRAW(titleScreen); \
        currentBgColor = Color::Blue; \
    } \
    else if (currentState == charSelect) { \
        DRAW(charMenu); \
        DRAW(RedBoy); \
        DRAW(BluBoy); \
        DRAW(GreenBoy); \
        DRAW(YelloBoy); \
        DRAW(pointer); \
        currentBgColor = Color::Black; \
}

#endif
