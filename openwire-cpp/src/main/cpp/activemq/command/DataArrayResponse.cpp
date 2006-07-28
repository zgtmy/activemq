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
#include "activemq/command/DataArrayResponse.hpp"

using namespace apache::activemq::command;

/*
 *
 *  Marshalling code for Open Wire Format for DataArrayResponse
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
DataArrayResponse::DataArrayResponse()
{
    this->data = NULL ;
}

DataArrayResponse::~DataArrayResponse()
{
}

unsigned char DataArrayResponse::getDataStructureType()
{
    return DataArrayResponse::TYPE ; 
}

        
array<IDataStructure> DataArrayResponse::getData()
{
    return data ;
}

void DataArrayResponse::setData(array<IDataStructure> data)
{
    this->data = data ;
}

int DataArrayResponse::marshal(p<IMarshaller> marshaller, int mode, p<IOutputStream> writer) throw (IOException)
{
    int size = 0 ;

    size += marshaller->marshalInt(commandId, mode, writer) ;
    size += marshaller->marshalBoolean(responseRequired, mode, writer) ; 
    size += marshaller->marshalObjectArray(data, mode, writer) ; 
    return size ;
}

void DataArrayResponse::unmarshal(p<IMarshaller> marshaller, int mode, p<IInputStream> reader) throw (IOException)
{
    commandId = marshaller->unmarshalInt(mode, reader) ;
    responseRequired = marshaller->unmarshalBoolean(mode, reader) ; 
    data = array_cast<IDataStructure>(marshaller->unmarshalObjectArray(mode, reader)) ; 
}
