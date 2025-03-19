#define GLM_SWIZZLE_XYZW
#define GLM_SWIZZLE_STQP 

#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4
#include <glm/ext/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale
#include <glm/ext/matrix_clip_space.hpp> // glm::perspective
#include <glm/ext/scalar_constants.hpp> // glm::pi
#include <glm/gtx/string_cast.hpp>
#include <iostream>


int main() {
    glm::vec3 VectorOne(3.0f);
    glm::vec3 VectorTwo(0.5f);
    glm::mat4 matrisde4(1.0f);

    float pepe = glm::dot(glm::normalize(VectorOne), glm::normalize(VectorTwo));

    std::cout << glm::to_string(matrisde4) << "\n";
    std::cout <<"X de Vector es: " << VectorOne.x << "\n";

    return 0;
}
/*
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
*/