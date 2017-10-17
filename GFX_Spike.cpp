/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: micah
 *
 * Created on September 20, 2017, 11:39 PM
 */

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    bool quit = false;
    SDL_Event event;
    SDL_Window *window;                    // Declare a pointer
    SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2


    // Create an application window with the following settings:
    window = SDL_CreateWindow(
        "Gfx_Spike",                  // window title
        SDL_WINDOWPOS_UNDEFINED,           // initial x position
        SDL_WINDOWPOS_UNDEFINED,           // initial y position
        640,                               // width, in pixels
        480,                               // height, in pixels
        SDL_WINDOW_OPENGL                  // flags - see below
    );
    SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    while (!quit)
    {
        SDL_WaitEvent(&event);
 
        switch (event.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
        }
        SDL_RenderPresent(renderer);
        filledCircleRGBA(renderer, 200,300,10,0,0,200,400);
        SDL_RenderPresent(renderer);
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderDrawLine(renderer,200,300,300,400);
        SDL_RenderPresent(renderer);
        SDL_RenderDrawLine(renderer,300,400,0,700);
        SDL_RenderPresent(renderer);
        roundedBoxRGBA(renderer,500,100,2000,2000,10,255,255,255,255);
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();

    return 0;
}

