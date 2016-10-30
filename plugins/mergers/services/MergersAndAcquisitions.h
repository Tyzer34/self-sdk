/**
* Copyright 2015 IBM Corp. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

#ifndef SELF_MERGERSANDACQUISITIONS_H
#define SELF_MERGERSANDACQUISITIONS_H

#include "services/IService.h"

class MergersAndAcquisitions : public IService
{
public:
    RTTI_DECL();

    //! Construction
    MergersAndAcquisitions();

    //! ISerializable
    virtual void Serialize(Json::Value & json);
    virtual void Deserialize(const Json::Value & json);

    //! IService interface
    virtual bool Start();

    void SendRequest(const std::string & a_Input, Delegate<const std::string &> a_Callback, 
		int a_nMaxRetreive = 5,
		bool a_bUseCache = true );

};

#endif // SELF_MERGERSANDACQUISITIONS_H
