#include "main_window.h"

MainWindow::MainWindow() {
    createMenu();
    createWidgets();

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(textBox);
    layout->addWidget(radioButton);
    layout->addWidget(selectionBox);

    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
}

void MainWindow::createMenu() {
    menuBar = new QMenuBar(this);
    setMenuBar(menuBar);

    fileMenu = new QMenu(tr("File"), this);
    menuBar->addMenu(fileMenu);

    exitAction = new QAction(tr("Exit"), this);
    fileMenu->addAction(exitAction);

    connect(exitAction, &QAction::triggered, this, &QMainWindow::close);
}

void MainWindow::createWidgets() {
    textBox = new QTextEdit(this);
    radioButton = new QRadioButton(tr("Sample Radio Button"), this);
    selectionBox = new QComboBox(this);

    selectionBox->addItem(tr("Option 1"));
    selectionBox->addItem(tr("Option 2"));
    selectionBox->addItem(tr("Option 3"));
}
