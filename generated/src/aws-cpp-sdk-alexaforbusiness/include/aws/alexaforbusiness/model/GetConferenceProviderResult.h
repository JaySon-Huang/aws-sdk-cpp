﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/ConferenceProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{
  class GetConferenceProviderResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API GetConferenceProviderResult();
    AWS_ALEXAFORBUSINESS_API GetConferenceProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API GetConferenceProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The conference provider.</p>
     */
    inline const ConferenceProvider& GetConferenceProvider() const{ return m_conferenceProvider; }

    /**
     * <p>The conference provider.</p>
     */
    inline void SetConferenceProvider(const ConferenceProvider& value) { m_conferenceProvider = value; }

    /**
     * <p>The conference provider.</p>
     */
    inline void SetConferenceProvider(ConferenceProvider&& value) { m_conferenceProvider = std::move(value); }

    /**
     * <p>The conference provider.</p>
     */
    inline GetConferenceProviderResult& WithConferenceProvider(const ConferenceProvider& value) { SetConferenceProvider(value); return *this;}

    /**
     * <p>The conference provider.</p>
     */
    inline GetConferenceProviderResult& WithConferenceProvider(ConferenceProvider&& value) { SetConferenceProvider(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConferenceProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConferenceProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConferenceProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConferenceProvider m_conferenceProvider;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
