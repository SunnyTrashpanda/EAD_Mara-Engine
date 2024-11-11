#pragma once

#include "Core.h"

namespace MaraEngine
{
	class MARA_API App
	{
	public:
		App();
		virtual ~App();

		void Run();
	};

	App* CreateApp();
}


