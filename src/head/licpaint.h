#ifndef LICPAINT_H
#define LICPAINT_H

#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gtkmm/label.h>

class LicPaintWin : public Gtk::Window
{
public:
  LicPaintWin();
  ~LicPaintWin() override;

protected:
	// Signal handler
	void menuButtonSignalHandler(const unsigned int butIndex);

	Gtk::Box boxVerticalMenuMain, boxHorizontalMenuBar;

	Gtk::Button testButton1, testButton2, testButton3;
	Gtk::Label testLabel4;
};

#endif
