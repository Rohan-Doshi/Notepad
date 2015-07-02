#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->txtedit);
    ui->txtedit->setVisible(false);
    ui->dockWidget->setVisible(false);
    ui->dockWidget_2->setVisible(false);
    QVBoxLayout *findLayout = new QVBoxLayout;
    findLayout->addWidget(ui->txtfind);
    findLayout->addWidget(ui->btnfindnext);
    findLayout->addWidget(ui->btnfindprev);
    ui->dockWidget->setLayout(findLayout);

//    QVBoxLayout *findLayout1 = new QVBoxLayout;
//    findLayout1->addWidget(ui->label);
//    findLayout1->addWidget(ui->txtreplace1);
//    findLayout1->addWidget(ui->label_2);
//    findLayout1->addWidget(ui->txtreplace1);
//    ui->dockWidget_2->setLayout(findLayout1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    file_name = "";
    ui->txtedit->setPlainText("");
    ui->txtedit->setVisible(true);
    saved = 0;
}

void MainWindow::on_actionOpen_triggered()
{
    ui->txtedit->setVisible(true);
    QString file = QFileDialog::getOpenFileName(this,"Open a file");

    if(!file.isEmpty())
    {
        QFile sFile(file);
        if(sFile.open(QFile::ReadOnly | QFile::Text))
        {
            file_name = file;
            QTextStream in(&sFile);
            QString text = in.readAll();
            sFile.close();

            ui->txtedit->setPlainText(text);
        }
    }
}

void MainWindow::on_actionCopy_triggered()
{
    ui->txtedit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->txtedit->paste();
}

void MainWindow::on_actionCut_triggered()
{
    ui->txtedit->cut();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->txtedit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->txtedit->redo();
}

void MainWindow::on_actionSave_triggered()
{
    if(file_name.isEmpty())
        on_actionSave_as_triggered();
    else
    {
        saved=1;
        QFile sFile(file_name);
        if(sFile.open(QFile::WriteOnly | QFile::Text))
        {
            QTextStream out(&sFile);

            out << ui->txtedit->toPlainText();

            sFile.flush();
            sFile.close();
        }
    }
}


void MainWindow::on_actionSave_as_triggered()
{
    QString file = QFileDialog::getSaveFileName(this,"Enter File");
    if(!file.isEmpty())
    {
        file_name = file;
        on_actionSave_triggered();
    }
}

void MainWindow::on_actionQuit_triggered()
{
    if(saved == 0)
    {
        QMessageBox msgBox;
         msgBox.setText("The document has been modified.");
         msgBox.setInformativeText("Do you want to save your changes?");
         msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
         msgBox.setDefaultButton(QMessageBox::Save);
         int ret = msgBox.exec();
         switch (ret)
         {
            case QMessageBox::Save:
                on_actionSave_triggered();
                break;
            case QMessageBox::Discard:
                exit(0);
                break;
            case QMessageBox::Cancel:
                break;
          }
     }
    exit(0);
}

void MainWindow::on_actionFIND_triggered()
{
    ui->dockWidget_2->setVisible(false);
    ui->dockWidget->setVisible(true);
}

void MainWindow::on_btnfindprev_clicked()
{
    QString str = ui->txtfind->text();
    bool ok = ui->txtedit->find(str,QTextDocument::FindBackward);
}

void MainWindow::on_btnfindnext_clicked()
{
    QTextCursor cursor;
    QString str = ui->txtfind->text();
    bool ok = ui->txtedit->find(str);
}

void MainWindow::on_actionReplace_triggered()
{
    ui->dockWidget->setVisible(false);
    ui->dockWidget_2->setVisible(true);
}

void MainWindow::on_btnreplaceprev_clicked()
{
    QTextCursor cursor;
    QString str = ui->txtreplace1->text();
    bool ok = ui->txtedit->find(str,QTextDocument::FindBackward);
    if(ok)
    {
        cursor=ui->txtedit->textCursor();
        cursor.insertText(ui->txtreplace2->text());
    }
}

void MainWindow::on_btnreplacenext_clicked()
{
    QTextCursor cursor;
    QString str = ui->txtreplace1->text();
    bool ok = ui->txtedit->find(str);
    if(ok)
    {
        cursor=ui->txtedit->textCursor();
        cursor.insertText(ui->txtreplace2->text());
    }
}
