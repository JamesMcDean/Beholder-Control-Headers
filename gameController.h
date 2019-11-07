#ifndef GENERAL_GAME_CONTROLLER_H
#define GENERAL_GAME_CONTROLLER_H

typedef enum {
    BUTTON_none = 0,
    
    BUTTON_leftBumper = 1<<0,
    BUTTON_rightBumper = 1<<1,
    
    BUTTON_leftStickButton = 1<<2,
    BUTTON_rightStickButton = 1<<3,

    BUTTON_dpadUp = 1<<4,
    BUTTON_dpadDown = 1<<5,
    BUTTON_dpadLeft = 1<<6,
    BUTTON_dpadRight = 1<<7,

    BUTTON_actionUp = 1<<8,
    BUTTON_actionDown = 1<<9,
    BUTTON_actionLeft = 1<<10,
    BUTTON_actionRight = 1<<11,

    BUTTON_sysStart = 1<<12,
    BUTTON_sysOption = 1<<13,
    BUTTON_sysHome = 1<<14
} BUTTON_FLAGS;

typedef struct {
    // [0.0, 1.0]
    float leftTrigger;
    float rightTrigger; 

    // [-1.0, 1.0]
    float leftStickX;  // +: Right; -: Left
    float leftStickY;  // +: Up; -: Down
    float rightStickX; // +: Right; -: Left
    float rightStickY; // +: Up; -: Down

    BUTTON_FLAGS buttons;
} GAME_CONTROLLER_BULK;

#endif