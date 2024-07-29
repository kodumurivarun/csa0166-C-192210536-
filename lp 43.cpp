#include <dos.h>    // for interrupt()
#include <conio.h>  // for kbhit(), getch()
#include <iostream>
using namespace std;

// Structure to hold mouse information
struct REGS {
    unsigned int ax, bx, cx, dx, si, di, ds, es, flags;
};

// Function to initialize mouse
void initMouse() {
    REGS r;
    r.ax = 0;               // AX = 0 for initialization
    int86(0x33, &r, &r);    // Issue interrupt 0x33
}

// Function to get mouse position
void getMousePosition(int& x, int& y) {
    REGS r;
    r.ax = 0x3;             // AX = 3 to get mouse position
    int86(0x33, &r, &r);    // Issue interrupt 0x33
    x = r.cx;               // CX returns X coordinate
    y = r.dx;               // DX returns Y coordinate
}

// Function to check for mouse events
void checkMouseEvents() {
    REGS r;
    r.ax = 0x3;             // AX = 3 to check for mouse buttons
    int86(0x33, &r, &r);    // Issue interrupt 0x33

    // Check for left button press (AX = 1), right button press (AX = 2)
    if (r.ax == 1) {
        cout << "Left button pressed" << endl;
    } else if (r.ax == 2) {
        cout << "Right button pressed" << endl;
    }
}

int main() {
    initMouse();    // Initialize mouse

    while (!kbhit()) {  // Continue until a key is pressed
        int x, y;
        getMousePosition(x, y); // Get mouse position
        cout << "Mouse position: (" << x << ", " << y << ")" << endl;
        checkMouseEvents(); // Check for mouse button events
    }

    getch();    // Consume the key press
    return 0;
}

