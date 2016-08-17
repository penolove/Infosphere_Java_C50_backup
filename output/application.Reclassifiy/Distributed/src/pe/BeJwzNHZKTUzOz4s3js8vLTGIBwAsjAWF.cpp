// eJwzYHQsLclnNGR0Sk1Mzs_0LN47PLy0xAABF4Qa_1


#include "BeJwzNHZKTUzOz4s3js8vLTGIBwAsjAWF.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNHZKTUzOz4s3js8vLTGIBwAsjAWF



MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, NULL)
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);

