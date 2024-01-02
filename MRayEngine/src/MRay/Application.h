#pragma once
#include "Core.h"


namespace MRay {
	class MRAY_API Application
	{
	public:	
		Application();
		virtual ~Application();
		void Run();
	};
	Application* CreatApplication();
}


