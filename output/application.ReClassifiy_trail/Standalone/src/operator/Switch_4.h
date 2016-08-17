// eJyNkUFPhDAQhTN_1ZeNBL7TgjRuY1cS4ZGO9my6My2ShJe0QZH_09BdeNstGYHpq_0vHxv3tR3TdQzNcRjmqqBuKwhBhlOAqsoEjx2KHJ8HNxGDcmxNBs1yocsz7dZ0UX1amkqB_1miTHHUcp3l2SErhsk00ULElQS1fUrTnbUNagOzFi80ELVtUXh2qFuh5ssr7iuyYrDu4DtdonjGu0Z7T280ikqzBmMNTjFkiEk3ijX3Hhbw_0DRFxuxo1zPeO0Twf3hjWL93DkOSNYEugTrrzkV_0WwwQuHmJMGMMenChEJl9eH8S4u_0Ey639IFR9246hGd8m8_0fYf89wmX7K_1RLOhaI98utsvr6ZesYfMD2jAz

#include <SPL/Runtime/Utility/CV.h>
#include <SPL/Runtime/Utility/Mutex.h>

#ifndef SPL_OPER_INSTANCE_SWITCH_4_H_
#define SPL_OPER_INSTANCE_SWITCH_4_H_

#include <SPL/Runtime/Operator/Operator.h>
#include <SPL/Runtime/Operator/ParameterValue.h>
#include <SPL/Runtime/Operator/OperatorContext.h>
#include <SPL/Runtime/Operator/OperatorMetrics.h>
#include <SPL/Runtime/Operator/Port/AutoPortMutex.h>
#include <SPL/Runtime/Operator/State/StateHandler.h>
#include <SPL/Runtime/ProcessingElement/PE.h>
#include <SPL/Runtime/Type/SPLType.h>
#include <SPL/Runtime/Utility/CV.h>
using namespace UTILS_NAMESPACE;

#include "../type/BeJwrMSw2zcnMSy0GABBPANp.h"
#include "../type/BeJwrMcw0TSnNza0EABAkANw.h"

#include <bitset>

#define MY_OPERATOR Switch_4$OP
#define MY_BASE_OPERATOR Switch_4_Base
#define MY_OPERATOR_SCOPE SPL::_Operator

namespace SPL {
namespace _Operator {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSw2zcnMSy0GABBPANp IPort0Type;
    typedef SPL::BeJwrMcw0TSnNza0EABAkANw IPort1Type;
    typedef SPL::BeJwrMSw2zcnMSy0GABBPANp OPort0Type;
    
    MY_BASE_OPERATOR();
    
    ~MY_BASE_OPERATOR();
    
    inline void tupleLogic(Tuple const & tuple, uint32_t port);
    void processRaw(Tuple const & tuple, uint32_t port);
    
    inline void punctLogic(Punctuation const & punct, uint32_t port);
    void processRaw(Punctuation const & punct, uint32_t port);
    void punctPermitProcessRaw(Punctuation const & punct, uint32_t port);
    void punctNoPermitProcessRaw(Punctuation const & punct, uint32_t port);
    
    
    
    SPL::boolean lit$0;
    SPL::boolean lit$1;
    
    
protected:
    Mutex $svMutex;
    typedef std::bitset<3> OPortBitsetType;
    OPortBitsetType $oportBitset;
    Mutex $fpMutex;
    void checkpointStateVariables(NetworkByteBuffer & opstate) const;
    void restoreStateVariables(NetworkByteBuffer & opstate);
    void checkpointStateVariables(Checkpoint & ckpt);
    void resetStateVariables(Checkpoint & ckpt);
    void resetStateVariablesToInitialState();
    bool hasStateVariables() const;
    void resetToInitialStateRaw();
    void checkpointRaw(Checkpoint & ckpt);
    void resetRaw(Checkpoint & ckpt);
private:
    static bool globalInit_;
    static bool globalIniter();
    ParameterMapType paramValues_;
    ParameterMapType& getParameters() { return paramValues_;}
    void addParameterValue(std::string const & param, ConstValueHandle const& value)
    {
        ParameterMapType::iterator it = paramValues_.find(param);
        if (it == paramValues_.end())
            it = paramValues_.insert (std::make_pair (param, ParameterValueListType())).first;
        it->second.push_back(&ParameterValue::create(value));
    }
    void addParameterValue(std::string const & param)
    {
        ParameterMapType::iterator it = paramValues_.find(param);
        if (it == paramValues_.end())
            it = paramValues_.insert (std::make_pair (param, ParameterValueListType())).first;
        it->second.push_back(&ParameterValue::create());
    }
};



class MY_OPERATOR : public MY_BASE_OPERATOR 
{
public:
  MY_OPERATOR();
  void prepareToShutdown(); 
  void process(Tuple const & tuple, uint32_t port);
  void process(Punctuation const & punct, uint32_t port);
  virtual void getCheckpoint(NetworkByteBuffer & opstate);
  virtual void restoreCheckpoint(NetworkByteBuffer & opstate);

private:
  volatile bool _on, _shutdown;
  Mutex _mutex;
  CV _cv;
}; 
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_SWITCH_4_H_

