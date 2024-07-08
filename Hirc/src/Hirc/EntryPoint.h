#pragma once

#ifdef HIRC_PLATFORM_WINDOWS

extern Hirc::Application* Hirc::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hirc::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error HircEngine only supports Windows!
#endif
