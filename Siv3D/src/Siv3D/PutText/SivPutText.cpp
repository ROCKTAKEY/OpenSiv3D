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

# include <Siv3D/PutText.hpp>
# include <Siv3D/Print/IPrint.hpp>
# include <Siv3D/Common/Siv3DEngine.hpp>

namespace s3d
{
	void PutText(String s, const double x, const double y)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), Vec2{ x, y }, 0);
	}

	void PutText(String s, const Vec2 center)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), center, 0);
	}

	void PutText(String s, const Arg::topLeft_<Vec2> topLeft)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), *topLeft, 1);
	}

	void PutText(String s, const Arg::topCenter_<Vec2> topCenter)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), *topCenter, 2);
	}

	void PutText(String s, const Arg::topRight_<Vec2> topRight)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), *topRight, 3);
	}

	void PutText(String s, const Arg::rightCenter_<Vec2> rightCenter)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), *rightCenter, 4);
	}

	void PutText(String s, const Arg::bottomRight_<Vec2> bottomRight)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), *bottomRight, 5);
	}

	void PutText(String s, const Arg::bottomCenter_<Vec2> bottomCenter)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), *bottomCenter, 6);
	}

	void PutText(String s, const Arg::bottomLeft_<Vec2> bottomLeft)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), *bottomLeft, 7);
	}

	void PutText(String s, const Arg::leftCenter_<Vec2> leftCenter)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), *leftCenter, 8);
	}

	void PutText(String s, const Arg::center_<Vec2> center)
	{
		SIV3D_ENGINE(Print)->put(std::move(s), *center, 0);
	}
}
