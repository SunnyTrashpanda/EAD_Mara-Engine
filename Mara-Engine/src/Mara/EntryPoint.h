#pragma once

#ifdef MARA_PLATFORM_WINDOWS

extern MaraEngine::App* MaraEngine::CreateApp();

void main(int argC, char** argv)
{
	printf("Mara Engine!\n");
	auto app = MaraEngine::CreateApp();
	app->Run();
	delete app;
}

#endif