#include "MyDialog.h"
#include <QVBoxLayout>
#include <QDialogButtonBox>

MyDialog::MyDialog(QWidget* parent):QDialog(parent) {
  QVBoxLayout* layout = new QVBoxLayout;
  this->dialogButtonBox = new QDialogButtonBox(
    QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
  layout->addWidget(this->dialogButtonBox);
  this->setLayout(layout);
  return;
}
