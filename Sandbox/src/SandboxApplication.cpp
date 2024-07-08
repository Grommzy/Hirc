#include <Hirc.h>

class Sandbox : public Hirc::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Hirc::Application* Hirc::CreateApplication()
{
	return new Sandbox();
}