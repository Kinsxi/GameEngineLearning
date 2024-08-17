#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();


int main(int argc, char** argv)
{

	Hazel::Log::Init();
	HZ_CORE_WARN("Intialized log.");
	int a = 4;
	HZ_INFO("Hello! test_v = {0}",a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif
