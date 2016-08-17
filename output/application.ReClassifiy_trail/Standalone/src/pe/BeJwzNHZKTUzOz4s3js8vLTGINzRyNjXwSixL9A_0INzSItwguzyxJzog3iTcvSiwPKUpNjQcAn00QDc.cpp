// eJwzZDRgdCwtyWc0YXRKTUzOz4s3js8vLTFgdDY18EosS_1QPiDc0YAwuzyxJzog3YSxKLA8pSk0FAKCaBBf


#include "BeJwzNHZKTUzOz4s3js8vLTGINzRyNjXwSixL9A_0INzSItwguzyxJzog3iTcvSiwPKUpNjQcAn00QDc.h"
#include <dst-config.h>
#include <SPL/Runtime/Utility/BackoffSpinner.h>

using namespace SPL;

#define MYPE BeJwzNHZKTUzOz4s3js8vLTGINzRyNjXwSixL9A_0INzSItwguzyxJzog3iTcvSiwPKUpNjQcAn00QDc


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

