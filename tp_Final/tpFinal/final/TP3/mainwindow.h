#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QLabel *** labels;
    Ui::MainWindow *ui;
    unsigned long dim;
    void inicializarMatriz();
    int getValorMatriz(int i, int j);

public slots:
    void keyPressEvent(QKeyEvent * e);

};

#endif // MAINWINDOW_H
