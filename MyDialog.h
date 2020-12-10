#ifndef MY_DIALOG_H
#define MY_DIALOG_H

#include <QDialog>
#include <QDialogButtonBox>

class MyDialog: public QDialog {
  Q_OBJECT
public:
  explicit MyDialog(QWidget* parent = nullptr);
private:
  QDialogButtonBox* dialogButtonBox;
};

#endif
