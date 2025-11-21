/*
 *  Authors: Charles Mowbray, Phil Stanton, Ethan Beckett
 *  Project: Under The Sea
 *  File: main.cpp
 *
 *  Description:
 *      Starts and initializes the main engine
 * 
 */

#include "FPEngine.h"

///*****************************************************************************
//
// Our main function
int main() {

    auto labEngine = new FPEngine();
    labEngine->initialize();
    if (labEngine->getError() == CSCI441::OpenGLEngine::OPENGL_ENGINE_ERROR_NO_ERROR) {
        labEngine->run();
    }
    labEngine->shutdown();
    delete labEngine;

    return EXIT_SUCCESS;
}
