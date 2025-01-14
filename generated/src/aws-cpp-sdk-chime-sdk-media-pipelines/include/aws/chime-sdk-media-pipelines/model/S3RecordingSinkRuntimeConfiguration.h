﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/RecordingFileFormat.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>A structure that holds the settings for transmitting audio and video
   * recordings to the runtime Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/S3RecordingSinkRuntimeConfiguration">AWS
   * API Reference</a></p>
   */
  class S3RecordingSinkRuntimeConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API S3RecordingSinkRuntimeConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API S3RecordingSinkRuntimeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API S3RecordingSinkRuntimeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the S3 bucket used as the runtime sink.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The URL of the S3 bucket used as the runtime sink.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The URL of the S3 bucket used as the runtime sink.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The URL of the S3 bucket used as the runtime sink.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The URL of the S3 bucket used as the runtime sink.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The URL of the S3 bucket used as the runtime sink.</p>
     */
    inline S3RecordingSinkRuntimeConfiguration& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The URL of the S3 bucket used as the runtime sink.</p>
     */
    inline S3RecordingSinkRuntimeConfiguration& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The URL of the S3 bucket used as the runtime sink.</p>
     */
    inline S3RecordingSinkRuntimeConfiguration& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The file formats for the audio and video files sent to the Amazon S3
     * bucket.</p>
     */
    inline const RecordingFileFormat& GetRecordingFileFormat() const{ return m_recordingFileFormat; }

    /**
     * <p>The file formats for the audio and video files sent to the Amazon S3
     * bucket.</p>
     */
    inline bool RecordingFileFormatHasBeenSet() const { return m_recordingFileFormatHasBeenSet; }

    /**
     * <p>The file formats for the audio and video files sent to the Amazon S3
     * bucket.</p>
     */
    inline void SetRecordingFileFormat(const RecordingFileFormat& value) { m_recordingFileFormatHasBeenSet = true; m_recordingFileFormat = value; }

    /**
     * <p>The file formats for the audio and video files sent to the Amazon S3
     * bucket.</p>
     */
    inline void SetRecordingFileFormat(RecordingFileFormat&& value) { m_recordingFileFormatHasBeenSet = true; m_recordingFileFormat = std::move(value); }

    /**
     * <p>The file formats for the audio and video files sent to the Amazon S3
     * bucket.</p>
     */
    inline S3RecordingSinkRuntimeConfiguration& WithRecordingFileFormat(const RecordingFileFormat& value) { SetRecordingFileFormat(value); return *this;}

    /**
     * <p>The file formats for the audio and video files sent to the Amazon S3
     * bucket.</p>
     */
    inline S3RecordingSinkRuntimeConfiguration& WithRecordingFileFormat(RecordingFileFormat&& value) { SetRecordingFileFormat(std::move(value)); return *this;}

  private:

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    RecordingFileFormat m_recordingFileFormat;
    bool m_recordingFileFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
