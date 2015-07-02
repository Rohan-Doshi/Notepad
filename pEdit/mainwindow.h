#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileDialog>
#include <QMessageBox>
#include <QColor>
#include <QInputDialog>
#include <QLayout>
#include <QPlainTextEdit>
#include <QTextCursor>
#include <QShortcut>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionCopy_triggered();

    void on_actionOpen_triggered();

    void on_actionNew_triggered();

    void on_actionRedo_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionQuit_triggered();

    void on_actionFIND_triggered();

    void on_btnfindprev_clicked();

    void on_btnfindnext_clicked();

    void on_actionReplace_triggered();

    void on_btnreplaceprev_clicked();

    void on_btnreplacenext_clicked();

private:
    Ui::MainWindow *ui;
    QString file_name;
    int saved;

};

#endif // MAINWINDOW_H
