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
#ifndef ActiveMQ_JournalQueueAck_hpp_
#define ActiveMQ_JournalQueueAck_hpp_

// Turn off warning message for ignored exception specification
#ifdef _MSC_VER
#pragma warning( disable : 4290 )
#endif

#include <string>
#include "activemq/command/AbstractCommand.hpp"
#include "activemq/command/ActiveMQDestination.hpp"
#include "activemq/command/MessageAck.hpp"
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
 *  Marshalling code for Open Wire Format for JournalQueueAck
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
class JournalQueueAck : public AbstractCommand
{
protected:
    p<ActiveMQDestination> destination ;
    p<MessageAck> messageAck ;

public:
    const static unsigned char TYPE = 52;

public:
    JournalQueueAck() ;
    virtual ~JournalQueueAck() ;

    virtual unsigned char getDataStructureType() ;

    virtual p<ActiveMQDestination> getDestination() ;
    virtual void setDestination(p<ActiveMQDestination> destination) ;

    virtual p<MessageAck> getMessageAck() ;
    virtual void setMessageAck(p<MessageAck> messageAck) ;

    virtual int marshal(p<IMarshaller> marshaller, int mode, p<IOutputStream> writer) throw (IOException) ;
    virtual void unmarshal(p<IMarshaller> marshaller, int mode, p<IInputStream> reader) throw (IOException) ;
} ;

/* namespace */
    }
  }
}

#endif /*ActiveMQ_JournalQueueAck_hpp_*/
