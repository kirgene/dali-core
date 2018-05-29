#ifndef DALI_GRAPHICS_VULKAN_PIPELINE_CACHE_H
#define DALI_GRAPHICS_VULKAN_PIPELINE_CACHE_H

/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// INTERNAL INCLUDES
#include <dali/graphics/vulkan/vulkan-types.h>
#include <dali/graphics-api/graphics-api-render-command.h>
namespace Dali
{
namespace Graphics
{
namespace Vulkan
{
class Graphics;

struct PipelineDescription
{
  RefCountedShader vertexShader;
  RefCountedShader fragmentShader;

  API::RenderCommand::RenderState::BlendState blendState;

  bool operator==(const PipelineDescription& description) const
  {
    return (vertexShader == description.vertexShader) &&
           (fragmentShader == description.fragmentShader) &&
           (std::memcmp( &blendState, &description.blendState, sizeof(blendState) ));
  }

  std::vector<vk::DescriptorSetLayout> descriptorSetLayouts;
};

class PipelineCache
{
public:
  PipelineCache() = default;

  PipelineCache( Graphics& graphics );

  ~PipelineCache();

  RefCountedPipeline GetPipeline( const PipelineDescription& desc ) const;

  bool AddPipeline( RefCountedPipeline pipeline, const PipelineDescription& desc );

  std::vector<vk::DescriptorSetLayout> GetDescriptorSetLayouts( const RefCountedPipeline& pipeline ) const;

private:
  struct Impl;
  std::unique_ptr<Impl> mImpl;
};
} // namespace Vulkan
} // namespace Graphics
} // namespace Dali
#endif // DALI_GRAPHICS_VULKAN_PIPELINE_CACHE_H