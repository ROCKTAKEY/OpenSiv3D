﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2022 Ryo Suzuki
//	Copyright (c) 2016-2022 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include "CImageEncoder.hpp"

namespace s3d
{
	ISiv3DImageEncoder* ISiv3DImageEncoder::Create()
	{
		return new CImageEncoder;
	}
}
