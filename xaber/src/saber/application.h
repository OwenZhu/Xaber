#pragma once

#include "core.h"

namespace saber {

	class SAB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};

	// To be defined in client
	Application* create_application();
}
