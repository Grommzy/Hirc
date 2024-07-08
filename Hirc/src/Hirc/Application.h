#pragma once

#include "Core.h"

namespace Hirc {

	class HIRC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
