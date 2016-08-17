// eJwzYHQsLclnNGR0zkksLs5My0wtijeysgouzyxJzog3AQCVUgoN


#include "BeJwzNHLOSSwuzkzLTC2KN7IILs8sSc6IN4kHAGlGAiW.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNHLOSSwuzkzLTC2KN7IILs8sSc6IN4kHAGlGAiW



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);

