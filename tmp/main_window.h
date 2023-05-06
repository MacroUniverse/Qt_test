#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QTextEdit>
#include <QRadioButton>
#include <QComboBox>
#include <QVBoxLayout>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow();

private:
    void createMenu();
    void createWidgets();

    QMenuBar *menuBar;
    QMenu *fileMenu;
    QAction *exitAction;

    QTextEdit *textBox;
    QRadioButton *radioButton;
    QComboBox *selectionBox;
};

#endif // MAIN_WINDOW_H
