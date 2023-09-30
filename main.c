
#include "common.h"

#include "draw.h"
#include "init.h"
#include "input.h"
#include "main.h"

App app;

int main(int argc, char *argv[]) {
    printf("Starting...\n");
    memset(&app, 0, sizeof(App));
    initSDL();
    atexit(cleanup);

    while(1)
    {
        prepareScene();
        doInput();
        presentScene();
        SDL_Delay(16);
    }
    return 0;
}
