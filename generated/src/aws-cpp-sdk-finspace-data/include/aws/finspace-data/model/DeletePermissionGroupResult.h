﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{
  class DeletePermissionGroupResult
  {
  public:
    AWS_FINSPACEDATA_API DeletePermissionGroupResult();
    AWS_FINSPACEDATA_API DeletePermissionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API DeletePermissionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the deleted permission group.</p>
     */
    inline const Aws::String& GetPermissionGroupId() const{ return m_permissionGroupId; }

    /**
     * <p>The unique identifier for the deleted permission group.</p>
     */
    inline void SetPermissionGroupId(const Aws::String& value) { m_permissionGroupId = value; }

    /**
     * <p>The unique identifier for the deleted permission group.</p>
     */
    inline void SetPermissionGroupId(Aws::String&& value) { m_permissionGroupId = std::move(value); }

    /**
     * <p>The unique identifier for the deleted permission group.</p>
     */
    inline void SetPermissionGroupId(const char* value) { m_permissionGroupId.assign(value); }

    /**
     * <p>The unique identifier for the deleted permission group.</p>
     */
    inline DeletePermissionGroupResult& WithPermissionGroupId(const Aws::String& value) { SetPermissionGroupId(value); return *this;}

    /**
     * <p>The unique identifier for the deleted permission group.</p>
     */
    inline DeletePermissionGroupResult& WithPermissionGroupId(Aws::String&& value) { SetPermissionGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the deleted permission group.</p>
     */
    inline DeletePermissionGroupResult& WithPermissionGroupId(const char* value) { SetPermissionGroupId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeletePermissionGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeletePermissionGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeletePermissionGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_permissionGroupId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
