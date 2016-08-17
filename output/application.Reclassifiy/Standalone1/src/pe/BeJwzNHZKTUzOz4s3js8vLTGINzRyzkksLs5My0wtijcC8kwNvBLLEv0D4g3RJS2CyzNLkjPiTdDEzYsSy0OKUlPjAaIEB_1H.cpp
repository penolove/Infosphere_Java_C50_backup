// eJwzZDRgdCwtyWc0YXRKTUzOz4s3js8vLTFgdM5JLC7OTMtMLYo3srJyNjXwSixL9A_0IN0SXCi7PLEnOiDdBEy5KLA8pSk0FAKTLB99


#include "BeJwzNHZKTUzOz4s3js8vLTGINzRyzkksLs5My0wtijcC8kwNvBLLEv0D4g3RJS2CyzNLkjPiTdDEzYsSy0OKUlPjAaIEB_1H.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNHZKTUzOz4s3js8vLTGINzRyzkksLs5My0wtijcC8kwNvBLLEv0D4g3RJS2CyzNLkjPiTdDEzYsSy0OKUlPjAaIEB_1H


#include <SPL/Runtime/Type/SPLType.h>

static std::vector<std::string> * javaVMArgs() {
    std::vector<std::string> * result = new std::vector<std::string>();

    return result;
}


MYPE::MYPE(bool isStandalone/*=false*/) 
    : SPL::PE(isStandalone, javaVMArgs())
{
   BackoffSpinner::setYieldBehaviour(BackoffSpinner::Auto);
}

MAKE_PE(SPL::MYPE);

