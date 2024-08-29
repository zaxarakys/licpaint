#include "head/licpaint.h"
#include <sigc++/functors/mem_fun.h>
#include <iostream>

LicPaintWin::LicPaintWin() : testButton1("B1"), testButton2("B2"), testButton3("B3"), testLabel4("This label is a placeholder for the paint screen"){
	set_title("LIC Paint");
	set_child(boxVerticalMenuMain);

	boxVerticalMenuMain.set_orientation(Gtk::Orientation::VERTICAL);

	// Menu bar
	// Call menuButtonSignalHandler() with a poiner to the unsinged int as its argument
	testButton1.signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &LicPaintWin::menuButtonSignalHandler), 1));
	boxHorizontalMenuBar.append(testButton1);

	testButton2.signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &LicPaintWin::menuButtonSignalHandler), 2));
	boxHorizontalMenuBar.append(testButton2);

	testButton3.signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &LicPaintWin::menuButtonSignalHandler), 3));
	boxHorizontalMenuBar.append(testButton3);

	boxVerticalMenuMain.append(boxHorizontalMenuBar);

	boxVerticalMenuMain.append(testLabel4); // <- Placeholder for the paint screen that will be added in the future
}

LicPaintWin::~LicPaintWin() {}

void LicPaintWin::menuButtonSignalHandler(const unsigned int butIndex) {
	std::cout<<"The button #" << butIndex << " was pressed." << std::endl; // DONT. FORGET. TO. FLUSH. THE. BUFFER.
}

// this code is not good yet but it will get fixed later
