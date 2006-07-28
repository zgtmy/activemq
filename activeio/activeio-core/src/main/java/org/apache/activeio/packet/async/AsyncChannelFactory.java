/**
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.apache.activeio.packet.async;

import java.io.IOException;
import java.net.URI;


/**
 * AsyncChannelFactory objects can create {@see org.apache.activeio.AsyncChannel}
 * and {@see org.apache.activeio.AsyncChannelServer} objects. 
 * 
 * @version $Revision$
 */
public interface AsyncChannelFactory {

	/**
     * Opens a connection to server.
     * 
     * @param location
     * @return
     */
	public AsyncChannel openAsyncChannel(URI location) throws IOException;
	
	/**
     * Binds a server at the URI location.
     * 
     * @param location
     * @return
     */
	public AsyncChannelServer bindAsyncChannel(URI location) throws IOException;
	
}
