#include "tableviewtest.h"
#include "ui_tableviewtest.h"

#include <QDebug>

TableViewTest::TableViewTest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TableViewTest)
{
    ui->setupUi(this);

    this->model = new QStandardItemModel(this);
    for (auto i = 0; i < 10; i++) {
        for (auto j = 0; j < 10; j++) {
            auto item = new QStandardItem(QString("%1, %2").arg(i).arg(j));
            this->model->setItem(i, j, item);
        }
    }
    this->ui->tableView->setModel(model);
    qDebug() << this->model->rowCount() << this->model->columnCount();

    connect(this->ui->pushButton, &QPushButton::clicked, this, [this](){
        qDebug() << this->model->rowCount() << this->model->columnCount();

        for (auto i = 0; i < 10; i++) {
            for (auto j = 0; j < 10; j++) {
                this->model->item(i, j)->setText("Reset");
            }
        }
    });
}

TableViewTest::~TableViewTest()
{
    delete ui;
}
