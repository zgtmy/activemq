/*
* Licensed to the Apache Software Foundation (ASF) under one or more
* contributor license agreements.  See the NOTICE file distributed with
* this work for additional information regarding copyright ownership.
* The ASF licenses this file to You under the Apache License, Version 2.0
* (the "License"); you may not use this file except in compliance with
* the License.  You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef ActiveMQ_ConsumerInfo_hpp_
#define ActiveMQ_ConsumerInfo_hpp_

// Turn off warning message for ignored exception specification
#ifdef _MSC_VER
#pragma warning( disable : 4290 )
#endif

#include <string>
#include "activemq/command/BaseCommand.hpp"
#include "activemq/command/ConsumerId.hpp"
#include "activemq/command/ActiveMQDestination.hpp"
#include "activemq/command/BrokerId.hpp"
#include "activemq/command/BooleanExpression.hpp"
#include "activemq/protocol/IMarshaller.hpp"
#include "ppr/io/IOutputStream.hpp"
#include "ppr/io/IInputStream.hpp"
#include "ppr/io/IOException.hpp"
#include "ppr/util/ifr/array"
#include "ppr/util/ifr/p"

namespace apache
{
  namespace activemq
  {
    namespace command
    {
      using namespace ifr;
      using namespace std;
      using namespace apache::activemq;
      using namespace apache::activemq::protocol;
      using namespace apache::ppr::io;

/*
 *
 *  Marshalling code for Open Wire Format for ConsumerInfo
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
class ConsumerInfo : public BaseCommand
{
protected:
    p<ConsumerId> consumerId ;
    p<ActiveMQDestination> destination ;
    int prefetchSize ;
    int maximumPendingMessageLimit ;
    bool browser ;
    bool dispatchAsync ;
    p<string> selector ;
    p<string> subcriptionName ;
    bool noLocal ;
    bool exclusive ;
    bool retroactive ;
    char priority ;
    array<BrokerId> brokerPath ;
    p<BooleanExpression> additionalPredicate ;
    bool networkSubscription ;

public:
    const static unsigned char TYPE = 5;

public:
    ConsumerInfo() ;
    virtual ~ConsumerInfo() ;

    virtual unsigned char getDataStructureType() ;

    virtual p<ConsumerId> getConsumerId() ;
    virtual void setConsumerId(p<ConsumerId> consumerId) ;

    virtual bool getBrowser() ;
    virtual void setBrowser(bool browser) ;

    virtual p<ActiveMQDestination> getDestination() ;
    virtual void setDestination(p<ActiveMQDestination> destination) ;

    virtual int getPrefetchSize() ;
    virtual void setPrefetchSize(int prefetchSize) ;

    virtual bool getDispatchAsync() ;
    virtual void setDispatchAsync(bool dispatchAsync) ;

    virtual p<string> getSelector() ;
    virtual void setSelector(p<string> selector) ;

    virtual p<string> getSubcriptionName() ;
    virtual void setSubcriptionName(p<string> subcriptionName) ;

    virtual bool getNoLocal() ;
    virtual void setNoLocal(bool noLocal) ;

    virtual bool getExclusive() ;
    virtual void setExclusive(bool exclusive) ;

    virtual bool getRetroactive() ;
    virtual void setRetroactive(bool retroactive) ;

    virtual char getPriority() ;
    virtual void setPriority(char priority) ;

    virtual array<BrokerId> getBrokerPath() ;
    virtual void setBrokerPath(array<BrokerId> brokerPath) ;

    virtual bool getNetworkSubscription() ;
    virtual void setNetworkSubscription(bool networkSubscription) ;

    virtual int marshal(p<IMarshaller> marshaller, int mode, p<IOutputStream> writer) throw (IOException) ;
    virtual void unmarshal(p<IMarshaller> marshaller, int mode, p<IInputStream> reader) throw (IOException) ;
} ;

/* namespace */
    }
  }
}

#endif /*ActiveMQ_ConsumerInfo_hpp_*/
