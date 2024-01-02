#pragma once

#ifdef MR_PLATFORM_WINDOWS

extern MRay::Application* MRay::CreatApplication();
int main(int argc, char** argv) {
	printf("Hello ,MRayEngine");
	auto app = MRay::CreatApplication();
	app->Run();
	delete app;
}
#endif // MR_PLATFORM_WINDOWS