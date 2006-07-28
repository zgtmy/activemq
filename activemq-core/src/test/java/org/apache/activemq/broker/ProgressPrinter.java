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

package org.apache.activemq.broker;


public class ProgressPrinter {

    private final long total;
    private final long interval;
    long percentDone=0;
    long counter=0;
    
    public ProgressPrinter(long total, long interval) {
        this.total=total;
        this.interval = interval;
    }
    
    synchronized public void increment() {
        update(++counter);
    }
    
    synchronized public void update(long current) {
        long at = 100*current/total;
        if( (percentDone/interval) != (at/interval) ) {
            percentDone=at;
            System.out.println("Completed: "+percentDone+"%");
        }            
    }
}