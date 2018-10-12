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

// CLASS HEADER
#include <dali/devel-api/update/update-proxy.h>

// INTERNAL INCLUDES
#include <dali/internal/update/manager/update-proxy-impl.h>

namespace Dali
{

bool UpdateProxy::GetPosition( unsigned int id, Vector3& position ) const
{
  return mImpl.GetPosition( id, position );
}

bool UpdateProxy::SetPosition( unsigned int id, const Vector3& position )
{
  return mImpl.SetPosition( id, position );
}

bool UpdateProxy::BakePosition( unsigned int id, const Vector3& position )
{
  return mImpl.BakePosition( id, position );
}

bool UpdateProxy::GetSize( unsigned int id, Vector3& size ) const
{
  return mImpl.GetSize( id, size );
}

bool UpdateProxy::SetSize( unsigned int id, const Vector3& size )
{
  return mImpl.SetSize( id, size );
}

bool UpdateProxy::BakeSize( unsigned int id, const Vector3& size )
{
  return mImpl.BakeSize( id, size );
}

bool UpdateProxy::GetPositionAndSize( unsigned int id, Vector3& position, Vector3& size ) const
{
  return mImpl.GetPositionAndSize( id, position, size );
}

bool UpdateProxy::GetScale( unsigned int id, Vector3& scale ) const
{
  return mImpl.GetScale( id, scale );
}

bool UpdateProxy::SetScale( unsigned int id, const Vector3& scale )
{
  return mImpl.SetScale( id, scale );
}

bool UpdateProxy::BakeScale( unsigned int id, const Vector3& scale )
{
  return mImpl.BakeScale( id, scale );
}

bool UpdateProxy::GetColor( unsigned int id, Vector4& color ) const
{
  return mImpl.GetColor( id, color );
}

bool UpdateProxy::SetColor( unsigned int id, const Vector4& color ) const
{
  return mImpl.SetColor( id, color );
}

bool UpdateProxy::BakeColor( unsigned int id, const Vector4& color ) const
{
  return mImpl.BakeColor( id, color );
}

UpdateProxy::UpdateProxy( Internal::UpdateProxy& impl )
: mImpl( impl )
{
}

UpdateProxy::~UpdateProxy()
{
}

} // namespace Dali
