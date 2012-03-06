/*
 * Copyright (c) 2001, 2008,
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004, 2011,
 *     Oracle and/or its affiliates. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _EXTERNALFUNCTIONRESOLVER_HPP
#define _EXTERNALFUNCTIONRESOLVER_HPP

#include <xqilla/framework/XQillaExport.hpp>

class StaticContext;
class ExternalFunction;

class XQILLA_CLASS ExternalFunctionResolver {
public:
  virtual ~ExternalFunctionResolver() {};      

  /** Returns an new ExternalFunction object for the given uri, name and number of arguments.
      The caller is reponsible for deleting the ExternalFunction returned. */
  virtual ExternalFunction *resolveExternalFunction(const XMLCh *uri, const XMLCh *name, size_t numArgs, const StaticContext* context) = 0;
};
#endif