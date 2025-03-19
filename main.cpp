#include <iostream>
#include <SDL3/SDL.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
bool running = true;
SDL_Event event;

int main() {
	SDL_Window* window;
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow("Epic Shiny LGTV Triangle", SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_OPENGL);
	SDL_GLContext glContext = SDL_GL_CreateContext(window);

    //input
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_MOUSE_MOTION) {
                std::cout << "Mouse moved: X=" << event.motion.x << ", Y=" << event.motion.y << std::endl;
            }
            else if (event.type == SDL_EVENT_QUIT)
            {
                running = false;
            }
        }

        // Renderizar

        SDL_GL_SwapWindow(window);
    }

	std::cout << "sas" << "\n";
	return 0;
}