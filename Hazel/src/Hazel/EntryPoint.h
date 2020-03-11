#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) 
{
	Hazel::Log::Init();

	int a = 3;
	HZ_CORE_WARN("sth");
	HZ_INFO("A warning! Var={0}", a); 

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
