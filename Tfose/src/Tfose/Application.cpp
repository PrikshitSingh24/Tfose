#include "Application.h"
#include "Tfose/Events/AppplicationEvent.h"
#include "Tfose/Log.h"
namespace Tfose {

	void Application::Run() {

		WindowResizeEvent e(1920, 1080);
		TF_TRACE(e);
		while (true);
	}
}