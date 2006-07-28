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
#ifndef ActiveMQ_ICommandListener_hpp_
#define ActiveMQ_ICommandListener_hpp_

#include <exception>
#include "activemq/ICommand.hpp"
#include "ppr/util/ifr/p"

namespace apache
{
  namespace activemq
  {
    namespace transport
    {
      using namespace ifr;
      using namespace std;
      using namespace apache::activemq;
      using namespace apache::activemq::command;
      using namespace apache::cms;
      struct ITransport;

/*
 * 
 */
struct ICommandListener : Interface
{
    virtual void onCommand(p<ITransport> transport, p<ICommand> command) = 0 ;
    virtual void onError(p<ITransport> transport, exception& error) = 0 ;
} ;

/* namespace */
    }
  }
}

#endif /*ActiveMQ_ICommandListener_hpp_*/
