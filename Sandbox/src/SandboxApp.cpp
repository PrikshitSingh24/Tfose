#include <Tfose.h>

class Sandbox : public Tfose::Application {
public:
	
};

Tfose::Application* Tfose::CreateApplication() {
	return new Sandbox();
}