#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "tableviewtest.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this->ui->pushButton, &QPushButton::clicked, this, [=](){
        static TableViewTest tableViewTest;
        tableViewTest.show();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
