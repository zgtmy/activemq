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
#include "activemq/command/JournalTopicAck.hpp"

using namespace apache::activemq::command;

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
JournalTopicAck::JournalTopicAck()
{
    this->destination = NULL ;
    this->messageId = NULL ;
    this->messageSequenceId = 0 ;
    this->subscritionName = NULL ;
    this->clientId = NULL ;
    this->transactionId = NULL ;
}

JournalTopicAck::~JournalTopicAck()
{
}

unsigned char JournalTopicAck::getDataStructureType()
{
    return JournalTopicAck::TYPE ; 
}

        
p<ActiveMQDestination> JournalTopicAck::getDestination()
{
    return destination ;
}

void JournalTopicAck::setDestination(p<ActiveMQDestination> destination)
{
    this->destination = destination ;
}

        
p<MessageId> JournalTopicAck::getMessageId()
{
    return messageId ;
}

void JournalTopicAck::setMessageId(p<MessageId> messageId)
{
    this->messageId = messageId ;
}

        
long long JournalTopicAck::getMessageSequenceId()
{
    return messageSequenceId ;
}

void JournalTopicAck::setMessageSequenceId(long long messageSequenceId)
{
    this->messageSequenceId = messageSequenceId ;
}

        
p<string> JournalTopicAck::getSubscritionName()
{
    return subscritionName ;
}

void JournalTopicAck::setSubscritionName(p<string> subscritionName)
{
    this->subscritionName = subscritionName ;
}

        
p<string> JournalTopicAck::getClientId()
{
    return clientId ;
}

void JournalTopicAck::setClientId(p<string> clientId)
{
    this->clientId = clientId ;
}

        
p<TransactionId> JournalTopicAck::getTransactionId()
{
    return transactionId ;
}

void JournalTopicAck::setTransactionId(p<TransactionId> transactionId)
{
    this->transactionId = transactionId ;
}

int JournalTopicAck::marshal(p<IMarshaller> marshaller, int mode, p<IOutputStream> writer) throw (IOException)
{
    int size = 0 ;

    size += marshaller->marshalInt(commandId, mode, writer) ;
    size += marshaller->marshalBoolean(responseRequired, mode, writer) ; 
    size += marshaller->marshalObject(destination, mode, writer) ; 
    size += marshaller->marshalObject(messageId, mode, writer) ; 
    size += marshaller->marshalLong(messageSequenceId, mode, writer) ; 
    size += marshaller->marshalString(subscritionName, mode, writer) ; 
    size += marshaller->marshalString(clientId, mode, writer) ; 
    size += marshaller->marshalObject(transactionId, mode, writer) ; 
    return size ;
}

void JournalTopicAck::unmarshal(p<IMarshaller> marshaller, int mode, p<IInputStream> reader) throw (IOException)
{
    commandId = marshaller->unmarshalInt(mode, reader) ;
    responseRequired = marshaller->unmarshalBoolean(mode, reader) ; 
    destination = p_cast<ActiveMQDestination>(marshaller->unmarshalObject(mode, reader)) ; 
    messageId = p_cast<MessageId>(marshaller->unmarshalObject(mode, reader)) ; 
    messageSequenceId = (marshaller->unmarshalLong(mode, reader)) ; 
    subscritionName = p_cast<string>(marshaller->unmarshalString(mode, reader)) ; 
    clientId = p_cast<string>(marshaller->unmarshalString(mode, reader)) ; 
    transactionId = p_cast<TransactionId>(marshaller->unmarshalObject(mode, reader)) ; 
}
