#ifndef TABLEVIEWTEST_H
#define TABLEVIEWTEST_H

#include <QWidget>
#include <QStandardItemModel>
#include <QStandardItem>

namespace Ui {
class TableViewTest;
}

class TableViewTest : public QWidget
{
    Q_OBJECT

public:
    explicit TableViewTest(QWidget *parent = nullptr);
    ~TableViewTest();

private:
    Ui::TableViewTest *ui;
    QStandardItemModel *model;
};

#endif // TABLEVIEWTEST_H
