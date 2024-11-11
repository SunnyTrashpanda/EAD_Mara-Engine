#include <Mara/Mara.h>

class Sandbox : public MaraEngine::App
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

MaraEngine::App* MaraEngine::CreateApp()
{
	return new Sandbox();
}