#include "head/licpaint.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[])
{
	auto app = Gtk::Application::create("com.licsoftware.licpaint");

	//Shows the window and returns when it is closed.
	return app->make_window_and_run<LicPaintWin>(argc, argv); // argc and argv are passed in the console btw
}
