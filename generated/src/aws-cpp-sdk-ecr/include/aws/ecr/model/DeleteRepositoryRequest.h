﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class DeleteRepositoryRequest : public ECRRequest
  {
  public:
    AWS_ECR_API DeleteRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRepository"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository to delete. If you do not specify a registry, the default registry
     * is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository to delete. If you do not specify a registry, the default registry
     * is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository to delete. If you do not specify a registry, the default registry
     * is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository to delete. If you do not specify a registry, the default registry
     * is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository to delete. If you do not specify a registry, the default registry
     * is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository to delete. If you do not specify a registry, the default registry
     * is assumed.</p>
     */
    inline DeleteRepositoryRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository to delete. If you do not specify a registry, the default registry
     * is assumed.</p>
     */
    inline DeleteRepositoryRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository to delete. If you do not specify a registry, the default registry
     * is assumed.</p>
     */
    inline DeleteRepositoryRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository to delete.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to delete.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository to delete.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to delete.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository to delete.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to delete.</p>
     */
    inline DeleteRepositoryRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to delete.</p>
     */
    inline DeleteRepositoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository to delete.</p>
     */
    inline DeleteRepositoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p> If a repository contains images, forces the deletion.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p> If a repository contains images, forces the deletion.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p> If a repository contains images, forces the deletion.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p> If a repository contains images, forces the deletion.</p>
     */
    inline DeleteRepositoryRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
