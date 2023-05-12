#pragma once

#ifdef TF_PLATFORM_WINDOWS
extern Tfose::Application* Tfose::CreateApplication();
int main(int argc,char** argv) {

	printf("Tfose engine started!!!");
	auto app = Tfose::CreateApplication();
	app->Run();
	delete app;
}
#endif // TF_PLATFORM_WINDOWS

