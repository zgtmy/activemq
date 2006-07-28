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
#include "activemq/command/JournalTrace.hpp"

using namespace apache::activemq::command;

/*
 *
 *  Marshalling code for Open Wire Format for JournalTrace
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
JournalTrace::JournalTrace()
{
    this->message = NULL ;
}

JournalTrace::~JournalTrace()
{
}

unsigned char JournalTrace::getDataStructureType()
{
    return JournalTrace::TYPE ; 
}

        
p<string> JournalTrace::getMessage()
{
    return message ;
}

void JournalTrace::setMessage(p<string> message)
{
    this->message = message ;
}

int JournalTrace::marshal(p<IMarshaller> marshaller, int mode, p<IOutputStream> writer) throw (IOException)
{
    int size = 0 ;

    size += marshaller->marshalInt(commandId, mode, writer) ;
    size += marshaller->marshalBoolean(responseRequired, mode, writer) ; 
    size += marshaller->marshalString(message, mode, writer) ; 
    return size ;
}

void JournalTrace::unmarshal(p<IMarshaller> marshaller, int mode, p<IInputStream> reader) throw (IOException)
{
    commandId = marshaller->unmarshalInt(mode, reader) ;
    responseRequired = marshaller->unmarshalBoolean(mode, reader) ; 
    message = p_cast<string>(marshaller->unmarshalString(mode, reader)) ; 
}
