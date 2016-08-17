// eJydktFqwjAUhjlvImUXyqBJK4PRu1bdmGinqy8Qa6ZntklI4kp9_0qXqps7uZpxASPLznT8_1hylVYM4sShFFgwc6Zp_1sdQYBUFd98HyfuGVrxUnCx5WeZjJ8FHOVmv54PzI2Wccc51nub7w2cRXuczHNavocJ8ksTlW7Lq_1oIhPpntFRnMTbOK0aXWMByEaWnBirOStJdthMZncrlKSSemsUyzl544OCGYPvWJMVswyEFJxCCHlznbKSux9ls0kUaUdCsXbky2PXY_0cc_1J8YvB7E1gmWO8ufNOdH3ASXmun6lthdc7uQstiiHaLmuZW67l63uTDq9Xqd_0871M8FSFeTDNSdLFE7xq3_1ouqCS2t6d_1P8VMyDoY37OZoGCG_1j2GZwIwb8JjQvZ4qJ9MqB0oBBehnBO6ppHG2DgSt4au52MAy_0A1a4sa0Bh_0_0EJ8AX1ndvh

#include <SPL/Toolkit/JavaOp.h>


#ifndef SPL_OPER_INSTANCE_CLASSIFIER_2_C50JAVAOP_10_H_
#define SPL_OPER_INSTANCE_CLASSIFIER_2_C50JAVAOP_10_H_

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

#include "../../type/BeJwrMSo28nQpNs3JzEstBgAeiQSc.h"
#include "../../type/BeJwrMSw2zcnMSy0GABBPANp.h"
#include "../../type/BeJwrMcw0TSnNza0EABAkANw.h"

#include <bitset>
#include <vector>

#define MY_OPERATOR C50JavaOP_10$OP
#define MY_BASE_OPERATOR C50JavaOP_10_Base
#define MY_OPERATOR_SCOPE SPL::_Operator::Classifier_2

namespace SPL {
namespace _Operator {
namespace Classifier_2 {

class MY_BASE_OPERATOR : public Operator
{
public:
    
    typedef SPL::BeJwrMSw2zcnMSy0GABBPANp IPort0Type;
    typedef SPL::BeJwrMSw2zcnMSy0GABBPANp IPort1Type;
    typedef SPL::BeJwrMSo28nQpNs3JzEstBgAeiQSc OPort0Type;
    typedef SPL::BeJwrMcw0TSnNza0EABAkANw OPort1Type;
    
    MY_BASE_OPERATOR();
    
    ~MY_BASE_OPERATOR();
    
    inline void tupleLogic(Tuple const & tuple, uint32_t port);
    void processRaw(Tuple const & tuple, uint32_t port);
    
    inline void punctLogic(Punctuation const & punct, uint32_t port);
    void processRaw(Punctuation const & punct, uint32_t port);
    void punctPermitProcessRaw(Punctuation const & punct, uint32_t port);
    void punctNoPermitProcessRaw(Punctuation const & punct, uint32_t port);
    virtual void javaopInternalAction(Punctuation const & punct, uint32_t port) = 0;
    
    inline void submit(Tuple & tuple, uint32_t port)
    {
        Operator::submit(tuple, port);
    }
    inline void submit(Punctuation const & punct, uint32_t port)
    {
        Operator::submit(punct, port);
    }
    
    
    
    
    
protected:
    Mutex $svMutex;
    typedef std::bitset<3> OPortBitsetType;
    std::vector<OPortBitsetType> $oportBitset;
    Mutex $fpMutex;
    SPL::rstring param$className$0;
    SPL::rstring param$classLibrary$0;
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
  // constructor
  MY_OPERATOR();

  // destructor
  virtual ~MY_OPERATOR(); 

  // notify port readiness
  void allPortsReady(); 

  // notify termination
  void prepareToShutdown(); 

  // processing for source and threaded operators   
  void process(uint32_t idx);
    
  // tuple processing for mutating ports 
  void process(Tuple & tuple, uint32_t port);
    
  // tuple processing for non-mutating ports
  void process(Tuple const & tuple, uint32_t port);

  // punctuation processing
  void process(Punctuation const & punct, uint32_t port);
private:
  void setupStateHandler();

  // members
  
  /** How we invoke actions on the Java Operator implementation */
  SPL::JNI::JNIBridgeInvoker* _bi;
  
  /* The instance of the JNIBridge used to wrap the Java Operator implementation */
  jobject _bridge;

  typedef void (*FP)(SPL::JNI::JNIBridgeInvoker&, jobject, NativeByteBuffer &, uint32_t);
  FP _fp;
  
  bool hasTupleLogic;
  
  std::tr1::shared_ptr<SPL::StateHandler> _stateHandler;

public:
  virtual void javaopInternalAction(Punctuation const & punct, uint32_t port)
  {
     _bi->action(_bridge, punct, port);
  }
    
  // handle byte buffers being send as is
  virtual void processRaw(NativeByteBuffer & buffer, uint32_t port)
  {
     (*_fp)(*_bi, _bridge, buffer, port);
  }
  
  //Java operators handle byte buffers directly
  virtual bool sendRawBufferData() { return !hasTupleLogic; }
}; 

} // namespace Classifier_2
} // namespace _Operator
} // namespace SPL

#undef MY_OPERATOR_SCOPE
#undef MY_BASE_OPERATOR
#undef MY_OPERATOR
#endif // SPL_OPER_INSTANCE_CLASSIFIER_2_C50JAVAOP_10_H_

