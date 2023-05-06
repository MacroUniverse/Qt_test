g++ -c -std=c++17 -Wall -I/home/addis/Qt/6.4.2/gcc_64/include -I/home/addis/Qt/6.4.2/gcc_64/include/{QtWidgets,QtGui} -fPIC main.cpp main_window.cpp

g++ main.o main_window.o -o qt_example -L/home/addis/Qt/Tools/QtDesignStudio/qt5_design_studio_reduced_version/lib/ -lQt5Core -lQt5Gui -lQt5Widgets

