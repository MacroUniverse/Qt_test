#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QMainWindow>

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    QMainWindow window;
    QWidget centralWidget;
    QVBoxLayout layout;
    QPushButton button("Click me!");
    QLabel label;

    QObject::connect(&button, &QPushButton::clicked, [&]() {
        label.setText("Hello, world!");
    });

    layout.addWidget(&button);
    layout.addWidget(&label);
    centralWidget.setLayout(&layout);
    window.setCentralWidget(&centralWidget);
    window.show();

    return app.exec();
}
