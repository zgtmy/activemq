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
#ifndef ActiveMQ_JournalTopicAck_hpp_
#define ActiveMQ_JournalTopicAck_hpp_

// Turn off warning message for ignored exception specification
#ifdef _MSC_VER
#pragma warning( disable : 4290 )
#endif

#include <string>
#include "activemq/command/AbstractCommand.hpp"
#include "activemq/command/ActiveMQDestination.hpp"
#include "activemq/command/MessageId.hpp"
#include "activemq/command/TransactionId.hpp"
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
 *  Marshalling code for Open Wire Format for JournalTopicAck
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
class JournalTopicAck : public AbstractCommand
{
protected:
    p<ActiveMQDestination> destination ;
    p<MessageId> messageId ;
    long long messageSequenceId ;
    p<string> subscritionName ;
    p<string> clientId ;
    p<TransactionId> transactionId ;

public:
    const static unsigned char TYPE = 50;

public:
    JournalTopicAck() ;
    virtual ~JournalTopicAck() ;

    virtual unsigned char getDataStructureType() ;

    virtual p<ActiveMQDestination> getDestination() ;
    virtual void setDestination(p<ActiveMQDestination> destination) ;

    virtual p<MessageId> getMessageId() ;
    virtual void setMessageId(p<MessageId> messageId) ;

    virtual long long getMessageSequenceId() ;
    virtual void setMessageSequenceId(long long messageSequenceId) ;

    virtual p<string> getSubscritionName() ;
    virtual void setSubscritionName(p<string> subscritionName) ;

    virtual p<string> getClientId() ;
    virtual void setClientId(p<string> clientId) ;

    virtual p<TransactionId> getTransactionId() ;
    virtual void setTransactionId(p<TransactionId> transactionId) ;

    virtual int marshal(p<IMarshaller> marshaller, int mode, p<IOutputStream> writer) throw (IOException) ;
    virtual void unmarshal(p<IMarshaller> marshaller, int mode, p<IInputStream> reader) throw (IOException) ;
} ;

/* namespace */
    }
  }
}

#endif /*ActiveMQ_JournalTopicAck_hpp_*/
