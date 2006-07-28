@echo off
REM ------------------------------------------------------------------------
REM Licensed to the Apache Software Foundation (ASF) under one or more
REM contributor license agreements.  See the NOTICE file distributed with
REM this work for additional information regarding copyright ownership.
REM The ASF licenses this file to You under the Apache License, Version 2.0
REM (the "License"); you may not use this file except in compliance with
REM the License.  You may obtain a copy of the License at
REM
REM http://www.apache.org/licenses/LICENSE-2.0
REM
REM Unless required by applicable law or agreed to in writing, software
REM distributed under the License is distributed on an "AS IS" BASIS,
REM WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
REM See the License for the specific language governing permissions and
REM limitations under the License.
REM ------------------------------------------------------------------------

rem  ============================================
rem
rem  Drop a JMX file on this batch script, and it
rem  will load it in the GUI.
rem
rem  Only the first parameter is used.
rem  Only works for Win2k.
rem
rem  ============================================


if "%OS%"=="Windows_NT" goto WinNT
echo "Sorry, this command file requires Windows NT/ 2000"
goto END
:WinNT

rem change to the directory in which this script resides, i.e. bin
cd %~dp0

jmeter -t %1

:END@echo off

rem  ============================================
rem
rem  Drop a JMX file on this batch script, and it
rem  will load it in the GUI.
rem
rem  Only the first parameter is used.
rem  Only works for Win2k.
rem
rem  ============================================


if "%OS%"=="Windows_NT" goto WinNT
echo "Sorry, this command file requires Windows NT/ 2000 / XP"
pause
goto END
:WinNT

rem change to the directory in which this script resides, i.e. bin
cd /D %~dp0

jmeter -t %1

:END
