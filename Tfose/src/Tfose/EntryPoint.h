#pragma once
#include "Log.h"

#ifdef TF_PLATFORM_WINDOWS
extern Tfose::Application* Tfose::CreateApplication();
int main(int argc,char** argv) {

	Tfose::Log::Init();
	TF_CORE_WARN("initialized log!!");
	auto app = Tfose::CreateApplication();
	app->Run();
	delete app;
}
#endif // TF_PLATFORM_WINDOWS

