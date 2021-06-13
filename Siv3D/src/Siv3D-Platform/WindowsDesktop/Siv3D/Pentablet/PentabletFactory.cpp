﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2021 Ryo Suzuki
//	Copyright (c) 2016-2021 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <Siv3D/ApplicationOptions.hpp>
# include <Siv3D/Pentablet/Pentablet/CPentablet.hpp>

namespace s3d
{
	ISiv3DPentablet* ISiv3DPentablet::Create()
	{
		return new CPentablet;
	}
}
